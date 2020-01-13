#include <stdio.h>

int main(){

	int scores[100];
	int j=0;
	printf("请输入学生成绩:\n");

	while(1){
		int num;
		scanf("%d",&num);
		if(num==-1) {
			break;
		}else{
			scores[j]=num;
			j++;
		}
	}
	 printf("当前有%d个数值\n",j);
	 
	 //j:一共输入j个数值
	 //数值存在scores里
	 	 for(int n=0; n<j; n++){
		  printf("%d\n",scores[n]);
	 	}

	 //计算总成绩
		 int sum=0; 
		 for(int m=0; m<j; m++){  
		  sum += scores[m];
	 	}
		  printf("成绩总和:%d\n",sum);
	
	 //计算平均值
	 	int avg;
		avg=sum/j;
		printf("平均值为:%d\n", avg);

	//计算最大值
		int max=0;
		for(int x=0; x<j; x++){ //x是数组下标值
			if(max < scores[x]) max = scores[x];
		}
		printf("最大值为:%d\n",max);
	
	//计算最小值
		int min=666;
		for(int y=0; y<j; y++){//y是数组下标值
			if(min > scores[y]) min = scores[y];
		}
		printf("最小值为:%d\n",min);

		//统计90分以上A级人数
		int levelA = 0;
		for(int A=0; A<j; A++){
			if(scores[A] >= 90) levelA++;
		}
		printf("A级人数:%d\n", levelA);

		//统计80分~90之间B级人数
		int levelB = 0;
		for(int B=0; B<j; B++){
			if(scores[B] >= 80 && scores[B] <90) levelB++;
		}
		printf("B级人数:%d\n", levelB);

		//统计70分~80之间C级人数
		int levelC = 0;
		for(int C=0; C<j; C++){
			if(scores[C] >= 70 && scores[C] <80) levelC++;
		}
		printf("C级人数:%d\n", levelC);

		//统计60分~70之间D级人数
		int levelD = 0;
		for(int D=0; D<j; D++){
			if(scores[D] >= 60 && scores[D] < 70) levelD++;
		}
		printf("D级人数:%d\n", levelD);

		//统计60分以下E级人数
		int levelE = 0;
		for(int E=0; E<j; E++){
			if(scores[E] < 60) levelE++;
		}
		printf("E级人数:%d\n", levelE);

	return 0;
}

