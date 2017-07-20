#include<iostream>
using namespace std;

int main()
{
    int cas, line[10], i = 0;
    cin>>cas;
    for(int j=1; j<=cas; j++)
    {
        for(i=0; i<10; i++)
            cin>>line[i];

        if(j == 1)
            cout<<"Lumberjacks:"<<endl;
        if(line[0] < line[9])
        {
            for(i=0; i<9; i++)
                if(line[i] >= line[i+1])
                {
                    cout<<"Unordered"<<endl;
                    break;
                }

            if(i == 9)
                cout<<"Ordered"<<endl;
        }
        else
        {
            for(i=0; i<9; i++)
                if(line[i] <= line[i+1])
                {
                    cout<<"Unordered"<<endl;
                    break;
                }

            if(i == 9)
                cout<<"Ordered"<<endl;
        }
    }
    return 0;
}
