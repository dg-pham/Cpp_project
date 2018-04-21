#include<iostream>

using namespace std;

bool isPrime(int element){
	if(element < 2) return false;
	if(element == 2) return true;
	if(element % 2 == 0) return false;
	else{
		for(int i = 3; i < element - 1; i += 2){
			if (element % i == 0){
				return false;
				break;
			}
		}
		return true;
	}
}

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
	int j[n];
	int b[n];
	int t = 1;
	
	for(i = 1; i < n; i++){
		cin>>a[i];
	}
	
	for(i = 1; i < n; i++){
		if(isPrime(a[i])){
			b[t] = a[i];
			j[t] = i;
			t++;
		}
	}
	
	buildheap(t - 1, b);
	arrange(t - 1, b);
	
	for(i = 1; i < t; i++){
		a[j[i]] = b[i];
	}
	
//	output(n - 1, a);
	for(i = 1; i < n; i++){
		cout<<a[i]<<" ";
	}
}
