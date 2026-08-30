#include"student.h"

void delete_record(SLL **ptr,char op){
	if(*ptr==0){
		printf("No Student Records...\n");
		return;
	}
	int num=0;
	SLL *del,*prev;
	int N=0;
	del=*ptr;
	char str[20];
	if(op=='R'){
	printf("Enter Student Roll Number:\n");	
	scanf("%d",&num);
	}
	else{
		printf("Enter Student Name:\n");
		scanf("%s",str);
	}
	if(num!=0){
	while(del){
		if(del->rollno==num){
			N=1;
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;
		free(del);
		break;
		}
		prev=del;
		del=del->next;
	}}
else{
	while(del){
		if(strcmp(str,del->name)==0){
			N=1;
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;
		free(del);
		break;
		}
		prev=del;
		del=del->next;
	}}
	if(N==0)
		printf("\n*** Student Data NOt Found ***\n");
	
	printf("\n$$$ Student Record Deleted $$$\n");
	//save_file(*ptr);
}
void del_all(SLL **ptr){
	if(*ptr==0){
		printf("No Student records....\n");
		return;
	}
	SLL *del=*ptr;
	while(del){
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("All the Students records Deleted ###\n");
	//save_file(*ptr);
}


















