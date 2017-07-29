#include<iostream>
#include<cstdio>
using namespace std;

int getSum(int num, int sum = 0)
{
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    string name1, name2;

    while(getline(cin, name1))
    {
        getline(cin, name2);

        int sum1 = 0, l1 = name1.length();
        int sum2 = 0, l2 = name2.length();

        for(int i=0; i<l1; i++)
        {
            if(name1[i] >= 'a' && name1[i] <= 'z')
                sum1 += name1[i] - 'a'+1;

            else if(name1[i] >= 'A' && name1[i] <= 'Z')
                sum1 += name1[i] - 'A'+1;
        }

        for(int i=0; i<l2; i++)
        {
            if(name2[i] >= 'a' && name2[i] <= 'z')
                sum2 += name2[i] - 'a'+1;

            else if(name2[i] >= 'A' && name2[i] <= 'Z')
                sum2 += name2[i] - 'A'+1;
        }

        while(sum1 > 9)
            sum1 = getSum(sum1);

        while(sum2 > 9)
            sum2 = getSum(sum2);

        double result;

        if(sum1 > sum2)
            result = sum2*100.0/sum1;
        else
            result = sum1*100.0/sum2;

        printf("%.2lf %%\n",result);
    }
    return 0;
}
