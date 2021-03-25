#include<stdio.h>
int main()
{
    long long n,count=0;
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
    }
    printf("%lld",count);
    return 0;
}