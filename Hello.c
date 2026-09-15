//练习git提交
#include <stdio.h>
int main(void) {
    char name[50];
    int age;
    printf("请输入你的名字和年龄：");
    scanf("%s%d",name,&age);
    printf("你好%s，你%d岁了",name,age);
    return 0;
}