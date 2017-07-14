#include<iostream>
using namespace std;

int main()
{
    int cas, test;
    cin>>cas;
    while(cas--)
    {
        cin>>test;
        double size, numAnimals, envFrnd;
        long long int sum = 0;

        while(test--)
        {
            cin>>size>>numAnimals>>envFrnd;

            sum += size * envFrnd;
        }

        cout<<sum<<endl;
    }
    return 0;
}
