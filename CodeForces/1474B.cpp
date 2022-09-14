// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  BeatMeScanf  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define  w(x)         int x; cin >> x; while(x--)
#define  ll           long long
#define  vi           vector<int>
#define  pii          pair<int,int>
#define  mii          map<int,int>
#define  inf          1<<28
#define  f(i,j,n)     for(int i = j; i < n; i++)
#define  fu(i,j,n)    for(int i = j; i > n; i--)
#define  gcd(a,b)     __gcd(a,b)
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  ps(x,y)      fixed<<setprecision(y)<<x
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          100005

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    w(t)
    {
        int d;
        cin >> d;

        int p,q;
        for(int i = 1+d; i<= 30000; i++)
        {
            if(isPrime(i) == 1)
            {
                p = i;
                break;
            }
        }
        for(int i = p+d; i<=30000; i++)
        {
            if(isPrime(i) == 1)
            {
                q = i;
                break;
            }
        }

        cout << (p*q) << '\n';
    }
    return 0;
}