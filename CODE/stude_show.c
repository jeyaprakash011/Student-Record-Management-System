#include"student.h"

void print_node(SLL *ptr){
	if(ptr==0){
		printf("No data.....\n");
		return;
	}
	while(ptr){
		printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}

}
