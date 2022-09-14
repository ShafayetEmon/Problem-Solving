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

        vector<int> v(n);
        for(auto &x: v) cin >> x; 

        int c0 = 0, c1= 0, c2 = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i] % 3 == 0) c0++;
            if(v[i] % 3 == 1) c1++;
            if(v[i] % 3 == 2) c2++;
        }

        int k = n/3, ans = 0;
        while(c0 > k)
        {
            if(c1<k) c0--, c1++, ans++;
            else if(c2<k) c0--, c2++, ans+=2;
        }

        while(c1 > k)
        {
            if(c2<k) c1--, c2++, ans++;
            else if(c0<k) c1--, c0++, ans+=2;
        }

        while(c2 > k)
        {
            if(c0<k) c2--, c0++, ans++;
            else if(c1<k) c2--, c1++, ans+=2;
        }
        cout << ans << '\n';

    }
    return 0;
}