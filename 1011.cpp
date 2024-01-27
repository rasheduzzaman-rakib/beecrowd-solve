#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int R;
    cin>>R;
    double a=3.14159;
    double result=(4.0/3*a*R*R*R);
    cout<<fixed;
    cout<<setprecision(3)<<"VOLUME = "<<result<<endl;
}