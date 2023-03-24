/*******************************************************************************
*
* Purpose: Square area calculator.  Outputs caculated square areas from 
* side length provided via standard input... outputs them with a unit 
* provided as 2nd argv values.  i.e. if we run with ""./square inches" expect 
* output of the format: 50 inches
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(int argc, char *argv[])
{

 char m[20];

  // if argument number is incorrect output this notice
  if (argc != 2) 
  {
    printf("Incorrect number of arguments provided.\n");
    return 0;
  }

  
  while ( scanf("%[^\n]%*c", &m)   != EOF) 
  {
    printf("%d %s\n", square_area(atoi(&m)),argv[1]);
  }

  return 0;
}
