#include <stdio.h>
#include<stdlib.h>

int parenth(FILE *fptr){
	char ch;
	int open=0, close=0;
	while((ch=fgetc(fptr)) !=EOF){
		if(ch=='(' || ch=='{' || ch=='[')
			open++;
		if(ch==')' || ch=='}' || ch==']')
			close++;
	}
	if(open == 0 && close ==0)
		return 1;
	else if(open==close)
		return 2;
	else  return 0;
}
int main (){
	FILE *fptr=fopen("file_to_read.txt", "r");
	int c;
	if(fptr!= NULL)
		c=parenth(fptr);
	if(c==1)
		printf("No parenthesis found.\n\n");
	else if(c==2)
		printf("Properly Parenthesized.\n\n");
	else
		printf("NOT Properly Parenthesized.\n\n");
	return 0;
}