#include <iostream>
using namespace std;

int main()
{	int n,d[7],temp,i,j,x=0,y=0,z=0,m=0;
	
    cin>>n;
    for(i=0;i<7;i++){
    	d[i]=0;
    }
    char *a=new char[n];
    for(i=0;i<n;i++){
    	cin>>a[i];}
    for(i=0;i<n;i++){	
    	switch(a[i]){
    		case 'h':x++;if(x==2){d[0]++;x=0;}break;
    		case 'a':y++;if(y==2){d[1]++;y=0;}break;
    		case 'c':d[2]++;break;
    		case 'k':d[3]++;break;
    		case 'e':z++;if(z==2){d[4]++;z=0;}break;
    		case 'r':m++;if(m==2){d[5]++;m=0;}break;
    		case 't':d[6]++;break;
    		default :continue;
    	}
    }
    
    for(i=0;i<7;i++)
    {
        for(j=0;j<(n-i);j++)
            if(a[j]>a[j+1])
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
    }
    cout<<d[0];
    delete []a;
    
       return 0;
}

