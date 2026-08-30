#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
	int rollno;
	char name[20];
	float marks;
	struct student *next;
}SLL;

void add_record(SLL **);
void rollno(SLL **,SLL *);
void print_node(SLL *);
void save_file(SLL *);
void read_file(SLL **);
void delete_record(SLL **,char );
void del_all(SLL **);
void sort_data(SLL *,char );
int count_record(SLL *);
void rev_links(SLL **);
void mod_record(SLL *,char );
