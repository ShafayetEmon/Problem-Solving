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

int lim = 10005;
map<ll,ll> m;

void cubes()
{
    for(ll i = 1; i<=lim; i++)
    {
        m[i*i*i] = 1;
    }
}

int func(ll n)
{
    if(n == 1) return 0;
    for(ll i = 1; i<=lim; i++)
    {
        if(m.find(n-i*i*i) != m.end()) return 1;
    }
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    cubes();
    w(t)
    {
        ll num;
        cin >> num;

        int k = func(num);
        if(k == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}