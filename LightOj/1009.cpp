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
#define  MAX          20005
                      
vi graph[MAX];
int arr[MAX];

int bfs(int src)
{
    int cnt1 = 0, cnt2 = 0;
    queue<int> q;
    q.push(src);
    arr[src] = 1;
    cnt1++;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v: graph[u])
        {
            if(arr[v] == 0)
            {
                if(arr[u] == 1)
                {
                    arr[v] = 2;
                    cnt2++;
                }
                else
                {
                    arr[v] = 1;
                    cnt1++;
                }
                q.push(v);
            }
        }
    }
    return max(cnt1, cnt2);
}


int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int cs = 0;
    w(t)
    {
        int n, a, b;
        cin >> n;
        
        for(int i  = 0; i<MAX; i++)
        {
            graph[i].clear();
            arr[i] = 0;
        }

        for(int i = 0; i<n; i++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);    
        }
        
        int ans = 0;
        for(int i = 0; i<MAX; i++)
        {
            if(arr[i] == 0 && !graph[i].empty())
                ans += bfs(i);
        }
        Case;
        cout << ans << '\n';
    }
    return 0;
}