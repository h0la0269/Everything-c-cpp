#include <iostream>
#include <stack>
#include <string>


using namespace std;

int precedence(char optr){
    if (optr == '^')
    	return 3;
   else if(optr == '/' or optr == '*')
   	return 2;
   else if(optr == '*' or optr == '*')
	return 1;
    else return -1;
}


void inf_to_pos(string str){
    stack<char> st;
    string result;
    for (int i = 0; i < str.length(); ++i)
    {
	char c=str[i];
      	if((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z') or (c >= '0' and c <= '9'))
      	    result += c;
	else if(c=='(')
	    st.push(c);
    	else if(c==')'){
    	    while(st.top()!= '(') {
    	        result += c;
    		st.pop();
    	    }
    	    st.pop();
    	}
	else{
	    while(!st.empty() and precedence(c) <= precedence(st.top())){
		result+=st.top();
	    	st.pop();
	    }
	    st.push(c);
	}
   	}
    	while (!st.empty()){
		result +=st.top();
		st.pop();
    }
    cout<<result<<"\n";
}



int main(){
    	string s;
	s = "((a+b)-c*(d/e))+f";
    	inf_to_pos(s);
	return 0;
}