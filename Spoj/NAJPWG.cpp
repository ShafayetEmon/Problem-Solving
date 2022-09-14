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
#define  MX           100000

ll phi[MX+5];
void calc()
{
    phi[0] = 0;
    phi[1] = 1;
    for(int i = 2; i<= MX; i++) phi[i] = i;

    for(int i = 2; i<= MX; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j<= MX; j += i) phi[j] -= phi[j] / i;
        }
    }

    for(int i = 2; i<= MX; i++) phi[i] += phi[i-1];
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    calc();
    int cs = 0;
    w(t)
    {
        ll n;
        cin >> n;
        Case;
        cout << (n*(n+1)/2) - phi[n] << '\n';
    }
    return 0;
}