#include <iostream>
using namespace std;

int fatorial(int n)
{
	int r = 1;
	for(int i=2; i<=n; ++i)
		r*=i;
	return r;	
}

int fatorial_recurs(int n)
{
	return (n==0 ? 1 : n*fatorial_recurs(n-1));
}

int main(int argc, char** argv)
{
	int num;
	num = 4;
	cout << "Fatorial de 4: " << fatorial(num) << endl;
	cout << "Fatorial de 4: " << fatorial_recurs(num) << endl;
	return 0;
}