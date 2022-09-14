#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define pb push_back
#define tc(x) int x; cin >> x; while(x--)
#define mod 10000007

vi graph[100005];
int vis[100005];
int com_size;

void dfs(int u)
{
    vis[u] = 1;
    com_size++;
    for(int v: graph[u])
    {
        if(vis[v] == 0)
        {
            dfs(v);
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
   
    tc(t)
    {
        int n, m, a, b;
        cin >> n >> m;
        for (int i = 0; i <= n; ++i)
        {
            vis[i] = 0;
            graph[i].clear();   
        }

        for(int i = 0; i<m; i++)
        {
            cin >> a >> b;
            graph[a].pb(b);
            graph[b].pb(a);

        }

        int cnt = 0;
        long long int res = 1;

        for(int i = 1; i<= n; i++)
        {
            
            if(vis[i] == 0)
            {
                com_size = 0;
                dfs(i);
                cnt++;
                res = (res * com_size) % mod;
            }
        } 

        cout << cnt << " " << res << '\n';

    } 
    return 0;
}
