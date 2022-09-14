#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    BeatMeScanf;
    //freopen("G:/C++/in.txt", "r", stdin);
    //freopen("G:/C++/out.txt", "w", stdout);
    int t;
    cin >> t;
    map<string, int> m;
    string temp, str1, str2;

    while(t--)
    {
        cin >> temp;
        m[temp]++;
        if (str1.empty())
            str1 = temp;
        else if (str2.empty() && temp != str1)
            str2 = temp;
    }

    if (m[str1] > m[str2])
        cout << str1 << endl;
    else
        cout << str2 << endl;


    return 0;
}

