#include <iostream>
using namespace std;
int tree(int a[],int n){
    int t=a[0];
    for(int i=1;i<n;i++){
        t=t^a[i];
    }
    return t;
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<tree(a,n)<<endl;
    }
    return 0;
}

