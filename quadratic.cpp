#include <iostream>
#include <math.h>

float a=0,b=0,c=0,D=0,x1=0,x2=0,x0=0;

int main()
{
again:
	std::cout << "Please insert a for Quadratic function" << std::endl;
	std::cin >> a;

	if(std::cin.fail()) {
                std::cout << "First is not a number" << std::endl;
		return EXIT_FAILURE;
		
        }

       	std::cout << "Please insert b for Quadratic function" << std::endl;
	std::cin >> b;

	if(std::cin.fail()) {
                std::cout << "First is not a number" << std::endl;
                return EXIT_FAILURE;
        }

	std::cout << "Please insert c for Quadratic function" << std::endl;
	std::cin >> c;


	if(std::cin.fail()) {
                std::cout << "First is not a number" << std::endl;
                return EXIT_FAILURE;
        }

	D = (b*b -4*a*c);
	if(D!=0)
	{
		if(D > 0)
		{
			x1 = (((-b)+sqrt(D))/2*a);
			x2 = (((-b)-sqrt(D))/2*a);
			std::cout << "First solution is x1= " << x1 << std::endl;
			std::cout << "Second solution is x2= " << x2 << std::endl;
			return EXIT_SUCCESS;
		}
		else
			std::cout << "Your Discriminant is negative try another a,b,c" << std::endl;
		goto again;
	}
	else
		x0 = ((-b)/2*a);
		std::cout << "Your only solution is x0 =" << x0 << std::endl;
	
	return EXIT_SUCCESS; 
}

