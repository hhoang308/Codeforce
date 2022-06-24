#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int x;
		bool check = true;
		cin >> x;
		for(int i = 2; i*i <= x; i++){
			int d;
			if(x % i == 0){
				d = x/i;
				for(int j = i + 1; j*j < d; j++){
					if(d % j == 0){
						cout << "YES\n" << i << " " << j << " " << d/j << "\n";						
						check = false;
						break;
					}
				}
			}
			if(check == false)
				break;
		}
		if(check == true){
			cout << "NO\n";
		} 
	}
	return 0;
}
