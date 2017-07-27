#include <iostream>
using namespace std;
 
int check(int n){
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    if(n%2==0)
        return 0;
    if(h[0]!=1)
        return 0;
    for(int i=0;i<(n/2);i++){
        if(h[i]!=h[n-i-1]||h[i]!=h[i+1]-1){
            return 0;
        }
    }
    return 1;
 
}
int main() {
	int s;
	cin>>s;
	for(int i=0;i<s;i++){
	    int n;
	    cin>>n;
	    if(check(n)){
	        cout<<"yes"<<endl;
	    }
	    else cout<<"no"<<endl;
	   
	    
	}
	return 0;
}
