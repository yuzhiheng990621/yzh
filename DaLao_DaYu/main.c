#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    srand(time(NULL));
    (rand()%2+1==1)?printf("抢二十一游戏\n我先输入\n%d\n",rand()%2+1):printf("抢二十一游戏\n你先输入\n");
        for(int n,i=1;i<=7;i++)
    {
        scanf("%d",&n);
        3*i>n?printf("%d\n",3*i):printf("%d\n",n+rand()%2+1);
    }
}
