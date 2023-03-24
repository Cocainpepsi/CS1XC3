/*******************************************************************************
*
* Purpose: Prints the maximum number of any number of int command-line 
* arguments that are provided.  So if this program is run with:
*   ./max 5 10 20 25 15
* then we can expect it to print 25.
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(int argc, char *argv[])
{

  int m = 0;

  // if argument number is incorrect output this notice
  if (argc < 2) 
  {
    printf("Incorrect number of arguments provided.\n");
    return 0;
  }
  
   if (argc == 2) 
  {
    printf("Max: %d\n",atoi(argv[1]));
    return 0;
  }
   
   int arr[argc-1];
   int c = 0;
   for(int i=1;i<argc;i++)
   {
      arr[c] = atoi(argv[i]);
      c++;
   }

  printf("%d\n", max(arr,argc));

  return 0;

}
