 #include<stdio.h>
    int main(){
    int a,b,i,x=0;
    scanf("%d %d",&a,&b);
    x=a-b;
    for(i=1;i<10;i++)
    {
    if(i==x%10){
    continue;
    }
    else
    {
    printf("%d",(((x/10)*10)+i));
    break;
    }
    }
     
    return 0;
    }  
