#include <stdio.h>
int main(){
    int flag=1;
    int i;
    int count=0;
    int sum=0;
    while(flag){
        scanf("%d",&i);
        if(0==i) break;
        count++;
        sum+=i;
    }
    printf("%d,%d",sum,count);
    return 0;
}