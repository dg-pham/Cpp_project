#include<iostream>

using namespace std;

void quicksort(int a[], int l, int r){
	int i = l;
	int j = r;
	int pivot = a[(l + r) / 2];
	int tmp;
	
	while(i <= j){
		while(a[i] < pivot){
			i++;
		}
		
		while(a[j] > pivot){
			j--;
		}
		
		if(i <= j){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	
	if(l < j){
		quicksort(a, l, j);
	}
	
	if(i < r){
		quicksort(a, i, r);
	}
}

int main()
{
	int n, a[100];
	cin>> n;
	
	for(int i = 0; i < n; i++){
		cin>> a[i];
	}
	
	quicksort(a, 0, n - 1);
	
	for(int i = 0; i < n; i++){
		cout<< a[i]<<" ";
	}
}
