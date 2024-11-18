/******************
Name: Yaniv Daskal
ID: 212412258
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  int number, position, bit;
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  bit = (number >> position) & 1;
  printf("The bit in position %d of the number %d is %d\n", position, number,  bit);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  number = number | (1 << position);
  printf("Number with bit %d set to 1: %d\n", position, number);
  number = number & (~(1 << position));
  printf("Number with bit %d set to 0: %d\n", position, number);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  number = number ^ (1 << position);
  printf("Number with bit %d toggled: %d\n", position, number);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  bit = (number + 1) & 1;
  printf("%d\n", bit);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int number1, number2, sum;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &number1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &number2);
  sum = number1 + number2;
  printf("The sum in hexadecimal: %X\n", sum);

  printf("The 3,5,7,11 bits are: ");
  // 3
  bit = (sum >> 3) & 1;
  printf("%d", bit);
  //5
  bit = (sum >> 5) & 1;
  printf("%d", bit);
  // 7
  bit = (sum >> 7) & 1;
  printf("%d", bit);
  // 11
  bit = (sum >> 11) & 1;
  printf("%d\n", bit);
  printf("Bye!\n");
  
  return 0;
}
