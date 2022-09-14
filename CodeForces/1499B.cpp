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
        string s;
        cin >> s;

        int zero = -1, one = s.size();
        for(int i = 1; i<(int)s.size(); i++)
        {
            if(s[i] != s[i-1]) continue;
            if(s[i] == '0') zero = max(zero, i); 
            if(s[i] == '1') one = min(one, i); 
        }
        
        if(zero>one)cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}