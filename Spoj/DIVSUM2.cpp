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
#define  MAX          100000000

int isMarked[MAX+7];
vector<ll> primes;

void sieve() 
{

    isMarked[1] = 1;
    for(int i = 2; i * i <= MAX; i++) 
    {
        if(isMarked[i] == 0)
        {
            for(int j = i * i; j <= MAX; j += i) 
            {
                isMarked[j] = 1;
            }
        }
    }
 
    for(int i = 2; i <= MAX; i++)
    {
        if(isMarked[i] == 0) primes.push_back(i);
    }
}

ll binpow(ll a, ll b)
{
    ll res = 1;
    while(b>0)
    {
        if(b&1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

ll divisorSum(ll n)
{
    ll totalSum = 1;
    for (int i = 0; i < (int)primes.size() && i * i < n; ++i)
    {
        if(n % primes[i] == 0)
        {
            ll cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            totalSum *= (binpow(primes[i], cnt)-1) / (primes[i] - 1);
        }
    }
    return totalSum;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    
    sieve();
    ll t, num;
    cin >> t;
    while(t--)
    {
        cin >> num;
        cout<<divisorSum(num)-num<<endl;
    }

    return 0;
}