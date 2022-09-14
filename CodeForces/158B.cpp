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
#define  MOD          1000000007
#define  MAX          100005
int arr[MAX];
int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    int ans = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    f(i,0,n)
    {
        int x;
        cin >> x;
        if(x == 4) ans++;
        if(x == 1) cnt1++;
        if(x == 2) cnt2++;
        if(x == 3) cnt3++;
    }

    if(cnt3 >= cnt1) ans += cnt3, cnt1 = 0;
    else ans += cnt3, cnt1 -= cnt3;

    if(cnt2 % 2 == 0) ans += cnt2 / 2, cnt2 = 0;
    else ans += cnt2/2, cnt1 += 2;
    
    ans +=(cnt1+4-1) / 4;
    cout << ans << '\n';

    return 0;
}
