#include <iostream>
using namespace std;

int main()
{
    int n;
    bool bornSup;
    bool bornInf;
    do{
    cout<<"Enter a positive positive integer and less than 70:";
    cin>>n;
    bornInf=n<=0;
    bornSup=n>=70;
    if(bornInf)
    {
        cout<<"Your number is less  or equal to 0!"<<endl;
    }
    if(bornSup)
    {
        cout<<"Your number is greater than or equal to 70!"<<endl;
    }
    }while(bornInf|| bornSup);
    for(int i=10; i>=0; --i)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}