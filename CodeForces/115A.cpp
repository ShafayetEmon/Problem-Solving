#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define MOD 10000007

vi g[2020];

int ans=1;

void dfs(int u, int pos)
{
    ans = max(ans, pos);

    for(int v: g[u])
        dfs(v,pos+1);
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
         freopen("G:/C++/in.txt", "r", stdin);
         freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        int x;
        cin >> x;
        if( x != -1)
            g[i].pb(x);
    }

    for(int i = 1; i <= n; i++)
        dfs(i,1);

    cout << ans << '\n';
    return 0;
}
