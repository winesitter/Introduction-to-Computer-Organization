/*
 * echoChar1.c
 * Echoes a character entered by the user
 *
*/

#include <unistd.h>

int main(int argc, char* argv[])
{
  char aLetter;

  write(STDOUT_FILENO, "Enter one character: ", 21);  // promt user
  read(STDIN_FILENO, &aLetter, 1);                    // one character
  write(STDOUT_FILENO, "You entered: ", 13);          // message
  write(STDOUT_FILENO, &aLetter, 1);          
  return 0;
}
