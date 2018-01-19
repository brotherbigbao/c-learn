// 以 下 程 序 中 ， 函 数 c o l l e c t 的 功 能 是 对 n 位 学生的考试 成绩 统 计 总 平 均 分 和 低 于 总 平
//均分的人 数 ， 本题 约 定， 人 数 的统 计 数 由函 数 返 回 ， 总平均分 则 由形 式 参 数 a v e r 带出
//该 程 序 有 错 误 ， 请指 出其 出错 行 ， 并修改 它 直 至达 到 程 序 的预 期 功 能 为 止
#include <stdio.h>
#define N 10
int collect(float s[], int n, float *aver)
{
    int i,count=0;
    float x=0.0;
    for(i=0; i<N; i++) x+=s[i];
    printf("%d", x);
    x=x/N;
    for(i=0; i<N; i++)
        if(s[i]<x) count++;
    *aver = x;
    return count;
}

main()
{
    float s[N],aver; int i,num;
    for(i=0;i<N;i++) scanf("%f", &s[i]);
    num=collect(s,N,&aver);
    printf("average=%.1f\n", aver);
    printf("<%.1f is:%d\n", aver, num);
}

