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

char graph[50][50];
int vis[50][50];

int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int ans = 0, n, m, x, y;
bool check(int x, int y)
{
    if(x >= 0 && x < m && y >= 0 && y<n) return true;
    return false;
}

void dfs(int x, int y)
{
    for(int i = 0; i<4; i++)
    {
        int p = dx[i] + x;
        int q = dy[i] + y;
        if(check(p,q) && vis[p][q] == 0 && graph[p][q] == '.')
        {
            ans++;
            vis[p][q] = 1;
            dfs(p, q);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int cs = 0;
    w(t)
    {
        cin >> n >> m;
        mem(vis, 0); 
        mem(graph, 0);

        ans = 1;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin >> graph[i][j];
                if(graph[i][j] == '@')
                {
                    x = i;
                    y = j;
                    vis[x][y] = 1;
                }
            }
        }
        dfs(x,y);

        Case;
        cout << ans << '\n';

    }
    return 0;
}