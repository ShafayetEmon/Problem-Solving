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
int arr[100005];

bool isValid(int m, int n, int c)
{
    int pre = arr[0];
    int cnt = 1;

    for(int i = 1; i<n; i++)
    {
        if(arr[i] - pre >= m)
        {
            cnt++;
            pre = arr[i];
        }
        if(cnt == c) return true;
    }
    return false;

}

int result(int n, int c)
{
    int l = arr[0];
    int h = arr[n-1];

    int ans = 0;
    while (l <= h)
    {
        int mid = (l+h) / 2;
        if(isValid(mid, n, c))
        {
            ans = mid;
            l = mid+1;
        }
        else h = mid - 1;
    }
    
    return ans;
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
        int n, c;
        cin >> n >> c;

        for(int i = 0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        cout << result(n, c) << '\n';
    }
    return 0;
}