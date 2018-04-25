#include<iostream>

using namespace std;

int front = 0, back = 0, a, n, t = 0;
long x, q[50000], b[50000];

bool isEmpty(){
	return back - front == 0;
}

//bool isFull(){
//	return end == 
//}

void enqueue(long &x){
	back++;
	q[back] = x;
}

void dequeue(){
//	int t = q[front];
	if(!isEmpty)
		front++;
}

int main(){
	cin>> a;
	for(int i = a; i > 0; i--) {
		cin>> n;
		switch(n) {
			case 1: {
				cin>> x;
				enqueue(x);
				break;
			}
			case 2: {    
				dequeue();
				break;
			}
			case 3: {
				b[t] = q[front];
				t++;
				break;
			}
		}
	}
	for(int i = 0; i < t; i++) {
		cout<< b[i]<< endl;
	}
}
