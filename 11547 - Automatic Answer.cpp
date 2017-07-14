#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int cas, num;

    cin>>cas;

    for(int i=1; i<=cas; i++)
    {
        cin>>num;

        num = (((((num * 567) / 9) + 7492) * 235)/47) - 498;
        num = (num / 10)%10;

        cout<<abs(num)<<endl;
    }

    return 0;
}
