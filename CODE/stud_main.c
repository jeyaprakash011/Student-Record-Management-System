#include"student.h"


int main()
{
	SLL *headptr=0;
	char op;
	read_file(&headptr);
	while(1){
		printf("\n***********************************************************************************\n");
		printf("\na/A : ADD new Record\t\td/D : Delete a Record\t\ts/S : Show the List\nm/M : Modify a Record\t\tv/V : save Records\t\te/E : Exit\nt/T : Sort the List\t\tl/L : Delete all the Records\tr/R : Reverse the List\n");
		printf("\nEnetr your option:\n");
		printf("\n***********************************************************************************\n");
		scanf(" %c",&op);
		switch(op){

		case 'a':
		case 'A':add_record(&headptr);break;
		case 's':
		case 'S':print_node(headptr);break;
		case 'v':
		case 'V':save_file(headptr);break;
		case 'd':
		case 'D':printf("R/r: Delete by Student Roll Number\nN/n: Delete by Student Name\n");
			scanf(" %c",&op);
			switch(op){
			case 'r':
			case 'R':delete_record(&headptr,'R');break;
			case 'n':
			case 'N':delete_record(&headptr,'N');break;
			default:printf("\n### Unknown Choice ###\n");
			}
			break;
		case 'l':
		case 'L':del_all(&headptr);break;
		case 't':
		case 'T':printf("R/r: Sort by Roll Number\nN/n: Sort by Name\nP/p: Sort by Marks\n");
			scanf(" %c",&op);
			switch(op){
				case 'r':
				case 'R':sort_data(headptr,'R');break;
				case 'n':
				case 'N':sort_data(headptr,'N');break;
				case 'p':
				case 'P':sort_data(headptr,'P');break;
				default:printf("\n@@@ Unknown Choice @@@\n");
			}
			break;
		case 'r':
		case 'R':rev_links(&headptr);break;
		case 'm':
		case 'M':printf("R/r: Search by Roll Number\nN/n: Search ny Name\nP/p: Search by Percentage\n");
			scanf( " %c",&op);
			switch(op){
				case 'r':
				case 'R':mod_record(headptr,'R');break;
				case 'n':
				case 'N':mod_record(headptr,'N');break;
				case 'p':
				case 'P':mod_record(headptr,'P');break;
				default:printf("\n### Unknown Choice ###\n");
			}
			break;
		case 'e':
		case 'E':printf("S/s: Save and Exit\nE/e: Exit Without Saving\n");
			scanf(" %c",&op);
			switch(op){
				case 's':
				case 'S':save_file(headptr);
					exit(0);
				case 'e':
				case 'E':exit(0);
				default:printf("\n@@@ Unknown Choice @@@\n");
			}
			break;
		default:printf("Unknown Choice\n");
		}

	}

}
