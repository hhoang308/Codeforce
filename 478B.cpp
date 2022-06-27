#include<iostream>
#include<cmath>

using namespace std;

long long int pairs(long long int x){
	return x*(x-1)/2;
}

int main(){
	long long int participants, teams;
	cin >> participants >> teams;
	long long int residue = participants % teams;
	long long int memberPerTeam = participants/teams;
	long long int min = pairs(memberPerTeam) * (teams - residue) + pairs(1 + memberPerTeam)*residue;
	long long int max = pairs(participants - teams + 1);
	cout << min << " " << max;
	return 0;
}
