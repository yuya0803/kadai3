#include <stdio.h>
#include "calc.h"

int toi31(int i, int j)
{
    int x[2][1], y[2][1], sum1[2][1];
    for(i=0; i<2; i++)
    {
        for(j=0; j<1; j++)
        {
            sum1[i][j]=x[i][j]+y[i][j];
            printf("[%d][%d]=%d\n",i+1,j+1,sum1[i][j]);
        }
    }
};

int toi32(int i, int j)
{
    int x[2][1], y[2][1], sum2=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<1; j++)
        {
            sum2=sum2+x[i][j]*y[i][j];
        }
    }

    return sum2;
}