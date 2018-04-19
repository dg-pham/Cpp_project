#include<iostream>

using namespace std;

long a[100];
void merge(long, long, long);

void mergesort(long bot, long top){
	long mid;
	if(bot < top){
		mid = bot + (top - bot) / 2; //avoiding overflow
		mergesort(bot , mid);
		mergesort(mid + 1, top);
		merge(bot, mid, top);
	}
}

void merge(long bot, long mid, long top){
	long h, i, j, k, b[100];
	h = bot;
	i = bot;
	j = mid + 1;
	
	while(h <= mid && j <= top){
		if(a[h] < a[j]){
			b[i] = a[h];
			h++;
		} else{
			b[i] = a[j];
			j++;
		}
		i++;
	}
	
	if(h > mid){
		for(k = j; k < top + 1; k++){
			b[i] = a[k];
			i++;
		} 
	} else{
		for(k = h; k < mid + 1; k++){
			b[i] = a[k];
			i++;		
		}
	}
	for(k = bot; k < top + 1; k++){
		a[k] = b[k];
	}
}

int main(){
	long i, n;
	cin>> n;
	for(i = 1; i < n + 1; i++){
		cin>> a[i];
	}
	mergesort(1, n);
	for(i = 1; i < n + 1; i++)
		cout<< a[i]<<" ";
	
}


