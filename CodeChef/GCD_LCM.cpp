#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

ll gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(int a, int b)
{
    return a / gcd(a,b) * b; 
}

int main()
{
    BeatMeScanf;
    //freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
    //freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);

    int tc;
    cin >> tc;

    while(tc--)
    {
        ll x, y;
        cin >> x >> y;

        ll r1 = gcd(x,y);
        ll r2 = lcm(x, y);

        cout<<r1<<" "<<r2<<endl;
    }

    return 0;
}

