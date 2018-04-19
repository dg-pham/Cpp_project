#include<iostream>
#include<string.h>

using namespace std;

int i = 0;
char s[1000], s1[500][500], *p;


void split(){
	p = strtok(s, " ");
	
	while(p != '\0'){
		strcpy(s1[i] , p);
		i++;
		p = strtok(NULL, " ");
	}
	
}

int main(){
	cin.get(s, 1000);
	split();
	cout<< i;
}
