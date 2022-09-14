#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define lli long long int
#define MOD 10000007
#define vi vector<int>
#define pb push_back
vector<pair<int,int>> graph;
int vis[10001];
int cnt;

void dfs(int u)
{
    cnt = 0;
    vis[u] == 1;

    for(int v: graph[u])
    {
        if(vis[v.first] == 0)
        {
            cnt += dfs(v.first) + v.second;
        }
    }
    vis[u] = 0;
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n, cnt = 0;
    int a, b, c;
    cin >> n;
    for(int i = 0; i<=n; i++)
    {
        
        cin >> a >> b >> c;
        graph[a].push_back({b,0});
        graph[b].push_back({a,c});
    }
    int ans = min(dfs(a)+c, dfs(b));
    cout << ans << '\n';
    return 0;
}
