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

int dist[11][11];
int vis[11][11];

bool isValid(int x, int y)
{
    if(x < 1 || x > 8 || y < 1 || y > 8) return false;
    if(vis[x][y] == 1) return false;
    return true;
}

int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={-1,1,1,-1,2,-2,2,-2}; 

void bfs(int srcX, int srcY)
{
    mem(dist,0);
    mem(vis,0);
    queue<pair<int,int>> q;
    q.push({srcX, srcY});
    vis[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;

    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i = 0; i<8; i++)
        {
            if(isValid(currX+dx[i], currY+dy[i]))
            {
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                q.push({newX, newY});
                vis[newX][newY] = 1;
                dist[newX][newY] = dist[currX][currY]+1;
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
    w(t)
    {
        string src, dst;
        cin >> src >> dst;

        if(src == dst)
        {
            cout << 0 << '\n';
            continue;
        }
        
        int x = src[0] - 96;
        int y = src[1] - 48;
        bfs(x,y);

        int p = dst[0] - 96;
        int q = dst[1] - 48;
        cout << dist[p][q] << '\n';
    }
    
    return 0;
}



/*

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  mem(x,y)     memset(x, y, sizeof(x))

int dist[11][11];

bool isValid(int x, int y)
{
    if(x < 1 || x > 8 || y < 1 || y > 8) return false;
    if(dist[x][y] > 0) return false;
    return true;
}

int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={-1,1,1,-1,2,-2,2,-2}; 

void bfs(int srcX, int srcY)
{
    mem(dist,0);
    queue<pair<int,int>> q;
    q.push({srcX, srcY});

    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i = 0; i<8; i++)
        {
            if(isValid(currX+dx[i], currY+dy[i]))
            {
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                q.push({newX, newY});
                dist[newX][newY] = dist[currX][currY]+1;
            }
        }
    }
}


int main()
{
    w(t)
    {
        string src, dst;
        cin >> src >> dst;

        if(src == dst)
        {
            cout << 0 << '\n';
            continue;
        }
        
        int x = src[0] - 96;
        int y = src[1] - 48;
        bfs(x,y);

        int p = dst[0] - 96;
        int q = dst[1] - 48;
        cout << dist[p][q] << '\n';
    }
    
    return 0;
}
*/