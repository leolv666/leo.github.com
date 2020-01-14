#include <stdio.h>

int main(){
    //设定数组里有100个成绩
    int scores[100];
    //设定变量i为输入次数
    int i=0;
    //打印出学生成绩
    printf("请输入学生成绩:\n");
    //设定while循环，１为true死循环
    while(1){
        //设定变量num为输入的成绩数值
        int num;
        //键盘输入成绩数值
        scanf("%d",&num);
        //当输入的num==-1时，if判断结束,跳出while循环向下执行代码
        if(num == -1){
            break;
        //当num!==-１时，执行else内容
        }else{
        //输入的num为第i个数组里的值
            scores[i] = num;
        //下标i自增
            i++;
        }
    }
        //打印输出的成绩
        printf("当前总共输入%d个数值\n",i);

    //1.打印第%d个学生成绩，打印scores[100]数组中对应的每个学生成绩
    //设定变量j初始下标为0，遍历数组中的每个数值
    for (int j = 0; j < i; j++){
        printf("打印第%d个学生成绩，分数为%d\n",j+1,scores[j]);
    }

    //2.计算总分数求和
    //设定变量sum为和,初始值为0
    int sum = 0;
    //设定变量s下标为数组中的第s+1个数值
    for (int s = 0; s < i; s++){
        sum += scores[s];
    }
    printf("总成绩为%d\n", sum);

    //3.计算平均分
    int avg = 0;
    avg = sum / i;
    printf("平均分为%d\n", avg);

    //4.计算最高分
    //设定变量max为数组中0下标即第一个数值
    int max = scores[0];
    //设定变量x下标为数组中的第x+1个数值
    for (int x = 1; x < i; x++){
        if(max < scores[x]) max = scores[x];
    }
    printf("最大值为%d\n", max);

    //5.计算最低分(最佳方案)
    //设定变量min为数组中0下标即第一个数值
    int min = scores[0];
    //设定变量y下标为数组中的第y+1个数值
    for(int y = 1; y < i; y++){
        if(min > scores[y]) min = scores[y]; 
    }
        printf("最小值为%d\n", min);

    //6.统计大于90分A级人数
    int levelA = 0;
    //设定变量A为数组下标，代表第A+1个人成绩
    for (int A = 0; A < i; A++){
        if (scores[A] >= 90){
            levelA++;
        }
    }
    printf("A级人数:%d\n", levelA);

    //7.统计80分~90分区间人数
    int levelB = 0;
    //设定变量B为数组下标，代表第B+1个人成绩
    for (int B = 0; B < i; B++){
        if(80 <= scores[B]  && scores[B] < 90){
            levelB++;
        }
    }
    printf("B级人数:%d\n", levelB);

    //8.统计70分~80分区间人数
    int levelC = 0;
    //设定变量C为数组下标，代表第C+1个人成绩
    for (int C = 0; C < i; C++){
        if(70 <= scores[C] && scores[C] < 80){
            levelC++;
        }
    }
    printf("C级人数:%d\n", levelC);

    //9.统计60分~70分区间人数
    int levelD = 0;
    //设定变量D为数组下标，代表第D+1个人成绩
    for (int D = 0; D < i; D++){
        if(60 <= scores[D] && scores[D] < 70){
            levelD++;
        }
    }
    printf("D级人数:%d\n", levelD);

    //10.统计小于60分E级人数
    int levelE = 0;
    //设定变量E为数组下标，代表第E+1个人成绩
    for (int E = 0; E < i; E++){
        if (scores[E] < 60){
            levelE++;
        }
    }
    printf("E级人数:%d\n", levelE);




    
    
    
    
    









    return 0;
}