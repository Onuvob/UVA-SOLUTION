#include<iostream>
using namespace std;

int getNum(long long int num)
{
    int sum = 0;
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    long long int num;

    while(cin>>num)
    {
        if(num == 0)
            return 0;

        while(num > 9)
        {
            num = getNum(num);
        }

        cout<<num<<endl;
    }

    return 0;
}
