/* 
 * echoDecHex.c
 * Asks user to enter a number in decimal and hexdecimal
 * then echoes both in both bases
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
  int x;
  unsigned int y;

  while(1)
  {
    printf("Enter a decimal integer (0 to quit): ");
    scanf("%i", &x);
    if (x==0) 
      break;
    printf("%i is stored as %#010x\n", x, x);
    //printf("Size of %i: %d\n", x, sizeof(x));
    
    printf("Enter a hexadecimal integer (0 to quit): ");
    scanf("%x", &y);
    if (x==0) 
      break;
    printf("%#010x represents the decimal integer %i\n", y, y);
  }

  return 0;
}
