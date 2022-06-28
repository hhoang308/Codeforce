#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n, l, r;
		long long int result = 0;
		cin >> n >> l >> r;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i=0;i<n;i++)
			result+=(upper_bound(a+i+1,a+n,r-a[i])-lower_bound(a+i+1,a+n,l-a[i]));
		cout<< result <<endl;
	}
	return 0;
}
