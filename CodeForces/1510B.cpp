// Bismillahir Rahmanir Raheem

#include<bits/stdc++.h>
using namespace std;

#define  w(x)         int x; cin >> x; while(x--)
#define  inf          1<<28
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          200005

int arr[MAX+5];

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

        mem(arr, 0);
        for(int i = 1; i <= n; i++) cin >> arr[i];

        int mx = 0;
        for(int i = n; i >= 1; i--)
        {
            mx = max(arr[i], mx);
            if(mx)
            {
                arr[i] = 1;
                mx--;
            }
        }
        for(int i = 1; i<=n; i++) cout << arr[i] << " ";
        cout << '\n';
    }
    return 0;
}