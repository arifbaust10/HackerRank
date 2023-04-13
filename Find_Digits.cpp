#include <bits/stdc++.h>
using namespace std;
int find_digit(int n)
{
    int i,a[20],c=0,k=0;
    int temp;
    temp=n;
    while(n!=0)
    {
        a[k]=n%10;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(a[i]!=0)
        if(temp%a[i]==0)
            c++;
    }
    return c;

}
int main()
{
   int t,fd,i;
   int n;
   cin>>t;
   for(i=0;i<t;i++)
    {
        cin>>n;
        fd=find_digit(n);
        cout<<fd<<endl;
    }
}

