#include <stdio.h>
#include<stdlib.h>
#define size 50

typedef struct
{
	long int e_id;
	int yoa;
	char *name[size], dept[];

}node;


void init(node *ptr){
	ptr=NULL;
}

void add_rcd(node *ptr, char *name,int year, int id){
	node *tmp=(node *)malloc(sizeof(node));
	tmp->name = name;
	tmp->yoa=year;
	tmp->e_id=id;

}

// void sch_vw(node *ptr)

int main(){
	node *node;
	int opt;
	char *name;
	init(node);
	while(1){
		printf("\n\nSTUDENTS RECORD\n\n");
		printf("\n1. Add to record\n");
		printf("2. Show Students list.\n");
		printf("3. Update existing student record.\n");
		printf("4. Search and View a record\n");
		printf("5. Exit\n");
		printf("\nENTER VALID INPUT:");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
		int year, enr_id;
			char *name[size];
			// name=malloc(sizeof(char)*size);
			printf("\nEnter details to be added:\n");
			printf("Name of Student: ");
			scanf("%s", &name[size]);
			printf("\nYear of Admission: ");
			scanf("%d", &year);
			 printf("\nEnrollment ID(5 digits): ");
			 scanf("%d", &enr_id);
			add_rcd(node, name, year, enr_id);
			break;
		case 	2:
			// show_rcd();
			break;
		case 	3:
			// update();//will add search and view and then editing the record
			break;
		case 4:
			// sch_vw();//adding option to update the list as well
			break;
		case 	5:
			return 0;
			break;
		default:
			printf("\nINVALID INPUT\n\n");
			break;
		}
	}
	return 0;
}