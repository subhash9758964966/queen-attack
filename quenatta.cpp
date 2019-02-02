#include <bits/stdc++.h>

using namespace std;
int obstacle(int r0, int c0 , int y, int a0[], int b0[] , int r1, int c1)
{
	
	if(r1==r0&&c1==c0)
	{
		return 0;
	}
	int i;int count=0;int p=1;
	for(i=0;i<y;i++)
	{
		
		if(a0[i]==r0&&b0[i]==c0)
		{
		   p=0;	break;
		}
		
		else { 
		    p=1;
		
		
             	}
             	cout<<a0[i]<<" "<<b0[i]<<" "<<y<<endl<<endl;
             }
             if(p==0)
             {
			 

		return 0;
	}
		else 
		return 1;
	
	


}
int main()
{
	int n,k,r,c,i,j;int sum=0;int result;
	cin>>n>>k>>r>>c;int a[k];int b[k];
	int temp1=r;
	int temp2=c;
	for(i=0;i<k;i++)
	{
		cin>>a[i]>>b[i];
		
	}
	
	while(temp1>0)
	{
		if(temp1!=r||temp2!=c)
		{
				cout<<" answere is "<<temp1<<" "<<temp2<<" "<<endl;
			result=obstacle(temp1,temp2, k,a,b,r,c);
			if(result==1)
			{
				sum=sum+1;
			}
			else break;
			
		}
		temp1--;
		
	}
	
	
		cout<<" result is "<<sum<<endl;
		temp1=r;
	temp2=c;
		while(temp1<=n)
	{
		if(temp1!=r||temp2!=c)
		{
			cout<<" answere is "<<temp1<<" "<<temp2<<" "<<endl;
		result=obstacle(temp1,temp2, k,a,b,r,c);
			if(result==1)
			{
				sum=sum+1;
			}
				else break;
		}
		temp1++;
		
	}
		cout<<" result is "<<sum<<endl;
		
		
		temp1=r;
	temp2=c;
		while(temp2>0)
	{
		if(temp1!=r||temp2!=c)
		{
			cout<<" answere is "<<temp1<<" "<<temp2<<" "<<endl;
			
		result=obstacle(temp1,temp2, k,a,b,r,c);
			if(result==1)
			{
				sum=sum+1;
			}
				else break;
		}
		temp2--;
		
	}
		cout<<" result is "<<sum<<endl;
		
		 temp1=r;
	 temp2=c;
		while(temp2<=n)
	{
		if(temp1!=r||temp2!=c)
		{
			cout<<" answere is "<<temp1<<" "<<temp2<<" "<<endl;
		result=obstacle(temp1,temp2, k,a,b,r,c);
			if(result==1)
			{
				sum=sum+1;
			}
				else break;
		}
		temp2++;
		
	}
	
	
			cout<<" result is "<<sum<<endl;
		temp1=r;
	temp2=c;
	 while(temp1>0 && temp1<=n && temp2>0 && temp2<=n)
	{
		if(temp1!=r||temp2!=c)
		{
			cout<<" answere is "<<temp1<<" "<<temp2<<" "<<endl;
result=obstacle(temp1,temp2, k,a,b,r,c);
			if(result==1)
			{
				sum=sum+1;
			}
			
				else break;
		}
		temp1--;temp2++;
		
	}
		
			cout<<" result is "<<sum<<endl;
	temp1=r;
	 temp2=c;
	 while(temp1>0 && temp1<=n && temp2>0 && temp2<=n)
	{
		if(temp1!=r||temp2!=c)
		{
	result=obstacle(temp1,temp2, k,a,b,r,c);
	if(result==1)
			{
				sum=sum+1;
			}
				else break;
			
		}
		temp1--;temp2--;
		
	}
		
			cout<<" result is "<<sum<<endl;
		temp1=r;
	 temp2=c;
	 while(temp1>0 && temp1<=n && temp2>0 && temp2<=n)
	{
		if(temp1!=r||temp2!=c)
		{
	result=obstacle(temp1,temp2, k,a,b,r,c);
	if(result==1)
			{
				sum=sum+1;
			}
				else break;
			
		}
		temp1++;temp2--;
		
	}
		
			cout<<" result is "<<sum<<endl;
		temp1=r;
	temp2=c;
	 while(temp1>0 && temp1<=n && temp2>0 && temp2<=n)
	{
		if(temp1!=r||temp2!=c)
		{
		result=obstacle(temp1,temp2, k,a,b,r,c);
		if(result==1)
			{
				sum=sum+1;
			}
				else break;
			
		}
		temp1++;temp2++;
		
	}
		
			cout<<" result is "<<sum<<endl;
	
	
	
	cout<<sum;
	
	
	
	return 0;
}
