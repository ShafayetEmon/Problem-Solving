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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int r = 0;
    for(int i = 1; i<= d; i++)
    {
        if((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0))
            r++;
    }

    cout<<r<<endl;
    
    return 0;
}

