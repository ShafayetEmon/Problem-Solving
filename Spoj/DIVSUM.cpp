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

int divSum(int n)
{
    if(n<2)
        return 0;
    int sum = 1;
    for(int i = 2; i*i <= n; i++)
    {
        if(i*i == n) sum += i;
        else if(n % i == 0)
        {
            sum += i;
            sum += (n/i);
        }
    }
    return sum;
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
        int num;
        cin >> num;
        cout<< divSum(num) <<'\n';
    }
    return 0;
}
