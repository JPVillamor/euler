#include "euler.h"
#include <stdio.h>
#include <string.h>

unsigned int test_multiples_of_3_or_5(unsigned int limit)
{
	unsigned int sum = 0;
	
	for (unsigned int i = 1; i < limit; i++)
	{
		if (is_multiple_of_3_or_5(i))
		{
			sum += i;
		}
	}
	
	return sum;
}

void test_even_fibonacci (unsigned int limit)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int temp;
	unsigned int sum_of_even_fibonacci_numbers = 0;
	
	//printf("%d\n", a);
	
	while (1)
	{
		if (b >= limit)
		{
			break;
		}
		
		if (b % 2 == 0)
		{
			sum_of_even_fibonacci_numbers += b;
		}
		
		//printf("%d\n", b);
		
		temp = b;
		b = a + b;
		a = temp;
	}
	
	printf("%u\n", sum_of_even_fibonacci_numbers);
}

void test_largest_prime_factor()
{
	printf("%llu\n", get_largest_prime_factor(8));
}

void test_largest_palindrome_product()
{
	int upper_bound = 999;
	int lower_bound = 99;
	char buffer[16];
	int largest_product = 0;
	
	for (int i = upper_bound; i > lower_bound; i--)
	{	
		for (int j = upper_bound; j > lower_bound; j--)
		{
			int product = i * j;
			sprintf(buffer, "%d", product);
			
			if (is_palindrome(buffer, (unsigned int)strlen(buffer)))
			{
				if (product > largest_product)
				{
					largest_product = product;
				}
				
				break;
			}
		}
	}
	
	printf("%d\n", largest_product);
}

void test_smallest_multiple()
{
	int limit = 20;
	int final_product = 1;
	
	for (int i = 2; i <= limit; i++)
	{
		int temp_product = 1;
		
		if (!is_prime(i))
		{
			continue;
		}
		
		while (temp_product * i <= limit)
		{
			temp_product *= i;
		}
		
		final_product *= temp_product;
	}
	
	printf("%d\n", final_product);
}
