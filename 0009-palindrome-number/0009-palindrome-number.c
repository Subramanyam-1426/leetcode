bool isPalindrome(long int n) {
    long int r,j=0,s=0,t;
    if(n<0)
    {
        n=-n;
        j++;
    }
    for(t=n;t>0;t=t/10)
    {
        r=t%10;
        s=s*10+r;
    }
    if(j==1)
    {
        s=-s;
    }
    if(n==s)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}