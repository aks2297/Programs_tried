#include <iostream>
using namespace std;
 
int main()
{
    int T,i,j,n,m,p,a[100],zc;
    cin>>T;
    for(i=1;i<=100;i++)a[i]=0;
    for(j=1;j<=T;j++)
    {
        cin>>n>>m;
        zc=0;
        for(i=1;i<=m;i++)
        {
            cin>>p;
            a[p]=1;
            cin>>p;
            a[p]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==0)zc++;
            a[i]=0;
        }
        if(zc%2==0)cout<<"yes\n";
        else cout<<"no\n";
 
    }
}
