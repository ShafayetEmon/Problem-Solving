// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  ll           long long
#define  inf          1<<28
#define  gcd(a,b)     __gcd(a,b)
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          100005

int n, m, cs = 1;
queue<int> q;
vector<int> gr[1234];
int vis[1234], degree[1234];

void dfs(int u)
{
    if(vis[u]) return;

    vis[u] = 1;
    for(auto v: gr[u]) dfs(v);
    q.push(u);
}

int main()
{
    
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    w(t)
    {
        for(int i = 0; i<1234; i++)
        {
            vis[i] = 0;
            degree[i] = 0;
        }

        scanf("%d%d", &n, &m);
        for(int i = 0; i<m; i++)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            gr[a].push_back(b);
            degree[b]=1;
        }

        for(int i = 0; i<n; i++)
        {
            if(degree[i] == 0) dfs(i);
        }

        int cnt = 1;
        printf("Scenario #%d:\n\n", cs++);
        while(q.size() != 0)
        {
            printf("%d %d\n\n", cnt++, q.front());
            q.pop();
        }

    }
    return 0;
}