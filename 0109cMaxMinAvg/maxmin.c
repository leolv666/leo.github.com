#include <stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int a1=88;
    int a2=66;
    int maxNum=max(a1,a2);
    int minNum=min(a1,a2);
    printf("the max value is %d\n",maxNum);
    printf("the min value is %d\n",minNum);

    return 0;
}


