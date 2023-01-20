#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float proot, nroot, a,b,c;
    cout<<"Enter The Value Of 'a': ";
    cin>>a;
    cout<<"Enter The Value Of 'b': ";
    cin>>b;
    cout<<"Enter The Value Of 'c': ";
    cin>>c;

    proot=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    nroot=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    cout<<"Roots Of Quadratic Equation Are: \n" <<proot<< "   OR   " <<nroot;
    return 0;
}