#include<iostream>

using namespace std;

int main(){
	int n;
	int even = 0;
	int lastodd = 0;
	int lasteven = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x % 2 == 0){
			even++;
			lasteven = i;
		}else{
			even--;
			lastodd = i;
		}
	}
	if(even > 0)
		cout << lastodd;
	else 
		cout << lasteven;
		
	return 0;
}
