#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long int count = 0,wow=0; 
    for(long long i=1;i<=n;i++)
    {
        long long save=i;
        while (save>0)
        {
            long long check=2,num=0;
            if(check>save)
            {
                break;
            }
            if(save%check==0)
            {
                num++;
                save=save/check;
                if(num==2)
                {
                    count++;
                    break;
                }
            }
            else
            {
                num=0;
                check++;
            }
        }
        if(count!=0)
        {
            printf("Not Cube Free");
            break;
        }
        else
        {
            wow++;
        }
    }
    if(wow!=0)
    {
        printf("%lld",n-count);
    }
    return 0;
}