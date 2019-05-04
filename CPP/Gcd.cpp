#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
ll mult(ll a,ll b,ll c)
{
	ll res=0;
	while(b)
	{
		if(b&1) res=(res+a)%c;
		a=(2*a)%c;
		b/=2;	
	}
	return res;
}
ll powm(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		if(b&1) res=(mult(res,a,c))%c;
		a=mult(a,a,c)%c;
		b/=2;	
	}
	return res;
}
int main()
{
	ll t;
	ll a,b,n;
	cin>>t;
	while(t--)
	{
 
		cin>>a>>b>>n;
		ll y=abs(a-b);
		if(!y)
		{
			cout<<(powm(a,n,mod)+powm(b,n,mod))%mod<<"\n";
			continue;
		}
		ll x=powm(a,n,y)+powm(b,n,y);
        cout<<(__gcd(x,y))%mod<<"\n";
	}
 
 return 0;
}