#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define MOD 10000007
vi divisor;

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

    int a, b;
    cin >> a >> b;

    int x = gcd(a,b);
    for (int i = 1; i*i <= x; ++i)
    {
        if(i*i == x) divisor.push_back(i);
        else if(x % i == 0)
        {
            divisor.push_back(i);
            divisor.push_back(x/i);
        }
    }

    int q, l, h;
    cin >> q;
    while(q--)
    {
        cin >> l >> h;
        int ans = -1;
        for(int d : divisor)
        {
            if(d >= l && d <= h)
                ans = max(ans, d);
        }

        cout<< ans <<'\n';

    }

    return 0;
}
