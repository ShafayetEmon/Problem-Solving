#include<bits/stdc++.h>
using namespace std;

int main()
{
     string a,b;
     int i;
     while(getline(cin,a)){
        getline(cin,b);
        for(i=0; i<a.size(); i++){
            a[i] = tolower(a[i]);
            b[i] = tolower(b[i]);
        }
        if(a.compare(b)>0)
            cout<<"1"<<endl;
        else if(a.compare(b)<0)
            cout<<"-1"<<endl;
        else
            cout<<"0"<<endl;
    }

     return 0;
 }