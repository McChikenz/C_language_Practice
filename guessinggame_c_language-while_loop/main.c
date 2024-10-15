#include <stdio.h>

int main()
{

	/**
	 * Guessing game
	 * 
	 * */

	int userIn = 0;
	const int secretNum = 98;

	//  printf("guess my number: ");
	//  scanf("%d", &userIn);

	//  while(userIn != secretNum) { // to guess  infinitly

	//  printf("guess my number: ");
	//  scanf("%d", &userIn);

	//  }

	//   printf(" you guess my number %d", secretNum);
	//gues a number with a limit;
	const int guessLimit = 3;  		// make constants YEEEEEE
	int guestCount = 0;
	// int outOfGuesses = 0; 		// dis problem may not need such flags

	//while(userIn != secretNum && outOfGuesses ==0) { // to guess  infinitly
	while(userIn != secretNum){
		printf("guess my number: ");
		scanf("%d", &userIn);
		guestCount++;

		if(guestCount == guessLimit) 	// once guestCount reached 3 times, byebye
			break;
	}

	if(userIn == secretNum)
		printf("You win\n");
	else
		printf("out of gueses\n");



	printf("Hello World\n");

	return 0;
}
