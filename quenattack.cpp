#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    int r,c;
    cin>>r>>c;int u,d,l,ri,ul,ur,dl,dr;
    u=0;d=n+1;l=0;ri=n+1;ul=0;ur=0;dl=n+1;dr=n+1;int i;
    for(i=0;i<k;i++)
    {
        int r0,c0;
        cin>>r0>>c0;
        if(r0==r)
        {
            if(c0>c)
            {
                ri=min(ri,c0);
            }
            else
            l=max(l,c0);
        }
        else if(c0==c)
        {
            if(r0>r)
            {
                 d=min(d,r0);
            }
            else
                u=max(u,r0);
        }
        else if((r0+c0)==(r+c))
        {
            if(r0>r)
            {
                dl=min(dl,r0);
            }
            else 
            ur=max(ur,r0);
        }
        else if((r0-c0)==(r-c))
        {
            if(r0>r)
            {
                dr=min(dr,r0);
            }
            else ul=max(ul,r0);
        }

        
    }
    int sum=0;

 
 if(r-1>0)
 {
 	sum=sum+abs(r-u)-1;
 }
 if(r+1<=n)
 {
 	sum=sum+abs(r-d)-1;
 }
 if(c-1>0)
 {
 	sum=sum+abs(c-l)-1;
 }
 if(c+1<=n)
 {
 	sum=sum+abs(c-ri)-1;
 }
 if(ur!=0)
 {
 	if((r-1)>0&&(c+1)<=n)
 	{
 		sum=sum+abs(r-ur)-1;
	 }
 }
 else
 {
 	sum=sum+min(r-1,n-c);
 }
 if(ul!=0)
 {
 	if((r-1)>0&&(c-1)>0)
 	{
 		sum=sum+abs(r-ul)-1;
	 }
 }
 else
 {
 	sum=sum+min(r-1,c-1);
 }
 if(dr!=n+1)
 {
 	if((r+1)<=n&&(c+1)<=n)
 	{
 		sum=sum+abs(r-dr)-1;
	 }
 }
 else
 {
 	sum=sum+min(n-r,n-c);
 }
 if(dl!=n+1)
 {
 	if((r+1)<=n&&(c-1)>0)
 	{
 		sum=sum+abs(dl-r)-1;
	 }
 }
 else
 {
 	sum=sum+min(n-r,c-1);
 }
    cout<<sum;
   
    return 0;
}


