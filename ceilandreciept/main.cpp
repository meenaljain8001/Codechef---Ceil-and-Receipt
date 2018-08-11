#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
while(t--)
{
    float n,hra,da;
    cin>>n;
        if(n<1500)
        {
            hra=n*0.1;
            da=n*0.9;
        }
        else
        {
            hra=500;
            da=n*0.98;
        }
cout<<n+hra+da<<endl;
}
return 0;
}


