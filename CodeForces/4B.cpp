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

int mnT[101], mxT[101];

int main()
{
    //BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int d, sumT;
    cin >> d >> sumT;
    f(i,0,d) cin >> mnT[i] >> mxT[0];

    int mnSum = accumulate(mnT, mnT+d, 0);
    int mxSum = accumulate(mxT, mxT+d, 0);

    if(mnSum <= sumT && sumT <= mxSum) 
    {
        cout << "Yes" << '\n';
        f(i,0,d)
        {
            int x = min(mnT[i]+sumT - mnSum, mxT[i]);
            printf((i + 1 < d ? "%d " : "%d\n"), x);
            sumT -= (x - mnT[i]);
        }
    }

    else cout << "No" << '\n';


    return 0;
}