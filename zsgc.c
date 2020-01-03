#include <stdio.h>

struct User{
    char name[100];
    char sex[10];
    int age;
    char tel[15];
};

struct User users[100];
int count=0,i;

int add() //增加会员
{
    printf("请输入增加的会员名称:\n");
    scanf("%s",users[count].name);
    printf("请输入增加的会员性别:\n");
    scanf("%s",users[count].sex);
    printf("请输入增加的会员年龄:\n");
    scanf("%d",&users[count].age);
    printf("请输入增加的会员手机:\n");
    scanf("%s",users[count].tel);
    printf("----------增加成功----------\n");
    printf("姓名:%s\n",users[count].name);
    printf("性别:%s\n",users[count].sex);
    printf("年龄:%d\n",users[count].age);
    printf("手机:%s\n",users[count].tel);
    count++;
    return 0;
}

int delete()//删除会员(根据数组索引写)
{
    int x;
    printf("请输入需删除的会员编号:\n");
    scanf("%d",&x);
    for(int x; x<count; x++){
        users[x]=users[x+1];
    }
    printf("----------删除成功----------\n");
}

int change()//修改会员
{
    int y;
    printf("请输入需修改的会员编号:\n");
    scanf("%d", &y);
    printf("请输入会员姓名:\n");
    scanf("%s",users[y-1].name);
    printf("请输入会员性别:\n");
    scanf("%s",users[y-1].sex);
    printf("请输入会员年龄:\n");
    scanf("%d",&users[y-1].age);
    printf("请输入会员手机:\n");
    scanf("%s",users[y-1].tel);
    printf("----------修改成功----------\n");
}

int search()//查询会员
{
    int z;
    printf("请输入要查询的编号:\n 1.查询所有会员\n 2.查询某个会员\n");
    scanf("%d",&i);
    switch (i)
    {
        case 1://查看所有会员
        for(int a=0; a<count; a++){
            printf("会员姓名:%s\n",users[a].name);
            printf("会员性别:%s\n",users[a].sex);
            printf("会员年龄:%d\n",users[a].age);
            printf("会员手机:%s\n",users[a].tel);
        }
        break;

        case 2://查看某个会员
        printf("请输入要查询的某个会员编号:\n");
        scanf("%d",&z);
        if(z>0){
            printf("会员姓名:%s\n",users[z-1].name);
            printf("会员性别:%s\n",users[z-1].sex);
            printf("会员年龄:%d\n",users[z-1].age);
            printf("会员手机:%s\n",users[z-1].tel);
        }else{
            printf("请输入>=1的会员编号:\n");
        }
        break;
    }
}


int main(){
    int flag=1;
    while(flag){
        printf("----------目录表----------\n1.增加会员\n2.删除会员\n3.修改会员\n4.查询会员\n5.退出\n");
        scanf("%d",&i);
        switch(i){
            case 1:add();
            break;
           case 2: delete();
            break;
            case 3: change();
            break;
            case 4: search();
            break;
            case 5: flag=0;
            break;
        }
    }
    return 0;
}
