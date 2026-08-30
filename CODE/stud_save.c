#include"student.h"

void save_file(SLL *ptr){
	/*if(ptr==0){
		printf("No student data....\n");
		return;
	}*/
	FILE *fp=fopen("student.dat","w");
	fputs("-------------------------------------------------\n",fp);
	fputs("Roll.no		Name			marks\n",fp);
	fputs("-------------------------------------------------\n",fp);
	while(ptr){
		fprintf(fp,"%d		%s			%.2f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	fclose(fp);
	printf("\nUpdated Successfully.....\n");
}
void read_file(SLL **ptr){

	FILE *fp=fopen("student.dat","r");
	if(fp==0){
		printf("\n	*** File not Found ***	\n");
		return;
	}
	SLL *new,*last;
	char str[100];
	for(int i=0;i<3;i++){
		fgets(str,sizeof(str),fp);
	}	
	while(1){
		new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)!=3)
			break;
		new->next=0;
		if(*ptr==0)
			*ptr=new;
		else{
			last=*ptr;
			while(last->next!=0)
				last=last->next;
			last->next=new;
		}
			
	}
	fclose(fp);

}
