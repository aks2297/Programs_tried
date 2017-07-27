#include <iostream>
using namespace std;
int min(int a,int b){
    return (a<b)?a:b;
}
int main() {
    int t,n;
    long *g,*a,*b;
	cin>>t;
	g=new long[t];
	for(int k=0;k<t;k++){
	    cin>>n;
	    long sum1=0,sum2=0;
	    a=new long[n];
	    b=new long[n];
	    for(int i=0;i<n;i++){
	        a[i]=0;
	        b[i]=0;
	    }
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    for(int i=0;i<n;i++){
	    	if(i%2!=0)
	    		sum1=sum1+a[i];
	 	else
	 		sum1=sum1+b[i];
	}
	    for(int i=0;i<n;i++){
	    	if(i%2!=0)
	    		sum2=sum2+b[i];
	 	else
	 		sum2=sum2+a[i];
	}
	   g[k]=min(sum1,sum2);
	    
    } 
