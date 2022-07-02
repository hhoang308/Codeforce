#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, t, sum = 0, j = -1, maxcount = 0;
	cin >> n >> t;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int count = 0;
		if(sum + a[i] <= t){
			sum += a[i];
		}else{
			sum += a[i];
			while(sum > t){
				j++;
				sum -= a[j];
			}
		}
		count = i - j;
		maxcount = max(count, maxcount);
	}
	cout << maxcount;
	return 0;
}
