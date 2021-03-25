#include<stdio.h>
int main()
{
    long long n,count=0,wow=101,wow2=1001,wow3=10001,wow4=100001;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++)
    {
        if(i<10)
        {
            count++;
        }
        else if(i>=10&&i<100)
        {
            if(i%11==0)
            {
                count++;
            }
        }
        else if(i>=100&&i<1000)
        {
            if(i==wow)
            {
                count++;
                wow=wow+10;
            }
        }
        else if(i>=1000&&i<10000)
        {
            if(i==wow2)
            {
                count++;
                wow2=wow2+110;
            }
        }
        else if(i>=10000&&i<100000)
        {
            if(i==wow3)
            {
                count++;
                wow3=wow3+1110;
            }
        }
        else if(i>=100000&&i<1000000)
        {
            if(i==wow4)
            {
                count++;
                wow4=wow4+11110;
            }
        }
    }
    printf("%lld",count);
    return 0;
}