#include <iostream>
using namespace std;

 int takeInteger(int intInf, int intSup)
    {
        int n;
        bool bornSup;
        bool bornInf;
        do{
              cout<<"Enter an integer greater than "<< intInf <<"and less than " << intSup;
              cin>>n;
              bornSup=n>=70;
              bornInf=n<=0;
              if(bornInf)
              {
                cout<<"Your number is less than or equal to"<< intInf <<endl;
              }
              if(bornSup)
              {
                cout<<"Your number is greater than or equal to"<< intSup <<endl;
              }
        }while (bornInf || bornSup);
        return n;
     }
int main()
{
    int n;
    n=takeInteger(0,70);
    int bornSupTable=takeInteger(8,30);
    int bornInfTable=takeInteger(0,8);
    for(int i=bornSupTable; i>=bornInfTable; --i)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}