#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif
    
    string str;
    cin >> str;
    
    vector<int> v;
    int size = str.size();
    for(int i = 0; i <str.size();)
    {
        if(str[i] == '-' && str[i+1] == '-')
        {
            v.push_back(2);
            i += 2; 
        }
        if(str[i] == '-' && str[i+1] == '.')
        {
            v.push_back(1);
            i += 2;
        }
        if(str[i] == '.')
        {
            v.push_back(0);
            i++; 
        }   
    }
    
    for(int i =0; i<v.size(); i++)
        cout<<v[i];
    puts("");
    

    return 0;
}

