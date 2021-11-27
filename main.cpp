#include <iostream>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/142
using namespace std;

long long a,b,c,d,mi=10e9,ma=0,sum=0;

int main()
{
    cin>>a>>b>>c>>d;
    mi=min(mi,min(a,min(b,min(c,d))));
    ma=max(ma,max(a,max(b,max(c,d))));
    sum=a+b+c+d;
    if (mi<5000000 || ma-mi > 20000000 || sum<=100000000) {
        cout<<"FALSE";
    } else cout<<"TRUE";
    return 0;
}
