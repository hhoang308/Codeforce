#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long int time = 0;
	int dissapointed = 0;
	long long int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		if(a[i] >= time){
			dissapointed++;
			time += a[i];
		}
	}
	cout << dissapointed;
	return 0;
}
