#include <stdio.h>
void main()
{
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100-i;j++){
            if((100-i-j)%3==0 && (5*i+3*j+1*(100-i-j)/3)==100 )
            printf("����%d��  ־��%d��  ����%d��\n",i,j,100-i-j);
        }}}
