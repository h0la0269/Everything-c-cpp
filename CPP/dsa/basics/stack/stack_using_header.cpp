#include <iostream>
#include <stack>

using namespace std;

int main (){
	stack<char> st;
	char input;
	cout << "Enter a number [on completion press EOF (CTRL + Z)]: " << endl;
	while (cin >> input)
		st.push(input);
	cout << "The top item is: " << st.top() << endl;
	st.pop();
	st.pop();
	cout << "The top item is: " << st.top() << endl;
	return 0;
}
