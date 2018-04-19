#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char s[100];
	cin.getline(s, 100);
	int i = 0, j = strlen(s) - 1;
	while(i <= j){
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	cout<<s;
}
