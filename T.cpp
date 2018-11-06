//https://www.luogu.org/problemnew/show/P1478
#include<bits/stdc++.h>
using namespace std;
const int maxa=5000;
int app[maxa],str[maxa];
int main()
{
    int n,s,a,b;
    cin>>n>>s>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>app[i]>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        if(app[i]>a+b)
        {
            app[i]=0;
            str[i]=100;
        }
    }
    int num=0;
    while(s>=0)
    {
        int i,min,x_min=0;
        for(i=0,min=100;i<n;i++)
        {
            if(min>str[i])
            {
                min=str[i];
                x_min=i;
            }
        }
    s-=min;
    str[x_min]=100;
    num++;
    }
cout<<num-1;
}
/*
//https://www.luogu.org/problemnew/show/P1003
int main()
{
   int shuzu[10001][10001];
    int n,x,y;
    int b=1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int ii=1;ii<=4;++ii)
        cin>>shuzu[i][ii];                               
    }
    cin>>x>>y;
    for(int q=n;q>=1;--q)
    {
        if((shuzu[q][1]<=x)&&(shuzu[q][3]+shuzu[q][1]>=x)&&(shuzu[q][2]<=y)&&(shuzu[q][2]+shuzu[q][4]>=y))   
        {
            cout<<q;
        b=2    ;
        }
        if(b==2)
        break;
        if(q==1)
        {
            cout<<-1;
        break;
        }
    }
    return 0;
}
*/