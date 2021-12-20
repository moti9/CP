#include <bits/stdc++.h>

using namespace std;

void display(map<int, string> &mp)
{
    // cout<<mp.size()<<endl;
    for (auto &x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "cdc";
    mp[3] = "acd";
    mp[6] = "a";
    mp[5] = "cde";
    auto it = mp.find(3); //2
    if (it == mp.end())
        mp.erase(it);
    // if(it == mp.end()) cout<<"NO VALUE";
    // else cout<<(*it).first<<" " <<(*it).second;
    display(mp);
    return 0;
}