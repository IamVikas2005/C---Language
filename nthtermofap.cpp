#include<iostream>
using namespace std;
int main()
{
    int a,n,d,term;
    cout<<"No Of Term: ";
    cin>> n;
    cout<<"Value Of 'a' : ";
    cin>>a;
    cout<<"Value Of 'd' : " ;
    cin>> d;

    term= a+ (n-1)*d;
    cout<<"The "<<n<< "th Term Of A.P. Series Is: "<< term;
    return 0;

}