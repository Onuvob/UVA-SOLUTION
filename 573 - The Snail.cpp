#include<iostream>
using namespace std;

int main()
{
    double H, U, D, F;

    while(cin>>H>>U>>D>>F)
    {
        if(H == 0)
            return 0;

        double climb = 0.0, fact;
        int day = 0;

        fact = (U*F)/100.0;

        while(1)
        {
            day++;

            if(U > 0)
                climb += U;

            U -= fact;

            if(climb > H)
                break;

            climb -= D;

            if(climb < 0)
                break;
        }

        if(climb > 0)
            cout<<"success on day "<<day<<endl;

        else
            cout<<"failure on day "<<day<<endl;
    }
    return 0;
}
