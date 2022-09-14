#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc(x) int x; cin >> x; while(x--)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define MOD 10000007

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
         freopen("G:/C++/in.txt", "r", stdin);
         freopen("G:/C++/out.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;

    double x1, y1, x2, y2, total;
    cin >> x1 >> y1;
    n--;
    while(n--)
    {
        cin >> x2 >> y2;
        total += sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        x1 = x2;
        y1 = y2;
    }

    cout << fixed <<setprecision(9) << total*k/50<< '\n';

    return 0;
}
