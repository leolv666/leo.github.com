#include <stdio.h>

int main() 
{
	int max = 0;
	int min = 999;
	int count = 0;
	int sum = 0;
	float avg = 0;
	int levelA =0;
	int levelB =0;
	int levelC =0;
	int levelD =0;
	int levelE =0;
	int i = 0;
	printf("请输入考生成绩:\n");
	while(1){
		scanf("%d",&i);
		if(i == -1){
			break;
		}else{
			if(max < i) max = i;
			if(min > i) min = i;
			if(i >= 90) levelA++;
			if(i < 90 && i >= 80) levelB++;
			if(i < 80 && i >= 70) levelC++;
			if(i < 70 && i >= 60) levelD++;
			if(i < 60) levelE++;
			count++;
			sum += i;
		}
	}
	avg = sum / count;
	printf("最大值:%d,最小值:%d,平均数:%f\nA级人数:%d,B级人数:%d,C级人数:%d,D级人数:%d,E级人数:%d\n",max,min,avg,levelA,levelB,levelC,levelD,levelE);
	return 0;
}