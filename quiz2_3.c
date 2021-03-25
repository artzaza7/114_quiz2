#include<stdio.h>
int main()
{
    long long n,count=1,save;
    scanf("%lld",&n);
    save=n;
    while (n>=10)
    {
        n=n/10;
        count=count*10;
    }
    count++;
    int ans=0;
    if(count<=11)
    {
        for(int i=1;i<=save;i++)
        {
            ans++;
        }
        if(ans==10)
            ans--;
    }
    else if(count<=101)
    {
        for(int i=11;i<=save;i=i+11)
        {
            ans++;
        }
        ans=ans+9;
    }
    else 
    {
        for(int i=100;i<1000;i++)
        {
            long long king1=i%10,king2=i%100,king3;
            king3=(i%1000-king2)/100;
            if(king1==king3)
            {
                ans++;
            }
        }
        ans=ans+18;
    }
    printf("%d",ans);
    return 0;
}