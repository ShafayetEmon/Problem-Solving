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
#define max            100005
bool isMarked[max];
vi primes;

void sieve()
{
    isMarked[0] = isMarked[1] = 1;
    for(ll i = 2; i*i <= max; i++)
    {
        if(isMarked[i]==0)
        {
            for(ll j = i*i; j<= max; j+= i)
                isMarked[j] = 1;
        }
    }
    
    for(ll i = 2; i<= max; i++)
    {
        if(isMarked[i] == 0)
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
    int n, k, sum = 0, cnt = 0;
    cin >> n >> k;

    for(int i = 2; i <= primes.size()-1 && primes[i] <= n; i++)
    {   
        sum = primes[i] + primes[i+1] + 1;
        if(sum <= n && isMarked[sum] == 0)
            cnt++; 
    }
    //show(cnt);
    if(cnt>=k)
        cout<< "YES" <<'\n';
    else 
        cout<< "NO" <<'\n';
    
    return 0;
}
