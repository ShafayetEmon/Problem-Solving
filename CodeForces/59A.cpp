//https://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int upper=0, lower=0;

    for (int i = 0; i < str.size(); ++i)
    {
        if (isupper(str[i])){
            upper++;
        }
        else{
            lower++;
        }
    }

    if (upper > lower){
        for (int i = 0; i < str.size(); ++i){
            str[i] = toupper(str[i]);
        }
    }
    else{
        for (int i = 0; i < str.size(); ++i){
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
}
