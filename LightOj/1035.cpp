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
#define  MAX          100005

bool isMarked[111];
vector<int> primes;

void sieve()
{
    isMarked[1] = 1;
    for(int  i = 2;  i*i <= 100; i++) 
    {
        if(isMarked[i] == 0)
        {
            for(int j = i*i; j <= 100; j += i) isMarked[j] = 1;
        }
    }

    for(int i = 2; i <= 100; i++)
    {
        if(isMarked[i] == 0) primes.push_back(i);
    }
}


void fact(int n)
{
    int k = 0;
    for(int i = 0; i<(int)primes.size() && primes[i] <= n; i++)
    {
        int x = n, val = 0;
        while(x / primes[i])
        {
            val += x / primes[i];
            x /= primes[i];
        }

        if(k == 0)
        {
            cout << primes[i] << " ("<< val << ")";
            k++;
        }
        else
        {
            cout << " * " << primes[i] << " ("<< val << ")";
        }
    }
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
        Case;
        int n;
        cin >> n;
        cout << n <<" = ";
        fact(n);
        cout << '\n';
    }
    return 0;
}