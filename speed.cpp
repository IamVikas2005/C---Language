#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int v,u,a;
    float speed;
    cout<<"Value Of 'v': ";
    cin>>v;
    cout<<"Value Of 'u': ";
    cin>>u;
    cout<<"Value Of 'a': ";
    cin>>a;

    speed= (pow(v,2)-pow(u,2))/(2*a);
    cout<<"Speed= "<<speed<<endl;
    return 0;
}
