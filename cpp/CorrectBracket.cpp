#include<iostream>
#include<string>

using namespace std;

bool correctString(string x){
	int t = -1;
	char s[10001];
	
	for(int i = 0; i < x.size(); i++){
		if (x[i] == '{' || x[i] == '(' || x[i] == '[' ){
			t++;
			s[t] = x[i];
		}
		
		if(x[i] == ']'){
			if(t < 0) return false;
			if(s[t] != '[') return false;
			else t--;
		}
		
		if(x[i] == ')'){
			if(t < 0) return false;
			if(s[t] != '(') return false;
			else t--;
		}
		
		if(x[i] == '}'){
			if(t < 0) return false;
			if(s[t] != '{') return false;
			else t--;
		}
	}
	
	return t == -1;
}

int main(){
	short n;
	cin>> n;
	string x;
	bool a[10];
	short t = n;
	
	while (t--){
		cin>> x;
		if (correctString(x)) a[t + 1] = 1;
		else a[t + 1] = 0;
	}
	
	for(int i = n; i > 0; i--){
		if(a[i]) cout<< "yes"<< endl;
		else cout<< "no"<< endl;
	}
}
