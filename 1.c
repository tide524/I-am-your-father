/*
1.录入姓名、性别、学号、专业、成绩

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define STU_MAS 100
//定义一个结构体
struct student
{
  char name[30];
  char sex;
  long ch;
  char major[30];
  float score;
}stu[STU_MAS];
int s_m=0;
//编辑菜单
int menu()
{
  int a;
  printf("......欢迎进入学籍管理系统......\n");
  printf("......1.录入学生信息......\n");
  printf("......2.查询修改学生信息......\n");
  printf("......3.输出学生信息......\n");
  printf("......4.按关键字查找学生信息......\n");
  printf("......5.按成绩排行......\n");
  printf("......6.关闭程序......\n");
  printf("请输入你的选择：\n");
  scanf("%d",&a);
  switch (a)
  {
    case 1:printf("......1.录入学生信息......\n");break;
    case 2:printf("......2.查询修改学生信息......\n");break;
    case 3:printf("......3.输出学生信息......\n");break;
    case 4:printf("......4.按关键字查找学生信息......\n");break;
    case 5:printf("......5.按成绩排行......\n");break;
    case 6:printf("......6.关闭程序......\n");break;
    default :printf("error!\n");break;
  }
  getcahr();
}
//录入学生信息
void stymas()
{
  int i;
  int o;
  printf("请输入学生人数：\n");
  scanf("%d",&s_m);
  for(i=0;i<s_m;i++)
  {
    printf("请输入姓名、性别、学号、专业、成绩：\n");
    scanf("%s %s %d %s %f\n",stu[i].name,stu[i].sex,stu[i].ch,stu[i].major,stu[i].score);
  }
  
  
} 
