//ordered map
#include<bits/stdc++.h>

using namespace std;

void print(unordered_map<int,string> &mp){
  // cout<<mp.size()<<endl;
    for(auto &x: mp) cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    unordered_map <int,string> mp;
    mp[1]="abc";
    mp[5]="cdc";
     mp[3]="acd";
      mp[6]="a";
       mp[5]="cde";
       //auto it =mp.find(2);//mp.end()
       //if(it != mp.end()) mp.erase(it); //conclude that we got our element in between 
       //if(it == mp.end()) cout<<"NO VALUE
 //else cout<<(*it).first<<" " <<(*it).second<<endl;
       print(mp); 
    return 0;
}