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
int n;
struct point
{
    double x;
    double y;
};

double crossProd(point a, point b)
{
    return a.x * b.y - a.y * b.x;
}

double area(point v[], int n)
{
    double sum = 0.0;
    for(int i = 0; i<n; i++)
    {
        sum += crossProd(v[i], v[(i+1) % n]);
    }
    return fabs(sum)/ 2.0;
}
int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    //int n;
    cin >> n;

    point arr[1000];
    for(int i = 0; i<n; i++)
        cin >> arr[i].x >> arr[i].y;

    int x= area(arr, n);
    int ans = (2*x+2-n) / 2;
    cout << ans << '\n';
    
    return 0;
}