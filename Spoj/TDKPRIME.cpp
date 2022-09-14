#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc(x)          int x; cin >> x; while(x--)
#define ll             long long
#define vi             vector<int>
#define pii            pair<int,int>
#define mii            map<int,int>
#define inf            1<<28
#define mem(x,y)       memset(x, y, sizeof(x))
#define ps(x,y)        fixed<<setprecision(y)<<x
#define show(val)      cout<< #val << " -> " << val << endl
#define Case           cout<< "Case "<< ++cs << ": "
#define all(v)         (v).begin(), (v).end()
#define rall(v)        (v).rbegin(), (v).rend()
#define mod            1000000007
#define SZ             90000000
bool isMarked[SZ+5];
vi primes;
void sieve()
{
    isMarked[1] = 1;
    for(int i = 2; i*i <= SZ; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i*i; j<=SZ; j+=i)
                isMarked[j]=1;
        }
    }

    for(int i = 2; i<=SZ; i++)
    {
        if(isMarked[i]==0)
            primes.push_back(i);
    }
}
int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    sieve();
    tc(t)
    {
        int n;
        cin >> n;
        cout<< primes[n-1] <<'\n';
    }

    return 0;
}
