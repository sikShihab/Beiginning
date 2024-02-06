#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //binary operator
    int a, b, sum, sub, mul;
    a=30;
    b=20;
    /*cout<<"Enter the 1st Number :";
    cin>>a;
    cout<<"Enter the 2nd Number :";
    cin>>b;*/
    sum=a+b;
    sub=a-b;
    mul=a*b;
    cout<<"Addition: "<<sum<<endl;
    cout<<"Substraction: "<<sub<<endl;
    cout<<"Multiplicaton: "<<mul<<endl;

    cout<<"Integer Divison: "<<10/3<<endl;
    cout<<"Real Divison: "<<10.0/3<<endl;
    cout<<"Real Divison: "<<10/3.0<<endl;
    cout<<"Real Divison: "<<10.0/3.0<<endl;
    cout<<"Modulus: "<<10%3<<endl;

    //unary operator

    sum=-sum;
    cout<<"Sign change: "<<sum<<endl;

    cout<<"Square calculation: "<<pow(5,2)<<endl;
    cout<<"Cube calculation: "<<pow(5,3)<<endl;
    cout<<"Any calculation: "<<pow(4,7)<<endl;

    cout<<"Square root calculation: "<<pow(25,1/2.0)<<endl;
    cout<<"Square root calculation: "<<sqrt(25)<<endl;        //Alter rule (Only for square root)
    cout<<"Cube root calculation: "<<pow(25,1/3.0)<<endl;
    cout<<"Any root calculation: "<<pow(25,1/8.0)<<endl;
    return 0;
}
