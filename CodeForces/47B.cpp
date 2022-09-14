#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc(x)          int x; cin >> x; while(x--)
#define ll             long long
#define vi             vector<int>
#define pii            pair<int,int>
#define mii            map<int,int>
#define inf            1<<28
#define mem(x,y)       memset(x, y, sizeof(x))
#define ps(x,y)        fixed<<setprecision(y)<<x
#define show(val)      cout<< #val << " -> " << val << endl
#define Case           cout<< "Case "<< ++cs << ": "
#define all(v)         (v).begin(), (v).end()
#define rall(v)        (v).rbegin(), (v).rend()
#define MOD            1000000007
#define MAX            100005

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
   
    vector<pair<int, char>> v;
    v.push_back(make_pair(0,'A'));
    v.push_back(make_pair(0,'B'));
    v.push_back(make_pair(0,'C'));
    
    for(int i = 0; i<3; i++)
    {
        string str;
        cin >> str;
        if(str[1]=='>')
        {
            if(str[0] == 'A') v[0].first++;
            if(str[0] == 'B') v[1].first++;
            if(str[0] == 'C') v[2].first++;
        }
        else
        {
            if(str[2] == 'A') v[0].first++;
            if(str[2] == 'B') v[1].first++;
            if(str[2] == 'C') v[2].first++;
        }
    }
    sort(all(v));
   
    if(v[0].first == v[1].first || v[1].first == v[2].first)
        cout<< "Impossible";
    else
    {
        for (auto &it: v)
        {
            cout<<it.second;
        }
    }
    cout<<'\n';
    
    return 0;
}
