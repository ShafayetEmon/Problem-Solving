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
#define  MAX          1000000

bool isMarked[MAX+6];
vector<int> primes;

void sieve()
{
    isMarked[1] = 1;
    for(int  i = 2;  i*i <= MAX; i++) 
    {
        if(isMarked[i] == 0)
        {
            for(int j = i*i; j <= MAX; j += i) isMarked[j] = 1;
        }
    }

    for(int i = 2; i <= MAX; i++)
    {
        if(isMarked[i] == 0) primes.push_back(i);
    }
}


ll fact(ll n)
{
    ll divisor = 1;
    for(int i = 0; i <(int)primes.size() && primes[i] * primes[i] <= n; i++)
    {
        if(n%primes[i] == 0)
        {
            ll alpha = 1;
            while(n%primes[i] == 0)
            {
                n /= primes[i];
                alpha++;
            }
            divisor *= alpha;
        }
        
    }
    if(n>1) divisor *= 2;

    return divisor;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int cs = 0;
    sieve();
    w(t)
    {
        ll num;
        cin >> num;

        Case;
        cout << fact(num) - 1 << '\n';
    }
    return 0;
}