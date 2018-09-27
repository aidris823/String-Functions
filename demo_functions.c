#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  
  //Functions: strchr and strstr

  //Strchr
  /* Strchr: Searches for 1st appearance of unsigned char c in string 
pointed to by argument str.
    Returns: char pointer
    Params: C string to be scanned and the character to search for.
  */

  char str[] = "Zimbabwe";
  char charizard = 'w';
  char charmander = 'Q';

  char* address = strchr(str,charizard);
  char* wrong_address = strchr(str,charmander);

  printf("Address of the first w in Zimbabwe: %s \n",address);
  printf("Is there a Q in Zimbabwe?: %s \n",wrong_address);
  return 0;
}
