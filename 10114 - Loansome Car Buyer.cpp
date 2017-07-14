#include<iostream>
using namespace std;

int main()
{
    int loanDur, depRec;
    double dPayment, loan;

    while(cin>>loanDur, cin>>dPayment, cin>>loan, cin>>depRec)
    {
        if(loanDur < 0)
            return 0;

        int m;
        double per, monthlyPayment, carVal, carLoan, perRec[101];

        while(depRec--)
        {
            cin>>m>>per;
            for(int i=m; i<=100; i++)
                perRec[i] = per;
        }

        int now = 0;
        monthlyPayment = loan/loanDur;
        carVal = (loan + dPayment) * (1 - perRec[0]);

        while(carVal < loan)
        {
            now++;
            loan -= monthlyPayment;
            carVal = carVal * (1-perRec[now]);
        }

        cout<<now<<" month";
        if(now != 1)
            cout<<"s";

        cout<<endl;
    }
    return 0;
}
