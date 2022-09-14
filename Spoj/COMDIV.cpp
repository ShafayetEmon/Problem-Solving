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

int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
    
}

int countDivisor(int n)
{
    int divisor = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(i*i == n) divisor += 1;
        else if(n % i == 0) divisor += 2;
    }

    return divisor;
}


int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    tc(t)
    {
        int a, b;
        cin >> a >> b;
        int x = gcd(a,b);
        cout<< countDivisor(x) <<'\n';
    }
    return 0;
}
