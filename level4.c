#include <stdio.h>

int main()
{
    int scores[100];
    int i = 0; //设定变量i为输入的次数
    printf("请输入学生成绩:\n");
    while (1)
    {
        int num;
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        else
        {
            scores[i] = num;
            i++;
        }
    }
    printf("当前输入%d个数值\n", i);

    /*1.把输入数组中的各个成绩打印出来*/
    for (int j = 0; j < i; j++)
    {
        printf("打印第%d名学生成绩:%d\n", j + 1, scores[j]);
    }

    /*2.总成绩求和*/
    int sum = 0; //设定计算总和的变量sum初始值为0
                 //设定变量为s的数组下标用来显示第s个学生成绩
    for (int s = 0; s < i; s++)
    {
        //sum求和通过每次不同s下标对应数组中的值累加
        //sum代表s名学生之前的成绩总和
        sum += scores[s];
    }
    printf("总成绩%d\n", sum);

    /*3.计算平均值*/
    int avg;
    avg = sum / i;
    printf("平均值%d\n", avg);

    /*计算最大值（冒泡排序法思路参考）*/
    //下标x代表第x名学生成绩
    // for (int x = 0; x < i; x++)
    // {
    //     if (scores[x] < scores[x + 1])
    //     {
    //         scores[x] = scores[x + 1];
    //     }
    //     if (x = i-1)
    //     {
    //     printf("最大值%d", scores[x]);
    //     }
    // }

    /*4.计算最大值*/
    int max = 0;
    //设定数组下标x
    for (int x = 0; x < i; x++)
    {
        if (max < scores[x])
            max = scores[x];
    }
    printf("最大值%d\n", max);

    /*5.计算最小值*/
    int min = 888;
    //设定数组下标x
    for (int x = 0; x < i; x++)
    {
        if (min > scores[x])
            min = scores[x];
    }
    printf("最小值%d\n", min);

    /*6.统计成绩大于90分A级人数*/
    int levelA = 0;
    for (int A = 0; A < i; A++)
    {
        if (scores[A] >= 90)
            levelA++;
    }
    printf("A级人数:%d\n", levelA);

    /*7.统计成绩80~90分之间B级人数*/
    int levelB = 0;
    for (int B = 0; B < i; B++)
    {
        if (scores[B] >= 80 && scores[B] < 90)
            levelB++;
    }
    printf("B级人数:%d\n", levelB);

    /*7.统计成绩70~80分之间C级人数*/
    int levelC = 0;
    for (int C = 0; C < i; C++)
    {
        if (scores[C] >= 70 && scores[C] < 80)
            levelC++;
    }
    printf("C级人数:%d\n", levelC);

    /*8.统计成绩60~70分之间D级人数*/
    int levelD = 0;
    for (int D = 0; D < i; D++)
    {
        if (scores[D] >= 60 && scores[D] < 70)
            levelD++;
    }
    printf("D级人数:%d\n", levelD);

    /*9.统计成绩60以下E级人数*/
    int levelE = 0;
    for (int E = 0; E < i; E++)
    {
        if (scores[E] < 60)
            levelE++;
    }
    printf("E级人数:%d\n", levelE);
}
