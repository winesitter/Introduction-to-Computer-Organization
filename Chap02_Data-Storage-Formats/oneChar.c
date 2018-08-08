/*
 * oneChar.c
 * Writes a single character on the screen
 *
*/

#include <unistd.h>

int main(int argc, char* argv[])
{
  char aLetter = 'A';
  char aString[3] = "AB\n";
  write(STDOUT_FILENO, &aLetter, 1);  // STDOUT_FILENO is 
                                      // defined in unistd.h
                                      //
  write(STDOUT_FILENO, &aString, 3);
  
  return 0;

}
