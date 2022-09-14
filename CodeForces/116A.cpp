#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    BeatMeScanf;
    //freopen("G:/C++/in.txt", "r", stdin);
    //freopen("G:/C++/out.txt", "w", stdout);

    int t, a, b, sum =0, mx = 0;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        sum +=(b - a);
        if(mx < sum)
            mx = sum;
    }
    cout<<mx<<endl;
    return 0;
}

