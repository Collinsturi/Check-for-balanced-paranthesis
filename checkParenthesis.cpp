#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

bool checkParanthesis(string exp){
	int n = exp.length();
	
	stack<char> s;
	
	for(int i = 0; i < n-1; i++){
		if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
			s.push(exp[i]);
		}else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}'){
			if(s.empty()){
				return false;
			}else{
				s.pop();
			}
			
		}
		
		return true;
	}
	
	return s.empty()? true:false;
}

int main(){
	char exp[] = "{()}";
	
	if(checkParanthesis(exp)){
		cout<<"This is a balanced paranthesis.";
	}else{
		cout<<"This is not a balanced paranthesis.";
	}
}
