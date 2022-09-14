#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define lli long long int
#define MOD 10000007
#define vi vector<int>
#define pb push_back


int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int r1,r2,c1,c2,d1,d2;
    int p, q, r, s;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    p = (r1+c1-d2) / 2;
    q = r1- p;
    r = c1 - p;
    s = d1 - p;
    if(p == q || p == r || p == s || q == r || q == s || r == s) 
        cout << -1 << '\n';
    else if(p <= 0 || q <= 0 || r <= 0 || s <=0 )
        cout << -1 << '\n';
    else if(p > 9 || q > 9 || r > 9 || s > 9)
        cout << -1 << '\n';
    else if(p+q != r1 || r + s != r2 || p+r != c1 || q+s != c2 || p+s != d1 || r+q != d2)
        cout << -1 << '\n';
    else
    {
        cout << p <<" "<< q <<'\n';
        cout << r <<" "<< s <<'\n';
    }
    
    return 0;
}
