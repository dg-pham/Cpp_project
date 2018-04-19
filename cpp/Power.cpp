#include<iostream>

using namespace std;

double p(double a, int b){
	if(b == 0) return 1;
	if(b == 1) return a;
	double temp = p(a, b/2);
	return (b % 2 == 0) ? temp * temp : temp * temp * a;
}
int main(){
	double x;
	int n;
	cin>>x>>n;
	double result = p(x, n);
	if (n < 0){
		if (x == 0){
			cout<<"ERROR";
		} else{
		cout<< 1 / result;
		}
	}
	else
		cout<< result;
}

