#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int getResult(int base, int power, int modulo)
{
    int result = 1;

    while(power > 0)
    {
        if(power % 2 != 0)
        {
            result *= base;
            power--;
        }
        else
        {
            base = (base * base) % modulo;
            power /= 2;
        }
    }

    return result;
}


int main()
{
    BeatMeScanf;
    freopen("G:/C++/in.txt", "r", stdin);
    freopen("G:/C++/out.txt", "w", stdout);

    int test;
    cin >> test;

    while(test--)
    {
        int a, b;
        cin >> a >> b;
        cout<<getResult(a, b, 10)<<"\n";
    }

    return 0;
}

