#include <bits/stdc++.h>
using namespace std;
vector<int>gr[10001];
bool vis[10001];

void dfs(int u)
{
    vis[u] = 1;
    for(int v : gr[u])
    {
        if(vis[v] == 0)
        {
            dfs(v);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n,m,a,b;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    int component = 0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            component++;
        }
    }
    if(component == 1 &&  m == n - 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
