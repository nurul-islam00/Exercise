#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,r1[2000],r2[2000],g,h,i,j,l;
    vector<long int>v1,v2,v3;
    while(cin>>a)
    {
        for(b=1;b<=a;b++)
        {
            cin>>c;
            if(b==1)
            {
                d=c;
            }
            else
            {
                if(c>d)
                {
                    d=c;
                }
            }
            v1.push_back(c);
        }
       // sort(v1.begin(),v1.end());
      //  d=v1[a-1];
        cout<<d<<endl;
        i=0;
        for(e=0;e<=100;e++)
        {
            v2=v1;
            g=d-e;

            for(f=0;f<a;f++)
            {
                if(v2[f]>g)
                {
                    v2[f]-=e;
                }
                else if(v2[f]<g)
                {
                    v2[f]+=e;
                }

            }
            sort(v2.begin(),v2.end());

            if(v2[0]==v2[a-1])
            {
                h=e;
                i=1;
                break;
            }
            v2.clear();

         //cout<<"kdfj"<<endl;

        }
        if(i==1)
        {
            cout<<h<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        v1.clear();


    }









    return 0;
}
