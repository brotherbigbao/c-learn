#include <stdio.h>
#include <string.h>

void main()
{
    //func_5_8();
    //func_5_9();
    //func_5_10();
    //func_5_10_2();
    //func_6_4();
    func_6_8();
}

//99乘法表
func_5_8()
{
    int i,j;
    for(i=1;i<10;i++)
        for(j=1;j<10;j++)
            printf((j==9)?"%4d\n":"%4d", i*j);
}

//fibonacci数列
func_5_9()
{
    int i,j,k;
    i=j=1;
    for (int n=0; n<20; n++) {
        if (n<2) {
            printf("%4d", 1);
        } else {
            printf("%4d", i+j);

            k=j;
            j=(i+j);
            i=k;
        }
    }
}

//爱因斯坦阶梯问题
func_5_10()
{
    int i=1, total, success=0;
    while (!success) {
        total = i*7;i++;
        if (total%2==1 && total%3==2 && total%5==4 && total%6==5) {
            success = 1;
        }
    }
    printf("%d\n", total);
}

//爱因斯坦阶梯问题 书上答案
func_5_10_2()
{
    int x=7;
    while(x%3!=2 || x%5!=4 || x%6!=5)
        x+=14;
    printf("%d\n", x);
}

//将两个字符串按升序合并 先合并再选择排序 书上答案太复杂
func_6_4()
{
    int i,j,k,aLength;
    char a[80] = "zkcvbn";
    char b[80] = "asfd";
    aLength = strlen(a);
    for(i=0; b[i]; i++){
        a[aLength] = b[i];
        aLength++;
    }

    aLength = strlen(a);
    for(i=0; i<aLength-1; i++){
        for(j=i+1; j<aLength; j++){
            if (a[i] > a[j]) {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    printf("%s\n", a);

}

//由键 盘 输 入 一 个 同学的姓 名 ， 查找在指 定 的班 级 中 是 否 存 在 。
func_6_8()
{
    int i, flag=0;
    char name[5][20] = {"Li Fei", "He Fei", "Liu Lu", "Zhang San", "Wang Na"};
    char yourname[20];
    printf("Enter your name:");gets(yourname);
    for (i=0; i<5; i++)
        if (strcmp(name[i], yourname) == 0) flag=1;
    puts(yourname);
    if (flag)
        printf("is in this class");
    else
        printf("is not in this class");
}

//编写程序,实现strcat函数的功能,将字符串s1与s2尾首相接
func_6_10()
{
    char str1[80], str2[80];
}