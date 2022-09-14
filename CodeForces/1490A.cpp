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

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    w(t)
    {
        int n;
        cin >> n;

        int arr[100];
        for(int i=0; i<n; i++) cin >> arr[i];

        int ans = 0;
        for(int i = 0; i<n-1; i++)
        {
            int mn = min(arr[i], arr[i+1]);
            int mx = max(arr[i], arr[i+1]);

            if(2*mn < mx)
            {
                while(2*mn < mx)
                {
                    mn *= 2;
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}