#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define pb push_back
#define tc(x) int x; cin >> x; while(x--)
vi graph[100005];
int vis[100005];
int maxDis, maxNode;

void dfs(int u, int d)
{
    vis[u] = 1;
    if(d > maxDis)
    {
        maxDis = d;
        maxNode = u;
    }

    for(int v : graph[u])
    {
        if(vis[v] == 0)
        {
            dfs(v, d + 1);
        }
    }

}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n-1; ++i)
    {
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    maxDis = -1;
    dfs(1, 0);
    for (int i = 0; i < n; ++i)
    {
        vis[i] = 0;
    }
    maxDis = -1;
    dfs(maxNode, 0);
    cout << maxDis << '\n';

    return 0;
}
