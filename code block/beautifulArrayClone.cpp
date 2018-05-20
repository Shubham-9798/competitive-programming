#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t!=0)
	{
	    long int n,i;
	    int flag=0,flag0=0,flag1=0,b=0,c=0;
	    cin>>n;
	    long long int a[n];

	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if((a[i]==0)||(a[i]==1))
	        {
	            flag=1;
	            if(a[i]==0)
	            flag0=1;
	            if(a[i]==1)
	            flag1=1;
	        }
	    }

	    if(n==1)
	    cout<<"yes";
	    else
	    {
	    sort(a,a+n);
	    if(flag==1)//if a[i]=0,1
	    {
	        for(i=0;i<n;i++)
	        {
	            if((a[i]==0)||(a[i]==1));//yes for every condition
	            else
	            {
	                if(a[i]==-1)
	                {
	                    if(b==0)
	                    c=c+1;
	                    else
	                    {
	                        flag=0;
	                        break;
	                    }
	                }
	                else
	                {
	                    if(c>=1)
	                    {
	                        flag=0;
	                        break;
	                    }
	                    else
	                    {
	                        b=b+1;
	                        if(b>1)
	                        {
	                            flag=0;
	                            break;
	                        }
	                    }
	                }
	            }
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"no";
	    }
	    else
	    {
	        if(b==1)
	        {
	            if(c==0)
	            cout<<"yes";
	            else
	            cout<<"no";
	        }
	        else
	        {
	            if(c<2)
	            cout<<"yes";
	            else
	            {

	                if(flag1==1)
	                cout<<"yes";
	                else
	                cout<<"no";
	            }
	       }
	    }
	    }
	    cout<<"\n";
	    t--;
	}
	return 0;
}
