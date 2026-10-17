#include"student.h"

void delete_record(SLL **ptr,char op){
	if(*ptr==0){
		printf("No Student Records...\n");
		return;
	}
	int num=0;
	SLL *del,*prev;
	int N=0,count=0;
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
		if(op!='R'){
	    while(del){
		if(strcmp(str,del->name)==0){
		    printf("%d 	%s\n",del->rollno,del->name);
		    count++;
		}
		del=del->next;
	    }
	}
	if(op!='R'){
	    if(count==0){
		printf("*** Student Data Not Found ***\n");
		return;
	    }

	    if(count>1){
		printf("Enter Student Roll Number:\n");
		scanf("%d",&num);
	    }
	}
	if(op!='R' && count==1){
	    del=*ptr;
	    while(del){
		if(strcmp(str,del->name)==0){
		    num=del->rollno;
		    break;
		}
		del=del->next;
	    }
	}
	
	del=*ptr;
	prev=NULL;

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
	}
	if(N==0)
    		printf("\n*** Student Data Not Found ***\n");
	else
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


















