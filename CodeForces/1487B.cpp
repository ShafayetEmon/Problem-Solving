// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  ll           long long
#define  inf          1<<28
#define  gcd(a,b)     __gcd(a,b)
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          100005

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    w(t)
    {
        ll n, k;
        cin >> n >> k;

        ll ans = 0;
        if(n%2 == 0)
        {
            if(k%n == 0) ans = n;
            else ans = (k%n);
        }
        else if((n&1) && k <= n)
        {
            ll x = (n+1) / 2;
            if(k<x) ans = k;
            else if(k==n) ans = 2;
            else ans = k+1;
        }
        else 
        {
            ans = k%n;
            ans += (k / (n/2));
        }
        cout << ans << '\n';

    }
    return 0;
}