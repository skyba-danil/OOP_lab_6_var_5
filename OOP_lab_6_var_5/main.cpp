#include <iostream>
#include "ListT.hpp"

using namespace std;

int main()
{
	List<char> l_1;
	for (int i = 'A'; i <= 'Z'; i++)
	{
		l_1.Add_end(i);
	}
	cout << l_1 << endl;
	l_1.reversList();
	cout << l_1 << endl << endl;
	l_1.deleteAll();
	List<int> l_2;
	for (int i = 0; i < 10;i++)
	{
		l_2.Add_end(i);
	}
	cout << l_2 << endl;
	l_2.reversList();
	cout << l_2 << endl << endl;
	l_2.deleteAll();
	List<double> l_3;
	double n = -1;
	for (int i = 0; i < 10; i++)
	{
		l_3.Add_end(n);
		n += 0.1;
	}
	cout << l_3 << endl;
	l_3.reversList();
	cout << l_3;
}