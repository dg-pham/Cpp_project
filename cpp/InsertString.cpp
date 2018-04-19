#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int i;
	char s[100];
	cin.get(s, 100);
//	cout<<s;
	int n;
	cin>> n;
	char c;
	cin>> c;
	for(i = 0; i < n ; i++){
		cout<<s[i];
	}
	cout<<c;
	
	for(i = n ; i < strlen(s); i++){
		cout<<s[i];
	}
}
