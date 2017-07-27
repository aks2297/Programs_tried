#include<iostream>
using namespace std;
void partner(int x){
	int a=0,e,m[3];
            e=x;
	    for(int j=0;j<3;j++){
	        m[j]=e%2;
	        e=e/2;
	    }
	    for(int j=2;j>=0;j--){
	        a=a*10+m[j];
	    }
	    
		if(a>=100&&a<111){
		    if(a==100){
		        cout<<x-3<<"LB"<<endl;
		    }
		    else if(a==101){
		        cout<<x-3<<"MB"<<endl;
		    }
		    else cout<<x-3<<"UB"<<endl;
		    
		}
		else if(a<100&&a>0){
			if(x==1){
			    cout<<x+3<<"LB"<<endl;
			}
			else if(a==10){
			    cout<<x+3<<"MB"<<endl;
			}
			else cout<<x+3<<"UB"<<endl;
			
		}
		else if(a==000){
			cout<<x-1<<"SL"<<endl;
		}
		else if(a==111){
			cout<<x+1<<"SU"<<endl;
		}
	
}
	
int main(){
    int t,i;
    cin>>t;
    int a[t];
    for( i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
        partner(a[i]);
    }
    return 0;
} 
