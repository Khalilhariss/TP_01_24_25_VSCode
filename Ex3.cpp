#include<iostream>
#include<cmath>
#include <string>
using namespace std;

void takePoint(const string& name, double & x, double & y)
{
   cout<<"Coordinates of " << name << endl;
   cout <<"x = ";
   cin>>x;
   cout <<"y = ";
   cin>>y;
}


int main()
{
    double xA, yA, xB, yB;
    takePoint("A",xA,yA);
    takePoint("B",xB,yB);
    cout << "AB= "<< sqrt(pow((xA-xB),2)+ pow((yA-yB),2));
    return 0;
}