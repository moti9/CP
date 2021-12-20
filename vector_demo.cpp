#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> vec(0); //int a[4]
    vec.push_back(10); //v[0]=10;
    vec.push_back(20); //v[0]=20;
    vec.push_back(30); //v[0]=30;
    vec.push_back(40); //v[0]=40;
    vec.push_back(50); //v[0]=50;

    // int n=vec.size();
    // cout<<n<<endl;

    //for(auto x: vec) cout<<x<<endl;
    // for (int i = 0; i < n; i++) cout<<vec[i]<<endl;

    // for (int i=0;i<(int)vec.size();i++)
    // {
    //     cout<<vec[i]<<endl; 
    // }

    // for (int i :vec)
    // {
    //     cout<<i<<endl;
    // }

    for (auto &x :vec) x++;//use reference x=vec[0]
    for (auto i :vec)
    {
      cout<<i<<endl;
    }
    
    
    
return 0;
}