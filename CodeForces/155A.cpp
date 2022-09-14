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
    int n, mn, mx;
    cin >> n;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(i == 0)
        {
            mn = x;
            mx = x;
        }
        if(x > mx) 
        {
            mx = x;
            ans++;
        }
        if(x < mn)
        {
            mn = x;
            ans++;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}

