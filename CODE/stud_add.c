#include"student.h"


void add_record(SLL **ptr){
	SLL *new=malloc(sizeof(SLL)),*last;
	rollno(&new,*ptr);
	printf("Enter Name and Marks:\n");
	scanf("%s %f",new->name,&new->marks);
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
void rollno(SLL **ptr,SLL *hptr){
	SLL *slot;
	int count=1;
	while(1){
		slot=hptr;
		while(slot!=0){
			if(slot->rollno == count)
				break;

			slot=slot->next;
		}
		if(slot==0)
			break;
		count++;
	}	
	(*ptr)->rollno=count;
}
