#include <stdio.h>
int main(){
    int i, max, min, sum;
    float avg;
    int count;
    int N;
    printf("请输入N个数:\n");
    scanf("%d", &count);
    printf("请输入N的值:\n");
    scanf("%d", &N);
    max = min = sum = N;
    for(i = 1; i < count; i++){
        scanf("%d", &N);
        if(max < N) max = N;
        if(min > N) min = N;
        sum = sum + N;
    }
    avg = sum / count;
    printf("最大值:%d 最小值:%d 平均值:%f\n", max, min, avg);
    return 0;
}

