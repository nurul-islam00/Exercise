#include<bits/stdc++.h>
using namespace std;
int main()
{


   long long int a,b,c,d,e,f,g,h,doo,ue,uo,de;
   while(cin>>a>>b)
   {
       ue=uo=de=doo=e=0;
       for(c=1;c<=a;c++)
       {
           cin>>d;
           if(d%2==0)
           {
               ue++;
           }
           else
           {
               uo++;
           }
       }
       for(c=1;c<=b;c++)
       {
           cin>>d;
           if(d%2==0)
           {
               de++;
           }
           else
           {
               doo++;
           }
       }
       if(uo>=de)
       {
           e+=de;
       }
       else
       {
           e+=uo;
       }
        if(doo>=ue)
       {
           e+=ue;
       }
       else
       {
           e+=doo;
       }
       cout<<e<<endl;

   }






    return 0;
}
