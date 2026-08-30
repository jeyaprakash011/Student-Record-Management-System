#include"student.h"


void sort_data(SLL *ptr,char op){
	int count=count_record(ptr),i,j;
	if(count==0){
		printf("No Students records...\n");
		return;
	}
	SLL *p1=ptr,*p2,t;
if(count>1){
	if(op=='R'){
	for(i=0;i<count-1;i++){
		p2=p1->next;
		for(j=0;j<count-1-i;j++){
			if(p1->rollno>p2->rollno){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.marks=p1->marks;
				
				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;
			}
		p2=p2->next;	
		}
	p1=p1->next;
	}}

	if(op=='N'){
	for(i=0;i<count-1;i++){
		p2=p1->next;
		for(j=0;j<count-1-i;j++){
			if(strcmp(p1->name,p2->name)>0){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.marks=p1->marks;
				
				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;
			}
		p2=p2->next;	
		}
	p1=p1->next;
	}}

	if(op=='P'){
	for(i=0;i<count-1;i++){
		p2=p1->next;
		for(j=0;j<count-1-i;j++){
			if(p1->marks < p2->marks){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.marks=p1->marks;
				
				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;
			}
		p2=p2->next;	
		}
	p1=p1->next;
	}}
	}


	//save_file(ptr);
	printf("\n$$$ Sorted Successfully $$$\n");
}
int count_record(SLL *ptr){
	if(ptr==0){
		return 0;
	}
	int c=0;
	while(ptr){
		c++;
		ptr=ptr->next;
	}
	return c;
}

void rev_links(SLL **ptr){
	if(*ptr==0){
		printf("No Student Records....\n");
		return;
	}
	SLL **p,*t=*ptr;
	int count=count_record(*ptr),i;
	p=malloc(sizeof(SLL *)*count);
	if(count>1){
		for(i=0;i<count;i++){
			p[i]=t;
			t=t->next;
		}
		for(i=count-1;i>0;i--)
			p[i]->next=p[i-1];

		p[0]->next=0;
		*ptr=p[count-1];
	}
	printf("\n$$$ Data Reversed Successfully $$$\n");
}
void mod_record(SLL *ptr,char op){
	if(ptr==0){
		printf("No records....\n");
		return;
	}
	SLL *mod=ptr;
	int num=0,N=0;char str[20]; float per=0.0;
	if(op=='R'){
		printf("Enter Student Roll Number:\n");
		scanf("%d",&num);
	}
	if(op=='N'){
		printf("Enter Student Name:\n");
		scanf("%s",str);
	}
	if(op=='P'){
		printf("Enter Student Marks:\n");
		scanf("%f",&per);
	}
	if(op=='R'){
	while(mod){
		if(mod->rollno == num){
			N=1;
			printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
			scanf("%s%f",mod->name,&mod->marks);
			break;
		}	
	mod=mod->next;
	}}
	if(op=='N'){
	while(mod){
		if(strcmp(mod->name,str)==0){
			N=1;
			printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
			scanf("%s%f",mod->name,&mod->marks);
			break;
		}	
	mod=mod->next;
	}}
	if(op=='P'){
	while(mod){
		if(mod->marks == per){
			N=1;
			printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
			scanf("%s%f",mod->name,&mod->marks);
			break;
		}	
	mod=mod->next;
	}}
	if(N==0)
		printf("\n### Student Data Not Found ###\n");

}

























