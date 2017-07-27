include "bits/stdc++.h"
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	long long n;
	cin >> n;
 
	long double m = n;
	long double sum = 0;
	while(n--){
 
		long double a;
		cin >> a;
		sum = sum + a;
	}
	if(sum/m < 7.5)
	cout << "NOT READY\n";
	else
	cout << "READY\n"; 
}
