#include<iostream>

using namespace std;

int main(){
	int n, i, j, max;//, count[n];
	cin>>n;
	int a[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	i = 0;
	j = 0;
	while(1){
		if(a[i][j] == 0) i++;
        else {
            j++;
//            count[i] = j;
//            if (count[i] < count[i + 1]) count[i] = count[i + 1];
        }
    	if(i == n-1 || j == n-1) break;
	}
	max = i;
	cout<<max;
}
