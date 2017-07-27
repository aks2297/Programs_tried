#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double distance(int a,int b,int x,int y,int v1,int v2){
	float m,r,d1,d2,t;
	m=(b-y)/(a-x);
	r=a-(b/m);
	d1=sqrt(((r-a)*(r-a))+(b*b));
	d2=sqrt(((r-x)*(r-x))+(y*y));
	t=((d1/v1)+(d2/v2));
	return t;
	
}
int main()
{	long int x1,x2,y1,y2,v1,v2,n,i,x;
    double t1,t2,d1,l,m;
    cin>>n;
    double *t=new double[n];
    for(i=0;i<n;i++){
    		cin>>x1>>y1>>x2>>y2>>v1>>v2;
    		if((x1<=0)&&(x2>=0)){
    				x=(x1*(-1))+x2;}
    			else if((x2<=0)&&(x1>=0)){
    				x=x1+(x2*(-1));
    			}
    			else 
    			{x=x1-x2;}
    			if(x1!=x2){
    		l=distance(x1,y1,x2,y2,v1,v2);
    			}
    		if(v1>v2){
    			
    			d1=sqrt((y1*y1)+(x*x));
    			t1=d1/(v1*(1.00000));
    			t2=y2/(v2*1.00000);
    			m=t1+t2;
    			
    			}
    		else if(v1<v2){
    			t1=y1/(v1*1.00000);
    			d1=sqrt((y2*y2)+(x*x));
    			t2=d1/(v2*1.00000);
    			m=t1+t2;
    			
    		}
    		else{
    			d1=sqrt(((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1)));
    			m=d1/(v1*1.00000);
    		}
    			if(x1!=x2){
    		l=distance(x1,y1,x2,y2,v1,v2);
    			}
    			else {l=m;};
    		if(l>=m){
    			t[i]=m;
    		}
    		else t[i]=l;
    		}
    for(i=0;i<n;i++){
    	
    	printf("%.5f \n",t[i]);
    }
    return 0;
    delete []t;
}

