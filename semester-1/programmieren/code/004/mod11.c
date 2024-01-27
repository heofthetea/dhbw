#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int numbers[32];
int multipliers[] = {2, 3, 4, 5, 6, 7};


/*
calculates a given number's checksum by the algorithm provided.
*/
int calculateCheckSum(int end) {
    int checkSum = 0;

    int j = 0; // iteration variable used to manually iterate over the multipliers array
    for(int i = end -1 ; i >= 0; i--) {
        checkSum += numbers[i] * multipliers[j++ % ((sizeof(multipliers)) / 4)]; // multiplies each element by it's corresponding multiplier
    }

    printf("\nsum = %d", checkSum);
    // THIS IS CRIMINAL
    // JUST USE REGULAR FUCKING MODULO INSTEAD IN YOUR STUPID ALGORITHM
    checkSum = 11 - (checkSum % 11); 
    printf("\nchecksum = %d\n", checkSum);

    return checkSum;
}



int main()
{
    char input[sizeof(numbers) + 1];

    printf("Enter your number: ");
    scanf("%s", &input); // extra elements of the char array are stored as binary zeroes
    int end = strlen(input); // stores where the end of the entered number is, in order to ignore the zeroes that will fill up the numbers array

    for (int i = 0; i < sizeof(numbers); i++) {
        numbers[i] = (input[i] < '0' || input[i] > '9') ? 0 : input[i] - '0'; // converts the entered digits from char to int. if a character is not a digit, a decimal zero will be used instead.
    }

    int checkSum = calculateCheckSum(end);

    numbers[end] = (checkSum < 10) ? checkSum : 0; //squishes checksum into range between 0 to 9, as per task

    // it's just output from here
    printf("\n number with checksum: ");
    for(int i = 0; i <= end; i++) printf("%d", numbers[i]);
    printf("\n");


    return 42;
}


