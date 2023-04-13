#include <bits/stdc++.h>
using namespace std;
int gread(int a)
{
    int k,j,w,team;
    team=a;
    if(team<38)
    return team;
    w=a%10;
    if(w<5)
    k=5-w;
    else if(w>5)
    k=10-w;
    else
     return team;

    if(k<3 && k>0)
    {
        j=k+team;
        return j;
    }
    else
    {
        return team;
    }

}
int main()
{
    int n,i,j,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        j=gread(a);
        cout<<j<<endl;
    }
}
