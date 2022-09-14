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

int primeFact(int n)
{
    int Odd = 0, Even = 0;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            int cnt  = 0; 
            while (n % i == 0)
            {
                n/=i;
                cnt++;
            }
            if(cnt&1) Odd++;
            else Even++;
        }
    }
    if(n>1) Odd++;
    if(Even > Odd) return 1;
    else return 0;   
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
        int n;
        cin >> n;
        if(n == 0|| n == 1) 
        {
            cout<< "Ordinary Number" <<'\n';
        }
        else
        {
            int x = primeFact(n);
            if(!x) cout<< "Ordinary Number" <<'\n';
            else cout<< "Psycho Number" <<'\n'; 
        }
        
    }

    return 0;
}
