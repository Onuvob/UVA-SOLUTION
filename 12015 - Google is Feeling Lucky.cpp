#include<iostream>
using namespace std;

int main()
{
    int cas, rev[10], max;
    string line[10];
    cin>>cas;

    for(int c=1; c<=cas; c++)
    {
        cin>>line[0]>>rev[0];
        max = rev[0];
        for(int i=1; i<10; i++)
        {
            cin>>line[i]>>rev[i];
            if(max < rev[i])
                max = rev[i];
        }
        cout<<"Case #"<<c<<":"<<endl;
        for(int i=0; i<10; i++)
            if(rev[i] == max)
                cout<<line[i]<<endl;
    }
    return 0;
}
