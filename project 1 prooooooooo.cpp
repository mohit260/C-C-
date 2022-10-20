#include<iostream>
int main()
{
	
	int x;
	float fx;
	for (x = -10 ; x <= 10 ; x = x + 2)
	{
		fx = (x * x + 1.5 * x + 5) / (x - 3) ;
	std::cout << "For x =" << x << "\t f(x) is" << fx << "\n" ;
	
	}
	return 0 ;
}
