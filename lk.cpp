#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f;
    while(cin>>a>>b)
    {
        c=0;
        while(a>=1&&b>=1)
        {
            d=max(a,b);
            e=min(a,b);
            f=abs(a-b);
            if(a>=b)
            {
                a-=e;
                b=e;

            }
            else
            {
                b-=e;
                a=e;
            }
            c++;

        }
        cout<<c<<endl;

    }




    return 0;
}
