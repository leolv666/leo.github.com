#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char *name;
    int sex;
    int age;
    int tel;
}Vip;

void catalog(){
    printf("----------<会员管理目录>----------\n");
    printf("\t\t1:新增会员\n");
    printf("\t\t2:删除会员\n");
    printf("\t\t3:修改会员\n");
    printf("\t\t4:查询会员\n");
    printf("\t\t5:退出系统\n");
    printf("--------------------------------------------------\n");
    printf("请输入1~5来进行下一步:\n");
}

Vip add() //增加会员
{
    Vip u;
    u.name=malloc(sizeof(char));
    printf("请输入增加的会员名称:\n");
    scanf("%s",u.name);
    printf("请输入增加的会员性别:\n");
    scanf("%d",&u.sex);
    printf("请输入增加的会员年龄:\n");
    scanf("%d",&u.age);
    printf("请输入增加的会员手机:\n");
    scanf("%d",&u.tel);
    printf("----------增加成功----------\n");
    return u;
}

void delete(int count,Vip users[])//删除会员
{
    int x;
    printf("请输入需删除的会员id:\n");
    scanf("%d",&x);
    for(int i=0; i<count; i++){
        if(users[i].id == x){
            users[x]=users[x+1];
        }
    }
    printf("----------删除成功----------\n");
}

void change(int count,Vip users[])//修改会员
{
    int y;
    printf("请输入需修改的会员id:\n");
    scanf("%d", &y);
    for (int i=0;i<count;i++){
        if(users[i].id==y){
            printf("请输入会员姓名:\n");
            scanf("%s",users[i].name);
            printf("请输入会员性别:\n");
            scanf("%d",&users[i].sex);
            printf("请输入会员年龄:\n");
            scanf("%d",&users[i].age);
            printf("请输入会员手机:\n");
            scanf("%d",&users[i].tel);
            printf("----------修改成功----------\n");
        }
    }
}

void search(int count,Vip users[])
{
    for(int a=0;a<count;a++){
        if(users[a].id!=0){
         printf("id:%d 姓名:%s 年龄:%d 性别%d \n",users[a].id,users[a].name,users[a].age,users[a].sex);  
        }
    }
}
int main(){
    int flag=1;
    int i;
    int count=0;
    Vip a;
    Vip users[100];
    while(flag){
        catalog();
        scanf("%d",&i);
        switch(i){
            case 1:
                a = add();
                users[count].id=count+1;
                users[count].name=a.name;
                users[count].age=a.age;
                users[count].sex=a.sex;
                users[count].tel=a.tel;
                count++;
                break;
            case 2:
                delete(count,users);
                break;
            case 3: 
                change(count,users);
                break;
            case 4:
                search(count,users);
                break;
            case 5: 
                exit(0);
                break;
        }
    }
    return 0;
}
