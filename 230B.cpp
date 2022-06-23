#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000
long long i, j;
long long prime_flag[LIMIT];
void calculate_prime_flag(){
    prime_flag[0] = prime_flag[1] = 1;
    for(i=2;i<LIMIT;i++){
        if (prime_flag[i]==0){
            for(j=i*i;j<LIMIT;j+=i){
                prime_flag[j] = 1;
            }
        }
    }
}

int main(){
	int n;
	cin >> n;
	calculate_prime_flag();
	while(n--){
		long long x;
		cin >> x;
		double k = sqrt(x);
		if(x == 4){
			cout << "YES\n";
		}else if(x % 2 == 0){
			cout << "NO\n";
		}else if(k == int(k) && prime_flag[int(sqrt(x))]==0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
