#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc(x)          int x; cin >> x; while(x--)
#define ll             long long
#define vi             vector<int>
#define pii            pair<int,int>
#define mii            map<int,int>
#define inf            1<<28
#define mem(x,y)       memset(x, y, sizeof(x))
#define ps(x,y)        fixed<<setprecision(y)<<x
#define show(val)      cout<< #val << " -> " << val << endl
#define Case           cout<< "Case "<< ++cs << ": "
#define all(v)         (v).begin(), (v).end()
#define rall(v)        (v).rbegin(), (v).rend()
#define MOD            1000000007
#define MAX            100005
int arr[MAX],pre[MAX],suff[MAX];

int gcd(int a, int b) 
{
  return b == 0 ? a : gcd(b, a % b);
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
        int n, q, l, r;
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)
            cin >> arr[i];
        
        pre[0] = suff[n+1] = 0;
        for (int i = 1; i <= n; ++i)
            pre[i] = gcd(pre[i-1], arr[i]);

        for (int i = n; i >= 1; --i)
            suff[i] = gcd(arr[i], suff[i+1]);

        while (q--)
        {
            cin >> l >> r;
            cout<< gcd(pre[l-1], suff[r+1]) <<'\n';
        }
        
    }
    return 0;
}
