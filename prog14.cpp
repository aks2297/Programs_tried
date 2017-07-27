#include <iostream>
using namespace std;
long int GP(long int r,long int s,long int p){
    int sum=0,a=1,count=0;
    while(sum!=s&&count<=p){
        sum=(sum+a)%p;
        count++;
        a=(a*r)%p;
        
    }
    if(count<=p){
        return count;
    }
    else
    return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int r,s,p;
        scanf("%ld %ld %ld",&r,&s,&p);
        printf("%ld \n",GP(r,s,p));
    }
    return 0;
}
