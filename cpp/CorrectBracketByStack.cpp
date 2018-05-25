#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool correctBrackets(string x, stack<char> a){
	for(int i = 0; i < x.size(); i ++){
		if (x[i] == '{' || x[i] == '(' || x[i] == '[' ){
			a.push(x[i]);
		}
		
		else{
			if(!a.empty()){
				if(x[i] == '}'){
					if (a.top() == '{') a.pop();
					else return 0; 
				}
				
				if(x[i] == ')'){
					if (a.top() == '(') a.pop();
					else return 0; 
				}
				
				if(x[i] == ']'){
					if (a.top() == '[') a.pop();
					else return 0; 
				}
			}
			
			else return 0;
		}
	}
	
	return (a.empty());
}

int main(){
	int n;
	cin>> n;
	int t = n;
	bool b[10];
	while(t--){
		string x;
		stack<char> a;
		cin>> x;
		if(correctBrackets(x, a)) b[t + 1] = 1;
		else b[t + 1] = 0;
	}
	
	for(int i = n; i > 0; i --){
		if(b[i]) cout<< "yes"<< endl;
		else cout<< "no"<< endl;
	}
}
