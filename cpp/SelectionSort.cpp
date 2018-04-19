#include<iostream>

using namespace std;

void arrange(int &n, int a[]) {
	for(int i = 0; i < n; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
			
			if (min != i){
				int temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}
		}
	}
}

void input(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>> a[i];
	}
}

void output(int &n, int a[]){
	for(int i = 0; i < n; i++) {
		cout<< a[i] << " ";
	}
}
int main() {
	int n;
	int a[100];
	input(n, a);
	arrange(n, a);
	output(n, a);
}
