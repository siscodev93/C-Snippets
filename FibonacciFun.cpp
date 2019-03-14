#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
* Just the usual run of the mill interview response.
* Meh, It works.
*/
int print_fibonaccio_basic(int rounds)
{
	if(rounds > 47) 
	{

		printf("Woah there, I am a 32 bit program, I don't like numbers over 4,294,967,295\n");
		printf("fib( 48 ) = 4,807,526,976\n");
		return 0;
	}

	unsigned long long int fib = 0;
	unsigned long long int fib_last_prev = 0; //previous previous fibonacci number
	unsigned long long int fib_last = 1;      //previous fibonacci number

	for (int f = 0; f <= rounds; f++)
	{
		fib = (f == 0) ? 0 : (f <= 2) ? 1 : fib_last_prev + fib_last;
		fib_last_prev = fib_last;
		fib_last = fib;
		printf("seq: %d  fib: %llu\n", f, fib);
	}
	return fib;
}

/*
* Hm, This one prints out a fibonacci tree, Merry Fibonacci folks!
*/
int print_fibonaccio_tree(int rounds)
{
	printf("Not Implemented, Guess Who isn't getting any cool presents\n");
	return 0;
}

/*
* ...This one is top secret...
* I was taught go big or go home, and honestly, printing anything less then a fib (one-bazzillion) just doesn't sound 
* challenging or useful for anything since you can just google any other number. Granted...What am I going to do with a number that big?!
*/
void * fibonaccio_with_cia_underground_secret_stuff()
{
	return (void*)NULL; //The cia doesn't have any secret stuff silly!
}

int main()
{
	/*
	* Meh it works, unless you want to print the 48th fibonacci number in a 32 bit program and then well, good luck.
	* yeah, this can compile as 64 bit, and in the time I write this comment I can add a few lines to ensure that I can get the maximum value 
	* of fib( n ) but, I'd rather work with the cia to develop something that has no limits. Stay tuned folks.
	*/
	int end = 0;
	printf("The fibonacci is fib(n), please specify the number for n.\nn=");
	scanf_s("%d", &end);

	print_fibonaccio_basic(end);
	return 0;
}
