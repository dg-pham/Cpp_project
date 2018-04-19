#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char s[100];
	cin.get(s, 100);
	
	int i, j;
	cin>> i>> j;
	
	char tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
	
	cout<<s;
}
