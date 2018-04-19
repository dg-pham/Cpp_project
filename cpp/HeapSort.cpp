#include<iostream>

using namespace std;

void maxheapify(int i, int n, int a[]){
	int temp = a[i];
	int j = 2 * i;
	
	while(j <= n){
		if (j < n && a[j] < a[j + 1]){
			j = j + 1;
		}
		
		if (temp > a[j]){
			break;
		}
		
		if (temp <= a[j]){
			a[j / 2] = a[j];
			j = 2 * j;
		}
	}
	
	a[j / 2] = temp;
	return;
}

void arrange(int n, int a[]){
	int i, temp;
	for(i = n; i > 0; i--){
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		maxheapify(1 , i - 1, a);	
	}
}

void buildheap(int n, int a[]) {
	int i;
	for(i = n / 2; i > 0; i--){
		maxheapify(i, n, a);
	}
}

//void input(int &n, int a[]) {
//	cin>>n;
//	for(int i = 1; i < n; i++) {
//		cin>> a[i];
//	}
//}

//void output(int n, int a[]){
//	for(int i = 1; i < n; i++) {
//		cout<< a[i] << " ";
//	}
//}
int main() {
	int i, n;
	cin>> n;
	int a[n];
	n++;
	for(i = 1; i < n; i++){
		cin>>a[i];
	}
//	input(n - 1, a);
	buildheap(n - 1, a);
	arrange(n - 1, a);
//	output(n - 1, a);
	for(int i = 1; i < n; i++){
		cout<<a[i]<<" ";
	}
}
