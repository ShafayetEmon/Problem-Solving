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

int divcnt(int n)
{
    int cnt = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(i*i == n) cnt++;
        else if(n%i==0) cnt += 2;
    }

    return cnt;
}

bool cmp(pii a, pii b)
{
    if(a.second < b.second) return 1;
    else if(a.second == b.second && (a > b)) return 1;
    return 0;
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif

    vector<pair <int, int> > v;
    for(int i = 1; i<= 1000; i++)
        v.push_back(make_pair(i,divcnt(i)));
    
    sort(v.begin(), v.end(), cmp);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        
        cout <<"Case "<< i <<": " << v[x-1].first <<"" << '\n';
    }
    return 0;
}