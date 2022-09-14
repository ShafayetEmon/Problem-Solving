#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int>gr[21000];
bool vis[21000];
int color[21000];

bool suspicious;

void dfs(int u, int nodeClr)
{
    vis[u] = 1;
    color[u] = nodeClr;

    for(int v : gr[u])
    {
        if(vis[v] == 0)
        {
            dfs(v, nodeClr ^ 1);
        }
        if(color[v] == nodeClr)
        {
            suspicious = false;
            return;
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
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
       int n, m, a, b;
       cin >> n >> m;
       for (int i = 0; i < n; ++i)
       {
          gr[i].clear();
          vis[i] = 0;
       }
       
       for (int i = 0; i < m; ++i)
       {
           cin >> a >> b;
           gr[a].push_back(b);
           gr[b].push_back(a);
       }
       
       suspicious =  true;
       cout<< "Scenario #" << i << ":" << '\n';
    
       for (int i = 1; i <= n; ++i)
       {
          if(vis[i] == 0)
            dfs(i, 0);
       }
       
       if(suspicious)
          cout << "No suspicious bugs found!" << '\n';
       else
          cout << "Suspicious bugs found!" << '\n';
    } 
    return 0;
}
