#include<bits/stdc++.h>
using namespace std;
int n;
int func(int x)
{
    return x%n;
}
string arr[100010];
int main()
{
    int m,k,index;
    string s;
    scanf("%d",&n);
    m=n;
    while(m--)
    {
        scanf("%d",&k);
        index=func(k);
        cin>>s;
     arr[index]=s;   
        
    }
    int q,r;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&r);
        index=func(r);
        cout<<arr[index]<<endl;
    }
    return 0;
}
