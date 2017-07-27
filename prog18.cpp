#include <iostream>
#define f(x,y) for(long long x=0;x<y;x++)
#define lar 99999999999999999999999999999
#define ll long long
using namespace std;
void findMin(ll n,ll c[],ll l[]){
    ll min=lar,sum=0,s=0,x=0,min_in=0;
    f(i,n){
     sum=sum+l[i];   
    }
    
    f(i,n){
        if(min>(x+(sum-s)*c[i])){
            min=x+(sum-s)*c[i];
            min_in=i;
        }
        s=s+l[i];
        x=x+(c[min_in]*l[i]);
    }
    cout<<min<<endl;
}
int main()
{
    int t;
    ll n;
    cin>>t;
    f(x,t){
        cin>>n;
        ll c[n],l[n];
        f(x,n){
            cin>>c[x];
        }
        f(x,n){
            cin>>l[x];
        }
        findMin(n,c,l);
    }
    return 0;
}
