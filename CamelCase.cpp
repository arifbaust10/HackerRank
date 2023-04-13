#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=1;
    string s;
    getline(cin,s);
    int len=s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c++;
        }
    }
    cout<<c;
}
