int calculateSquare(int num)
{
    long long res=0;
    long long n=abs(num);
    for(int i=31;i>=0;i--)
    {

        if((1ll<<i)<=n)
        {
            res+=(num<<i);
            n=n-(1<<i);
        }
    }
    return abs(res);
   
}