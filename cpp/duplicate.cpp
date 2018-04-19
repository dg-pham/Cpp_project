#include<iostream>
#include<string.h>


using namespace std;

int i = 0;
char s[100], s1[50][50], *p;

void reverse(){
	p = strtok(s, " ");
	
	while(p != '\0'){
		strcpy(s1[i] , p);
		i++;
		p = strtok(NULL, " ");
	}
	i--;	
}

int main(){
	cin.get(s, 100);
	reverse();
	while(i >= 0){
		cout<< s1[i]<< " ";
		i--;
	}
}
