#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,positive=0,negative=0,zero=0;
    float pos,neg,zer;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        positive++;
        else if(a[i]<0)
        negative++;
        else if(a[i]==0)
        zero++;
    }
    pos=(float)positive/n;
    neg=(float)negative/n;
    zer=(float)zero/n;
    printf("%.6f\n%.6f\n%.6f\n",pos,neg,zer);
}
