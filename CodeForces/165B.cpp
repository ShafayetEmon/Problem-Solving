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

ll n, k;
bool isValid(int mid)
{
    ll x = 0;
    ll p = 1;
    while (mid / p > 0)
    {
        x += (mid / p);
        p *= k;
    }
    if(x >= n) return true;
    else return false;
}

ll ans()
{
    int L = 1;
    int R = n;
    ll ans = 1;
    while (L <= R)
    {
        int mid = (L+R) / 2;
        if(isValid(mid))
        {
            ans = mid;
            R = mid-1;
        }    
        else L = mid+1;
    }
    return ans;
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    cin >> n >> k;
    cout << ans() << '\n';

    return 0;
}