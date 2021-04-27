#include <stdio.h>



int calc_fibo(int x) 
{
	if(x == 0)
	{
		printf("Insert a valid number \n");
	}	
	else 
	{
		int temp,sum = 0;
		int fib1,fib2 = 1;
	
		while(fib2 < x)
	
		{
			temp = fib1;
			fib1 = fib2;
		      	fib2 += temp;
			sum += fib1;
		}
		printf("The sum of the Fibonacci numbers less than %d is : %d \n",x, sum);
		
	
	}

	return 0;
}

void print_binary(int x)
{
	int i=0;
	printf("The binary representation of %d is: ",x );
	while(x>0)
	{
		i = x%2;
		x /= 2;
		printf("%d",i);
		
	}

}

int main()
{
	int x=35;

	//printf("Hello dear friend, Please insert your age: ");
	//scanf("%d",&x);
	calc_fibo(x);
	print_binary(x);

	return 0;
}
