//ordered map
#include<bits/stdc++.h>

using namespace std;

void print(map<int,int> &mp){ //unordered_map
  // cout<<mp.size()<<endl;
    for(auto &x: mp) cout<<x.first<<" "<<x.second<<endl;
}

int main(){
   map <int,int> mp; //unordered_map
   vector<int> v(6);
   for(int i=0;i<6;i++) cin>>v[i];
   for(auto x: v) mp[x]++;//mp[1],mp[1],mp[2]-1-2 and 2-1
       //auto it =mp.find(2);//mp.end()
       //if(it != mp.end()) mp.erase(it); //conclude that we got our element in between 
       //if(it == mp.end(
//if(it != mp.end()) mp.erase(it); //conclude that we got our element in between 
       //if(it == mp.end()) cout<<"NO VALUE";
       //else cout<<(*it).first<<" " <<(*it).second<<endl;
       print(mp); 
    return 0;
}