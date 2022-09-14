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
double ab, ac, bc, r;

double test(double ad)
{
    double de, ae;
    ae = (ad*ac) / ab;
    de = (ad*bc) / ab;

    double s_ABC = (ab+bc+ac) / 2.0;
    double a_abc = sqrt(s_ABC*(s_ABC-ab)*(s_ABC-bc)*(s_ABC-ac));

    double s_ade = (ad+de+ae) / 2.0;
    double a_ade = sqrt(s_ade*(s_ade-ad)*(s_ade-de)*(s_ade-ae));
    
    double a_bdec = a_abc-a_ade;
    return a_ade / a_bdec;
}

double AD()
{
    double L = 0.0;
    double R = ab;
    double mid;
    int cnt = 70;
    while(cnt--)
    {
        mid = (L+R) / 2.0;

        if(test(mid) > r)
            R = mid;
        else
            L = mid; 
    }

    return mid;
}




int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
         freopen("G:/C++/in.txt", "r", stdin);
         freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int cs = 1; 
    tc(t)
    {
        cin >> ab >> ac >> bc >> r;
        cout << fixed<<setprecision(8)<<"Case "<< cs++<<": "<< AD()<< '\n';
    }


    return 0;
}
