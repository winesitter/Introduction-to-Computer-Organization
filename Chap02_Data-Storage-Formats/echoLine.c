/*
 * echoLine.c
 *
 *
*/

#include <unistd.h>
#include <stdio.h>

#define MAX_LETTERS 5

/*-------------------------------------------------------
 | 
 *-----------------------------------------------------*/
int writeStr(char *inputAddress );
int readLn(char* line, int maxChars);



/*-------------------------------------------------------
 | writeStr Function
 *-----------------------------------------------------*/
int writeStr(char *inputAddress )
{
  int nChars = 0;
  while(*inputAddress != '\0')
  {
    write(STDOUT_FILENO, inputAddress, 1);
    nChars++;
    inputAddress++;
  }
  return nChars;
}


/*-------------------------------------------------------
 | readLn Function
 *-----------------------------------------------------*/
int readLn(char *line, int maxChars)
{
  int count = 0;
  maxChars--;
  read(STDIN_FILENO, line, 1);

  while(*line != '\n')
  {
    if (count < maxChars)
    {
      count++;
      line++;
    }
    read(STDIN_FILENO, line, 1);
  }

  return count;
}


/*-------------------------------------------------------
 * MAIN FUNCTION
 *-----------------------------------------------------*/
int main(int argc, char* argv[])
{
  char input[MAX_LETTERS];
  writeStr("Write something to line: ");
  readLn(&input[0], MAX_LETTERS);
  writeStr("\nYou entered: ");
  writeStr(&input[0]);

  return 0;
}
