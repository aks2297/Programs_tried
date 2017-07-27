#include<iostream>
using namespace std;
 
int check(char a[][500],int n){
	for(int i=0;i<2;i++){
		for(int k=0;k<n;k++){
			if(a[i][k]=='#'){
				return 0;
			}
		}
	}
	return 1;
}
int chance(char a[][500],int n,int i,int j){
	a[i][j]='.';
	if(i==0){
		if(a[i+1][j]=='#'){
			chance(a,n,i+1,j);
		}
		else if(a[i][j+1]=='#'){
			chance(a,n,i,j+1);
		}
		else {
			if(check(a,n))
				return 1;
			else return 0;	
		}
	}
	if(i==1){
			if(a[i-1][j]=='#'){
			chance(a,n,i-1,j);
		}
		else if(a[i][j+1]=='#'){
			chance(a,n,i,j+1);
		}
		else {
			if(check(a,n))
				return 1;
			else return 0;	
		}
	}
}
int input(int n){
	char a[2][500],b[2][500];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='#'){
			    for(int m=0;m<2;m++){
			        for(int p=0;p<n;p++){
			            b[m][p]=a[m][p];
			        }
			    }
				if(chance(b,n,i,j)){
					return 1;
				}
			}
		}
	}
	
	return 0;
}
int main(){
	int t,n;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>n;
		a[i]=input(n);
	}
	for(int i=0;i<t;i++){
	
		if(a[i]){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
}
	return 0;		
} 
