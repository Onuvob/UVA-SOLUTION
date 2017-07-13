#include<iostream>
using namespace std;

int main()
{
    int cas, row, column, Sbeam;
    cin>>cas;
    for(int i=1; i<=cas; i++)
    {
        cin>>row>>column;

        Sbeam = (row/3) * (column/3);

        cout<<Sbeam<<endl;
    }

    return 0;
}
