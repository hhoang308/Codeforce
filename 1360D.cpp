#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
//feeling bad
int main(){
	int n;
	cin >> n;
	while(n--){
		int shovels, packages;
		int result = 0;
		cin >> shovels >> packages;
		for(int i = 1; i <= sqrt(shovels); i++){
			if(shovels % i == 0){
				if(i <= packages)	
					result = max(result, i);
				if(shovels/i <= packages)	
					result = max(result, shovels/i);
			}
		}
		cout << shovels/result << endl;
	}
	return 0;
}
