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


ll power(ll a, ll n, ll d)
{
    a %= d;
    ll res = 1;
    while(n)
    {
        if(n&1) 
            res = ((res%d) * (a%d)) % d;
        a = ((a%d) * (a%d)) % d;
        n >>= 1;
    }

    return res;
}

ll gcd(ll a, ll b, ll n)
{
    if(a==b)
        return (power(a,n,MOD) + power(b, n, MOD)) % MOD;

    ll ans = 1;
    ll x = a-b;

    for (ll i = 1; i*i <= x; ++i)
    {
        if(x%i == 0)
        {
            ll t = (power(a, n, i) + power(b, n, i))%i;
            if(t==0) 
                ans = max(ans, i);
            
            t = (power(a, n, x/i) + power(b, n, x/i))%(x/i);
            if(t==0) ans = max(ans, x/i);
        }
    }

    return (ans%MOD);
}


int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif

    tc(t)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        cout<< gcd(a,b,n) <<'\n';
    }
    return 0;
}
