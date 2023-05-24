#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// class node{
// 	public:
// 		string songName;
// 		node *next;
// };

// void append()

int main(){
	string str;
	fstream inputFile("file.txt",ios::app);
	if(inputFile.is_open()){
		cout<<"Enter song name: ";
		getline(cin,str);
		inputFile<<"\n"<<str;
	}
	cin.ignore();
	inputFile.close();
	return 0;
}