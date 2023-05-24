//Rock Paper Scissors Game
#include<iostream>
using namespace std;
char userGivenChoice(){
	int choice;
	do
	{
		cout<<"Choose one of the following"<<endl;
		cout<<"'r' for rock"<<endl;
		cout<<"'p' for paper"<<endl;
		cout<<"s for scissoris"<<endl;
		cout<<"Your choice: ";
		cin>>choice;
	} while ((choice !='r' or choice != 'R') and (choice !='p' or choice != 'P') and (choice !='s' or choice != 'S'));
	return choice;
}
char computerGivenChoice();
void showChoice(char choice){
	switch (choice)
	{
	case 'r': cout<<"Rock"<<endl;
		break;
	case 'p': cout<<"Paper"<<endl;
		break;
	case 's': cout<<"Scissors"<<endl;
		break;
	
	default:
		break;
	}
}
void chooseWinner(char ,char);
int main(){
	char player,computer;
	cout<<"\nRock, Paper, Scissors Game"<<endl;
	player=userGivenChoice();
	computer=computerGivenChoice();

	return 0;
}