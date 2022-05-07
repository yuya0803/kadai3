#include <stdio.h>
#include "calc.h"

int main()
{
    int x[2][1], y[2][1], A[2][2], B[2][2], sum1[2][1], sum2, sum3[2][1], sum4[2][1], sum5[2][2], sum6[2][2], sum7[2][2];
    x[0][0]=5; x[1][0]=7;
    y[0][0]=2; y[1][0]=3;
    A[0][0]=1; A[1][0]=4; A[0][1]=3; A[1][1]=2;
    B[0][0]=2; B[1][0]=3; B[0][1]=1; B[1][1]=2;
    int i,j,k;

    printf("toi3 (1)\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<1; j++)
        {
            sum1[i][j]=x[i][j]+y[i][j];
            printf("[%d][%d]=%d\n",i+1,j+1,sum1[i][j]);
        }
    }
    
    printf("toi3 (2)\n");
    sum2=toi32(i,j);
    printf("%d\n",sum2);

    printf("toi3 (3)\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<1; j++)
        {
            sum3[i][j]=x[j][i]*y[i][j];
            printf("[%d][%d]=%d\n",i+1,j+1,sum3[i][j]);
        }
    }

    printf("toi3 (4)\n");
    for(i=0; i<2; i++)
     {
        for(j=0; j<1; j++)
        {
             int a=0;
             for(k=0; k<2; k++)
             {
                a=a+A[i][k]*x[k][j];
                sum4[i][j]=a;
             }
        }
     }
     for(i=0; i<2; i++)
    {
        for(j=0; j<1; j++)
        {
            printf("[%d][%d]=%d\n",i+1,j+1,sum4[i][j]);
        }
    }
     printf("toi3 (5)\n");
     for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
             int b=0;
             for(k=0; k<2; k++)
             {
                b=b+A[i][k]*B[k][j];
                sum5[i][j]=b;
             }
        }
     }
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d][%d]=%d\n",i+1,j+1,sum5[i][j]);
        }
    }

    printf("toi3 (6)\n");
    for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
             int c=0;
             for(k=0; k<2; k++)
             {
                c=c+B[i][k]*A[k][j];
                sum6[i][j]=c;
             }
        }
     }
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d][%d]=%d\n",i+1,j+1,sum6[i][j]);
        }
    }

    printf("toi3 (7)\n");
    int det=0;
    det=B[0][0]*B[1][1]-B[0][1]*B[1][0];
    sum7[0][0]=B[1][1]/det;
    sum7[0][1]=-B[0][1]/det;
    sum7[1][0]=-B[1][0]/det;
    sum7[1][1]=B[0][0]/det;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d][%d]=%d\n",i+1,j+1,sum7[j][i]);
        }
    }

    printf("toi3 (8)\n");
    for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
             int b=0;
             for(k=0; k<2; k++)
             {
                b=b+A[i][k]*B[k][j];
                sum5[i][j]=b;
             }
        }
     }
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d][%d]=%d\n",i+1,j+1,sum5[j][i]);
        }
    }
     return 0;
}

