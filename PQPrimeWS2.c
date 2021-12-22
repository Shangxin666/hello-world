#include <stdio.h>
int Isprime(long long x);
int main(void)
{
    int p,q,i,m,n;
    for(p = 2;p < 10;p++)
    {
        for(q = 2;q < 10;q++)
        {
            if(Isprime(p) && Isprime(q))
            {
                m = 1;
                n = 1;
                for(i = 1;i <= q;i++)
                {
                    m *= p;
                }
                for(i = 1;i <= p;i++)
                {
                    n *= q;
                }
                if(Isprime(m+n))
                printf("%d and %d\n",p,q);
            }
        }
    }
    return 0;
}

int Isprime(long long x)
{
    int j;
    for( j = 2;j <= x/j;j++)
        if(x%j == 0) 
            return 0;
    return 1;
}