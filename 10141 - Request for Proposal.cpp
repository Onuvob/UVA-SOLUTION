#include<iostream>
using namespace std;

int main()
{
    int n, p, counter=0;
    string x;

    while(cin>>n>>p, n||p)
    {
        counter++;
        while(n--)
        {
            cin.ignore();
            getline(cin, x);
        }

        double d, price;
        int req, max = -1;
        string name;

        while(p--)
        {
            getline(cin, x);
            cin>>d>>req;

            cin.ignore();

            if(max < req)
            {
                name = x;
                max = req;
                price = d;
            }
            else if(req == max && price > d)
            {
                price = d;
                name = x;
            }

            while(req--)
                getline(cin, x);

        }
        if(counter > 1)
            cout<<endl;
        cout<<"RFP #"<<counter<<endl;
        cout<<name<<endl;
    }

    return 0;
}
