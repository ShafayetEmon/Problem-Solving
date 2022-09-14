#include<bits/stdc++.h>
using namespace std;

#define  BeatMeScanf  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define  w(x)         int x; cin >> x; while(x--)
#define  ll           long long
#define  vi           vector<int>
#define  pii          pair<int,int>
#define  mii          map<int,int>
#define  inf          1<<28
#define  f(i,j,n)     for(int i = j; i < n; i++)
#define  fu(i,j,n)    for(int i = j; i > n; i--)
#define  gcd(a,b)     __gcd(a,b)
#define  mem(x,y)     memset(x, y, sizeof(x))
#define  ps(x,y)      fixed<<setprecision(y)<<x
#define  show(val)    cout<< #val << " -> " << val << endl
#define  Case         cout<< "Case "<< ++cs << ": "
#define  all(v)       (v).begin(), (v).end()
#define  rall(v)      (v).rbegin(), (v).rend()
#define  pi           acos(-1)
#define  eps          1e-9
#define  MOD          1000000007
#define  MAX          100005

int convert(int n)
{
    int num = n;
    int d = 0;
    int b = 1;
 
    int temp = num;
    while (temp) 
    {
        int x = temp % 10;
        temp = temp / 10;
        d += x * b; 
        b = b * 2;
    }
 
    return d;
}

int main()
{
    //BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int cs = 0;
    w(t)
    {
        int a,b,c,d, p, q, r, s;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &p, &q, &r, &s);
        
        int sum1 = 0, sum2 = 0;
        sum1 = a+b+c+d;
        sum2 = convert(p) + convert(q) + convert(r) + convert(s);
        Case;
        if(sum1 == sum2) cout << "Yes" << '\n';
        else cout << "No" << '\n';

    }
    
    return 0;
}