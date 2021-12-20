#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string.h>
#include <limits.h>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}
void vdemo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec = {63, 81, 3, 6, 8, 1};
    cout << vec[1] << endl;

    //sort(vec.begin(), vec.end());

    // sort(vec.end(),vec.begin());   // Wrong
    cout << vec[3] << endl;

    // for (auto x : vec)
    //     cout << x << " "; //for printing value....

    bool present = binary_search(vec.begin(), vec.end(), 63); //true
    present = binary_search(vec.begin(), vec.end(), 100);     //false

    vec.push_back(100);
    present = binary_search(vec.begin(), vec.end(), 100); //true

    vec.push_back(100);
    vec.push_back(100);
    vec.push_back(100);
    vec.push_back(123);
    //1,3,6,8,63,81,100,100,100,100,100

    // vector<int>::iterator
    auto it = lower_bound(vec.begin(), vec.end(), 100);
    // vector<int>::iterator
    auto it2 = upper_bound(vec.begin(), vec.end(), 100);

    //cout << it << " "<< it2 << endl;
    cout << it2 - it << endl;

    //sort(vec.begin(), vec.end(), f);

    // for (int &x : vec)
    //     x += 101;
    // cout << endl;
    // for (int x : vec)
    //     cout << x << " ";
    // cout << "\n";

    vector<int>::iterator it3;
    for (it3 = vec.begin(); it3 != vec.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;
}

void setdemo()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-5);
    s.insert(-100);
    s.insert(-1);
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    auto it = s.find(-1);
    if (it == s.end())
    {
        cout << "Not Present" << endl;
    }
    else
    {
        cout << "Present" << endl;
        cout << *it << endl;
    }
    auto it2 = s.upper_bound(-5);
    auto it3 = s.upper_bound(0);
    cout << *it2 << " " << *it3 << endl;

    auto it4 = s.upper_bound(2);
    if (it4 == s.end())
    {
        cout << "Oops!! sorry! can't find it" << endl;
    }
}

void mapdemo()
{
    map<int, int> m;
    m[5] = 100;
    m[6] = 63;
    m[8] = 81;
    m[10001] = 1;

    for (auto v : m)
        cout << v.first << " " << v.second << endl;
    cout << endl;

    map<char, int> mv;
    string st = "moti kumar yadav";
    for (char c : st)
    {
        mv[c]++;
    }
    cout << mv['a'] << " " << mv['m'] << endl; //count letter in name
}

void pairdemo()
{
    set<pair<int, int>> p;
    p.insert({63, 81});
    p.insert({82, 63});
    p.insert({81, 63});
    p.insert({64, 81});
    p.insert({81, 64});

    int point = 81;
    auto it = p.upper_bound({point, INT_MAX});
    if (it == p.begin())
    {
        cout << "the given point is not lying in any interval...\n";
        return;
    }

    it--;

    pair<int, int> current = *it;
    if (current.first <= point && point <= current.second)
    {
        cout << "yes its present : " << current.first << " " << current.second << endl;
    }
    else
    {
        cout << "the given point is not lying in any interval...\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //vdemo();

    //setdemo();

    //mapdemo();

    pairdemo();

    return 0;
}