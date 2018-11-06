#include<bits/stdc++.h>
using namespace std;
const int maxn=1001;
int main()
{
    int m,n;
    cin>>n>>m;
    //cout<<"n m is prepared";
    int num[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>num[i][j];
        }
    }
    //cout<<"input is ok";
    int x,q,a,l,r,b,k,sum;
    cin>>q;
    for(int i=0,sum=0;i<q;i++)
    {
        cin>>k;
        if(k==1)
        {
            //cout<<"you do choose mode 1";
            cin>>x>>l>>r;
            for(int j=l-1;j<=r-1;j++)
            {
                sum+=num[x-1][j];
            }
        }
        if(k==2)
        {
            //cout<<"you do choose mode 2";
            cin>>a>>b>>l>>r;
            
            for(int j=a-1;j<=b-1;j++)
            {
                for(int o=l-1;o<=r-1;o++)
                {
                    sum+=num[j][o];
                }
            }
        }
    cout<<sum;
    sum=0;
    }

}