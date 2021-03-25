#include<stdio.h>
int main()
{
    long long m,n;
    scanf("%lld %lld",&m,&n);
    long long box [n][m];
    char king[m][70];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<70;j++)
        {
            king[i][j]='o';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%lld",&box[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(box[i][0]-1==j)
            {
                for(int g=0;g<70;g++)
                {
                    if(g==box[i][1]-1)
                    {
                        for(int p=1;p<=box[i][2];p++)
                        {
                            king[j][g]='x';
                            g++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<70;j++)
        {
            printf("%c",king[i][j]);
        }
        printf("\n");
    }
    return 0;
}