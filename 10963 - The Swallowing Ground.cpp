#include <cstdio>
#include<iostream>
using namespace std;

int main() {
	int cas, Column, Y1, Y2;

	cin>>cas;
	while (cas--)
    {
		cin>>Column;

		bool yes = true;

		cin>>Y1>>Y2;

		int diff = Y1 - Y2;

		for(int i=1; i<Column; i++)
        {
			cin>>Y1>>Y2;;
			if (diff != Y1 - Y2)
				yes = false;
		}

		if (yes)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

		if (cas)
			cout<<endl;
	}
	return 0;
}
