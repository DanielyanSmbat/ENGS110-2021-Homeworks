#include <stdio.h>




void print_binary(int x)
{	
	int i,bin=0;
	printf("The binary representation of %d is: ",x );
	for(i=31;i>=0;i--)
	{
		bin = x>>i;
		if(bin & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}



int main()
{
	int x=0;

	printf("Hello dear friend, Please insert your age: ");
	scanf("%d",&x);
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

print_binary(x);

return 0;
}
