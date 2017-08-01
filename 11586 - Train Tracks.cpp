#include<iostream>
using namespace std;

int main()
{
    int cas;
    cin>>cas;
    cin.ignore();
    while(cas--)
    {
        int counter1 = 0, counter2 = 0;

        string line;
        getline(cin, line);

        for(int i=0; i<line.length(); i++)
        {
            if(line[i] == 'M')
                counter1++;
            else if(line[i] == 'F')
                counter2++;

        }
        if(counter1 == 1 && counter2 == 1)
            cout<<"NO LOOP"<<endl;
        else if(counter1 == counter2 || counter1-1 == counter2 || counter2-1 == counter1)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
    return 0;
}
