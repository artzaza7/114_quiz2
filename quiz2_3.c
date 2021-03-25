#include<stdio.h>
int main()
{
    long long n,count=0,save,give1,give2;
    scanf("%lld",&n);
    save=n;
    for(long long i=1;i<=n;i++)
    {
        if(i<10)
        {
            count++;
            give1=11;
        }
        if(i>=10&&i<100)
        {
            if(i==give1)
            {
                give1=give1+11;
                count++;
            }
            give2=101;
        }
        if(i>=100&&i<1000)
        {
            if(i==give2)
            {
                for(int j=1;j<=9;j++)
                    count++;
            }
            else
            {
                give2=give2+10;
            }
        }
    }
    printf("%lld",count);
    return 0;
}