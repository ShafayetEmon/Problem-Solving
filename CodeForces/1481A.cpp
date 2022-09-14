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
    	int x, y;
    	cin >> x >> y;

    	string s;
    	cin >> s;

    	int l = 0, r = 0, u = 0, d = 0;
    	for(int i = 0; i<(int)s.size(); i++)
    	{
    		if(s[i] == 'U') u++;
            else if(s[i] == 'D') d++;
            else if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
    	}

    	l *= -1;
    	d *= -1;

    	int k = 0;
    	if(x > r || x < l) k = 1;
    	if(y > u || y < d) k = 1;
    	if(k == 1) cout << "NO" << '\n';
    	else cout << "YES" << '\n';
    }
    return 0;
}