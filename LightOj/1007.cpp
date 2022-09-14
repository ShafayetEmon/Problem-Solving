// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  ll           unsigned long long
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
#define  MX           5000006

ll phi[MX];
void func()
{
    
    for(ll i = 2; i <= 5000000; i++) phi[i] = i;

    for(ll i = 2; i <= 5000000; i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i; j <= 5000000; j += i)
                phi[j] -= phi[j] / i;
        }
    }

    for(ll i = 2; i<= 5000000; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    func();
    int cs = 0;
    w(t)
    {
        ll a, b;
        cin >> a >> b;

        Case;
        cout << phi[b] - phi[a-1] << '\n';
    }
    return 0;
}