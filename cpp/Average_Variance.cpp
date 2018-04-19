#include<iostream>

using namespace std;


int main(){
    int n;
    cin>> n;
    double a[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin>> a[i];
    	sum += a[i];
    }
//    cout<< sum;
    double average = sum / n;
    cout<< (long) average<< " ";
    double term;
	double sos = 0;
    for(int i = 0; i < n; i++){
    	term = (a[i] - average) * (a[i] - average);
    	sos = sos + term;
	}
	long variance = sos / (n - 1);
	cout<< variance;
}


