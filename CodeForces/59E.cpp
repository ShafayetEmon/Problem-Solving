// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  inf          1<<28
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          100000


int n, m;
vector<int> gr[MAX+5], cost[MAX+5];
int dist[MAX+5], pr[MAX+5];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int,int>> > pq; 
    for(int i = 1; i<= n; i++) dist[i] = INT_MAX;

    dist[src] = 0;
    pr[src] = -1;
    pq.push({0,src});

    while(!pq.empty())
    {
        pair<int,int> pu = pq.top();
        pq.pop();

        int u = pu.second;
        for(int i = 0; i<(int)gr[u].size(); i++)
        {
            int v = gr[u][i];
            if(dist[v] > dist[u] + cost[u][i])
            {
                pr[v] = u;
                dist[v] = dist[u]+cost[u][i];
                pq.push({dist[v], v});
            }
        }
    }
}


void pathPrint(int u)
{
    vector<int> ans;
    for(int i = u; i != 1; i = pr[i]) ans.push_back(i);
    ans.push_back(1);
    reverse(all(ans));
    for(int &x: ans) cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int u, v, c;
    cin >> n >> m;

    for(int i = 0; i<m; i++)
    {
        cin >> u >> v >> c;
        gr[u].push_back(v);
        gr[v].push_back(u);
        cost[u].push_back(c);
        cost[v].push_back(c);
    }
    dijkstra(1);

    //for(int i = 1; i<= n; i++) cout << i << " : " << dist[i] << '\n';
    if(dist[n] == INT_MAX) cout << -1 << '\n';
    else pathPrint(n);
    return 0;
}