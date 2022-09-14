//https://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define MOD 10000007

map<string,int> m;

int main()
{
    BeatMeScanf;
    tc(t)
    {
        string str;
        cin >> str;
        if(m.find(str) == m.end())
            cout << "OK" << '\n';
        else
            cout << str<< m[str] << '\n';
        m[str]++;

    } 
    return 0;
}

