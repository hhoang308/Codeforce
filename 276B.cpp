#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
    cin >> s;

    bool odd[26] = {false};
    for (size_t i = 0; i < s.length(); ++i)
    {
        odd[s[i]-'a'] = !odd[s[i]-'a'];
    }
    int oddcount = count(odd, odd + sizeof(odd) / sizeof(odd[0]), true);
    if(oddcount == 0 || oddcount % 2 == 1)
    	cout << "First";
    else
    	cout << "Second";
    return 0;
}
