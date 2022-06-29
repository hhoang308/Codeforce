#include<iostream>

using namespace std;

int main(){
	int n, m, result = 0;
	cin >> n >> m;
	while(n != m){
		if (m > n)
            if (m % 2 == 0) m /= 2, result++;
            else m++, result++;
        else if (n > m) m++, result++;
	}
	cout << result << endl;
	return 0;
}
