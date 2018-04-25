#include<iostream>

using namespace std;

int x, s[50000], top = -1, a, n, t, b[50000];

bool isEmpty() {
	return top == -1;
}

void push(int &x) {
	top++;
	s[top] = x;
}
//
//int peak(Stack s, item x) {
//	if(!isEmpty(s)) {
//		return s.data[s.top - 1];
//	}
//}

void pop() {
	if(!isEmpty()) {
		int t = s[top];
		top--;
	}
}

int main() {
	cin>> a;
	for(int i = a; i > 0; i--) {
		cin>> n;
		switch(n) {
			case 1: {
				cin>> x;
				push(x);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				b[t] = s[top];
				t++;
				break;
			}
		}
	}
	for(int i = 0; i < t; i++) {
		cout<< b[i]<< endl;
	}
}
