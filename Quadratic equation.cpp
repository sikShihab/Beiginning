#include<iostream>>
#include<math.h>
using namespace std;
int main()
{
    int x1, x2, a, b, c;

    cout<<"Enter 1st Number:"<<endl;
    cin>>a;
    cout<<"Enter 2nd Number:"<<endl;
    cin>>b;
    cout<<"Enter 3rd Number:"<<endl;
    cin>>c;
    x1=-b+pow((pow(b,2)-4*a*c),1/2.0)/(2*a);
    x2=-b-pow((pow(b,2)-4*a*c),1/2.0)/(2*a);

    /*x1=-b+sqrt(pow(b,2)-4*a*c)/(2*a);
    x2=-b-sqrt(pow(b,2)-4*a*c)/(2*a);*/

    cout<<"X1= "<<x1<<endl;
    cout<<"X2= "<<x2<<endl;

}
