#include<iostream>
using namespace std;
int main()
{
    int perimeter,length,breadth;
    cout<<"Length: ";
    cin>> length;
    cout<<"Breadth: ";
    cin>> breadth;
    perimeter= 2* (length+breadth);
    cout<< "Perimeter Of Rectangle: "<< perimeter;
    return 0;

}