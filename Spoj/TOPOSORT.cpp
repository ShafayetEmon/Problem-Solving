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

vector<int>gr[10001];
vector<int> res;
int in[10001];

bool topsort(int u)
{
    set<int> s;
    for(int i=1; i<=u; i++) 
    {
        if(in[i] == 0) s.insert(i);
    }

    while(!s.empty())
    {
        int v = *s.begin();
        res.push_back(v);
        s.erase(s.begin());

        for(int node : gr[v])
        {
            in[node]--;
            if(in[node] == 0) s.insert(node);
        }
    }
    if(res.size() != u) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n, m, x, y;
    cin >> n >> m;

    for(int i=0; i<m; i++) 
    {
        cin >> x >> y;
        gr[x].push_back(y);
        in[y]++;
    }

    
    if(topsort(n) == 0) cout << "Sandro fails." << '\n';
    else
    {
        for(int x : res) cout << x << " ";
    }
    return 0;
}