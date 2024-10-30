#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a positive integer:";
    int n;
    cin>>n;
    for(int i=10; i>=0; --i)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;