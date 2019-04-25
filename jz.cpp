#include<bits/stdc++.h>
using namespace std;
int r[2*100004];
int main()
{
    long long int a,b,c,d,e,f,g;
    vector<int>v1,v2;
    while(cin>>a)
    {
        d=e=0;
        for(b=1;b<=a;b++)
        {
            cin>>c;
            r[b]=c;
            if(c==0)d++;
            else e++;

        }
        for(b=1;b<=a;b++)
        {
            if(r[b]==0)d--;
            else e--;
            if(d==0||e==0)
            {
                f=b;
                break;
            }
        }
        cout<<f<<endl;



    }










    return 0;
}
