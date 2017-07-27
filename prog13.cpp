#include <iostream>
#include<cmath>
using namespace std;
int isprime(long int n){
    int flag=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
            flag=0;break;
    }
    if(flag==1)
        return 1;
    else return 0;    
}
void check(long int a[],long int n,long int x){
    long int i=0,prev=-1,next=-1;
    while(x>0&&i<n){
        if(x%a[i]==0){
            x=x/a[i];
            prev=next;
            next=a[i];
            if(prev*next==x){
                break;
            }
        }
        else{
            i++;
        }
    }
    if(next>0&&prev>0){
        if(isprime(next)&&isprime(prev)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
int main()
{
    long int n,q;
    cin>>n>>q;
    long int a[n];
    for(long int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    for(long int i=0;i<q;i++){
        cin>>x;
        check(a,n,x);
    }
    
    return 0;
}

