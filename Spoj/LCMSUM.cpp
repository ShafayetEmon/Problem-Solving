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
#define  MX           1000000

ll phi[MX+5];
ll res[MX+5];
void calc()
{
    phi[0] = 0;
    phi[1] = 1;
    for(int i = 2; i <= MX; i++) phi[i] = i;
    for(int i = 2; i <= MX; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= MX; j += i) phi[j] -= phi[j]/i;
        }
    }

    for(int i = 1; i<= MX; i++)
    {
        for(int j = i; j <= MX; j+= i)
            res[j] += (phi[i]*i);
    }
}


int main()
{
    
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    calc();
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n;
        scanf("%lld", &n);

        ll ans = res[n]+1;
        ans *= n;
        ans /= 2;

        printf("%lld\n", ans);
    }
    return 0;
}