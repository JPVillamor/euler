/*
 * is_multiple_of_3_or_5
 * returns a char value of 1 if true, else 0
 */
char is_multiple_of_3_or_5(unsigned int number)
{
	if (number % 3 == 0 || number % 5 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
 * is_prime
 * returns char value of 1 if input integer is prime, else 0
 */ 
char is_prime(unsigned long long input_number)
{
	if ((input_number % 2 == 0 && input_number != 2) || input_number <= 0)
	{
		return 0;
	}
	
	switch(input_number)
	{
		case 1:
			return 0;
		case 2:
			return 1;
	}
	
	for (unsigned long long i = 3; i < input_number; i+=2)
	{
		if (input_number % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

/* get_largest_prime_factor
 * 
 */
unsigned long long get_largest_prime_factor(unsigned long long input)
{
	unsigned long long input_number_copy = input;
	unsigned long long divisor = 2;
	
	while (1)
	{		
		if (is_prime(divisor))
		{
			while (input_number_copy % divisor == 0)
			{
				// printf("%llu\n", divisor);
				input_number_copy /= divisor;
			}
			
			if (input_number_copy == 1)
			{
				return divisor;
			}
		}
		
		divisor++;
	}
	
	return 0;
}

/* is_palindrome
 * takes in string and length and returns whether string 
 * reads forward and backward.
 */
char is_palindrome(char buffer[], unsigned int length)
{
	unsigned int last_index = length - 1;
	
	for (unsigned int i = 0; i < length; i++)
	{
		if (buffer[i] != buffer[last_index - i])
		{
			return 0;
		}
	}
	
	return 1;
}
