#include <iostream>
#define MAX 10001
using namespace std;
int main(){
  int n,k,x;
  cin>>n>>k>>x;
  int c_queue[n],count=0;
  for(int i=0;i<n;i++){
      c_queue[i]=i+1;
  }
  x--;
while(c_queue[x]%k<(n-count)){
    int j;
        for(int i=1;i<=c_queue[x]%k;i++){
             j=1;
            while(c_queue[(x+j)%n]==MAX){
                j++;
            }
            c_queue[(x+j)%n]=MAX;
        count++;
        }
    int t=(c_queue[x]+c_queue[x]%k)%n;
    while(c_queue[t]>=MAX)
        t=(t+1)%n;
    x=t;
    }
    cout<<c_queue[x];
    return 0;
}

