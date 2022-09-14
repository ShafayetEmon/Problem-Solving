#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = (k*l) / nl;
    int y =  (c * d);
    int z = (p / np);
    int mn = min(x,y);

    cout<<(min(mn,z)/n)<<endl;

    
    return 0;
}
