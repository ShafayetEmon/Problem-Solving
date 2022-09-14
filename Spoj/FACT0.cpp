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
#define mod            1000000007
#define max            10000007


void primeFact(ll n)
{
    for(ll i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }
            cout<< i <<"^"<<cnt<<" ";
        }
    }
    if(n>1) cout<<n<<"^"<<1;
    cout<<'\n';
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
        freopen("G:/C++/error.txt", "w", stderr);
    #endif
    ll n;
    while(cin >> n)
    {
        if(n==0) break;
        else primeFact(n);
    }
    return 0;
}
