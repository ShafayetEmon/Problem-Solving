#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc(x)          int x; cin >> x; while(x--)
#define ll             long long
#define vi             vector<int>
#define pii            pair<int,int>
#define mii            map<int,int>
#define inf            1<<28
#define mem(x,y)       memset(x, y, sizeof(x))
#define ps(x,y)        fixed<<setprecision(y)<<x
#define show(val)      cout<< #val << " -> " << val << endl
#define Case           cout<< "Case "<< ++cs << ": "
#define all(v)         (v).begin(), (v).end()
#define rall(v)        (v).rbegin(), (v).rend()
#define MOD            1000000007
#define MAX            100005

vector<pii> vp;

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        vp.push_back(make_pair(b,a));
    }
    sort(rall(vp));

    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        if(vp[i].second<= n)
        {
            sum += vp[i].first * vp[i].second;
            n -= vp[i].second;
        }
        else
        {
            sum += vp[i].first * n;
            n = 0;
        }

        if(n<=0) break;
    }
    cout<< sum <<'\n';
    return 0;
}
