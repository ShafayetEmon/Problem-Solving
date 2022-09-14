#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getResult(ll base, ll power, ll modulo)
{
    base %= modulo;
    ll result = 1;
    while(power)
    {
        if(power & 1)
            result = result * base % modulo;
        base = base * base % modulo;
        power >>= 1;
    }
    return result;
}

int main()
{
    freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
    freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);

    int test;
    cin >> test;
    while(test--)
    {
        ll a, b;
        cin >> a >> b;
        cout<<getResult(a, b, 10)<<"\n";
    }
}
