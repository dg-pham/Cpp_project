#include<iostream>

using namespace std;

void arrange(int n, int a[]) {
	for(int i = 0; i < n; i++) {
		for(int j = i; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
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

void output(int n, int a[]){
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
