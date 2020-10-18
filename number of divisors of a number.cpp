// The program finds the number of divisors of a number taken as input.
//If a no when represented in the form (a^x)*(b^y).... where a, b and all others are the prime factors. The no of divisors: ans=(x+1)*(y+1).....

#include<bits/stdc++.h>
using namespace std;
#define int1 long long

void sieve(int *p)
{
    p[0]=0;
    p[1]=0;
    p[2]=1;
    
    //primes.push_back(2);

    for(int1 i=3;i<=500000;i+=2)
        p[i]=1;

    for(int1 i=3;i<=500000;i+=2)
    {
        if(p[i]==1)
        {
            //primes.push_back(i);
            for(int1 j=i*i;j<=500000;j+=i)
                p[j]=0;
        }
    }
}

int main()
{
    int1 m;
    cin>>m;
    int l[500001]={0};
	  vector<int> v;
    sieve(l);
    for(int1 i=0;i<=500000;i++)
    {
		if(l[i]==1)
			v.push_back(i);
	}
	int i=0,ans=1;
	int p=v[0];
	while(p*p<=m)
	{
	    if(m%p==0)
	    {
	        int cnt=0;
	        while(m%p==0)
	        {
	            cnt++;
	            m/=p;
	        }
	        ans*=(cnt+1);
	    }
	    i++;
	    p=v[i];
	}
	
	if(m!=1)
	    ans*=2;

	cout<<ans;
}
