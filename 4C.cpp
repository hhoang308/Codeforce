#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	map<string, int> x;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		if(x.count(s) == 0){
			cout << "OK" << endl;
			x[s] = 1;
		}else{
			cout << s << x[s] << endl;
			x[s] ++;
		}
			
	}
	return 0;
}
