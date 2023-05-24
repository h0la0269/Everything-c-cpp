#include<stdio.h>
#include<stdlib.h>
struct Student{
    int id;
    char name[30], stream[100];
}e[100];
int n;

//Add Student
void add(struct Student e[]);
//Show all Student
void show(struct Student e[]);
//Delete Student detail
void delete(struct Student e[]);
//Search Student
void search(struct Student e[]);

int main(){
    printf("Enter number of Student:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter id and name of Student %d;\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&e[i].id);
        fflush(stdin);
        printf("Enter Student Name: ");
        gets(e[i].name);
        fflush(stdin);
        printf("Enter stream of student: ");
        gets(e[i].stream);
        printf("\n");
    }
    start:
    printf("\n\n-------OPERATIONS------\n");
    printf("1. Add Student\n");
    printf("2. Search an Student\n");
    printf("3. Show all Student\n");
    printf("4. Delete an Student detail\n");
    printf("5. Exit Program\n");
    printf("Enter the operation to be performed: ");
    int input;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
    add(e);
    break;
    
    case 2:
    search(e);
    break;

    case 3:
    show(e);
    break;

    case 4:
    delete(e);
    break;

    default:
    exit(0);
    }
    goto start;
return 0;
}

void show(struct Student e[]){
    for(int i=0;i<n;i++){
        printf("Id : %d , Name : %s, Stream : %s\n",e[i].id,e[i].name,e[i].stream);
    }
}

void add(struct Student e[]){
    printf("Enter new Student details\n");
    printf("Enter student ID: ");
    scanf("%d",&e[n].id);
    fflush(stdin);
    printf ("Enter student name: ");
    gets(e[n].name);
    fflush(stdin);
    printf ("Enter stream: ");
    gets(e[n].stream);
    n++;
}

void delete(struct Student e[]){
    int temp,count=0;
    printf("Enter id to be deleted:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            temp=i;
            count++;
        }
    }
    if(count==1){
        for(int j=temp;j<n;j++){
            e[j]=e[j+1];
        }
    }
    else{
        printf("Student don't Exist !\n");
    }
    n--;
}

void search(struct Student e[]){
    int temp,count=0;
    printf("Enter id to be searched:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            printf("Student Found !\n");
            printf("Id : %d , Name : %s, Stream : %s\n",e[i].id,e[i].name, e[i].stream);
            count++;
        }
    }
    if(count!=1){
        printf("Student don't Exist !\n");
    }
    
}