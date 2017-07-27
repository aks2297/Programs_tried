#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int min(int a[500][500],int b[],int n,int m,int sum){
    sort(b,b+((n*m)));
    int max;
    if(b[0]==b[(n*m)-1]){
        return sum;
    }
    else {
    max=b[(n*m)-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==max){
            	if(i>0&&j>0){
				
                for(int k=i-1;k<=i+1&&k<n;k++){
                    for(int l=j-1;l<=j+1&&l<m;l++){
                        a[k][l]=max;
                    }
                }}
                else if(j==0&&i!=0){
                for(int k=i-1;k<i+1&&k<n;k++){
                    for(int l=j;l<j+1&&j<m;j++){
                        a[k][l]=max;
                    }
                }	
				}
				else if(i==0&&j!=0){
					for(int k=i;k<i+1&&k<n;k++){
                    for(int l=j-1;l<j+1&&j<m;j++){
                        a[k][l]=max;
                    }
                }}
                else if(i==0&&j==0){
                	for(int k=i;k<i+1&&k<n;k++){
                    for(int l=j;l<j+1&&j<m;j++){
                        a[k][l]=max;
                    }
                }
				}
				
            }
        }
    }int p=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		b[p++]=a[i][j];
		}
	}
    min(a,b,n,m,++sum);
    }
   
}
int main() {
	int t,n,m,sum=0;
	int a[500][500];
	cin>>t;
	int c[t];
	for(int i=0;i<t;i++){
	    scanf("%d %d",&n,&m);
	    int b[n*m],p=0;
	    for(int j=0;j<n;j++){
	        for(int k=0;k<m;k++){
	            scanf("%d",&a[j][k]);
	            b[p++]=a[j][k];
	           
	        }
	    }
	    c[i]=min(a,b,n,m,sum);
	}
	for(int i=0;i<t;i++){
	    printf("%d \n",c[i]);
	}
	return 0;
}
