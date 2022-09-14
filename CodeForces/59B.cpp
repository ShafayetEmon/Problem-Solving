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
#define MOD            1000000007
#define MAX            100005

vi Odd;
vi Even;

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if(x&1)
        {
            Odd.push_back(x);
            oddSum += x;
        }
        else 
        {
            Even.push_back(x);
            evenSum += x;
        }
    }
    sort(all(Odd));

    if(Odd.size() == 0) cout<< 0 <<'\n';
    else if((Odd.size()&1)) cout<< evenSum+oddSum <<'\n';
    else cout<< (evenSum+oddSum)-Odd[0] <<'\n';
    

    return 0;
}
