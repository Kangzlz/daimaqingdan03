/*判断输入的整数符号*/
#include<stdio.h>
int main(void){

    int no;

    printf("请输入一个整数：");
    scanf("%d",&no);

    if(no==0)
    puts("该整数是零。");
    else if(no>0)
    puts("该整数为正数。");
    else
    puts("该整数为负数。");

    return 0;
}