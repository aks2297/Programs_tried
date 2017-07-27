#include <iostream>
#include<vector>
#define max 100000
using namespace std;
int main()
{   
    int n,hh1,hh2,mm1,mm2;
    cin>>n;
    int b[n][2100];
    int j=0;
    for(int i=0;i<n;i++){
        cin>>hh1>>mm1>>hh2>>mm2;
        int k;
        for(k=hh1*60+mm1;k<=hh2*60+mm2;k++){
            if(b[j][k]!=0){
                break;
            }
        }
        if(k-1==(hh2*60+mm2)){
            for(int l=hh1*60+mm1;l<=hh2*60+mm2;l++){
                b[j][k]=1;
            }
        }
        else{
            j=j+1;
            for(int l=hh1*60+mm1;l<=hh2*60+mm2;l++){
                b[j][k]=1;
            }
        }
    }
    cout<<j+1;
    return 0;
}
