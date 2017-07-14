#include<iostream>
using namespace std;

int main()
{
    int cas, count = 1;
    string word;

    while(1)
    {
        cin>>word;
        if(word == "*")
            return 0;

        cout<<"Case "<<count;
        count++;

        if(word == "Hajj")
            cout<<": Hajj-e-Akbar"<<endl;
        else if(word == "Umrah")
            cout<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
