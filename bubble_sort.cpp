#include <iostream>
using namespace std;

void sort_bubble(int t, int *a)
{
	int aux;
	for(int i=t-1; i>0; --i)
	{
		for(int j=0; j<i; ++j)
		{
			cout << "[" << j << "]: " << a[j] <<
                        ", [" << j+1 << "]:" << a[j+1];
			if(a[j] > a[j+1])
			{
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
				cout << " - TROCOU!!!";
			}
			cout << endl;
		}
		cout << "---------------" << endl;
	}
}

void print(int t, int *a)
{
	for(int i=0; i<t; ++i)
	{
		cout << "Elemento " << i << " = " << a[i] << endl;
	}
	cout << "----------------" << endl;	
}

int main(int argc, char** argv)
{
	int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	print(8, v);
	sort_bubble(8, v);
	print(8, v);
	
	return 0;
}