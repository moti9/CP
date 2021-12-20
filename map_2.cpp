#include<iostream>
#include<string.h> 
#include<map>
#include<vector>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int, string> mp;
    mp['M']= "63";
    mp['o']= "3";
    mp['t']= "81";
    mp['k']= "8";
    mp['m']= "1";
    mp['a']= "55";
    for (auto &x : mp)
        cout << x.first << " " << x.second << endl;
return 0;
}