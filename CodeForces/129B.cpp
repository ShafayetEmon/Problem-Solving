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

vi graph[5000];
int dist[5000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v: graph[u])
        {
            if(dist[v] > dist[u] + 1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
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
    int n, m, a, b, mx = -1;
    cin >> n >> m;

    for(int i = 0; i<m; i++)
    {
        cin >> a >> b;
        mx = max({mx,a,b});
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < n; i++) dist[i] = INT_MAX;
    bfs(1);

    int ans = 0, k = 1;
    for(int i = 2; i<=mx; i++) k = max(k, dist[i]);
    cout << k-1 << '\n';
    
    return 0;
}