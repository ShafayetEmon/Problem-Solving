#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

int checkPrime(int x)
{
    for(int i = 2; i*i<= x; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;
    int r, x;
    for(int i = n+1; i <= m; i++)
    {
        r = checkPrime(i);
        if(r == 1)
        {
            x = i;
            break;
        }

    }

    if(x == m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

