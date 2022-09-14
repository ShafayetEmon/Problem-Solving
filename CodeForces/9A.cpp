//https://codeforces.com/problemset/problem/9/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("G:/C++/in.txt", "r", stdin);
    //freopen("G:/C++/out.txt", "w", stdout);

    int y,w, r;
    cin>>y>>w;
    int m = max(y,w);
    r = 6-m+1;

    if(r == 1 || r == 5)
        cout<<r<<"/6"<<endl;
    else if( r == 2 || r == 4)
        cout<<r/2<<"/3"<<endl;
    else if(r == 3)
        cout<<"1/2"<<endl;
    else
        cout<<"1/1"<<endl;

}
