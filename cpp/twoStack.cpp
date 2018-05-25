#include<iostream>
#include<queue>

using namespace std;

//int game(int &m,int &n, int a[], int b[], stack s){
//	for(int i = 0; i < m; i)
//}

int main(){
	int i, n, m, x, count = 0, sum = 0;
	cin>> m>> n>> x;
	int a[n], b[m];
	queue<int> s1, s2;
	for(i = 0; i < n; i ++){
		cin>> a[i];
		s1.push(a[i]);
	}
	
	for(i = 0; i < m; i ++){
		cin>> b[i];
		s2.push(b[i]);
	}
	
	while(sum <= x){
		if (!s1.empty() && s2.empty()){
			count ++;
			sum += s2.front();
			s2.pop();
		} if (!s1.empty() && s2.empty()){
			count ++;
			sum += s1.front();
			s1.pop();
		} if (!s1.empty() && !s2.empty()){
			if(s1.front() >= s2.front()){
				count ++;
				sum += s2.front();
				s2.pop();
			} else{
				count ++;
				sum += s1.front();
				s1.pop();
			}
		} else{
			break;
		}
	}
	
	cout<< count;
}
