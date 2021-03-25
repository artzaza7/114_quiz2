#include<stdio.h>
int main()
{
    long long n,count=0,save,give=1;
    scanf("%lld",&n);
    save=n;
    for(long long i=1;i<=n;i++)
    {
        if(i<10)
        {   
            if(i==give)
                give=give*10;
            count++;
        }
        else if (i>=10&&i<100)
        {
            if(i==give)
            {
                give=give*10;
            }
            long long het1=i%(give/10),het2;
            het2=(i-het1)/(give/10);
            if(het1==het2)
                count++;
        }
        else if(i>=100&&i<1000)
        {
            if(i==give)
            {
                give=give*10;
            }
            long long het1=i%(give/10),het2;
            het2=(i-het1)/(give/10);
            if(het1==het2)
                count++;
        }
    }
    printf("%lld",count);
    return 0;
}