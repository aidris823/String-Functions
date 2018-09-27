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
  printf("StrChr demonstration: \n \n");
  char str[] = "Zimbabwe";
  char charizard = 'w';
  char charmander = 'Q';

  char* address = strchr(str,charizard);
  char* wrong_address = strchr(str,charmander);

  printf("Where is the first w in 'Zimbabwe'?: %s \n",address);
  printf("What is the address of the first w in 'Zimbabwe'?: %d \n",(int)&address);
  printf("There is no Q in 'Zimbabwe': %s \n \n",wrong_address);
  
  //Strstr
  char sentence[] = "Talos guide you.";
  char snippet[] = "s gui";
  
  char* snip_address = strstr(sentence,snippet);
  printf("Strstr demo: \n");
  printf("Location of 's gui' in %s: %s \n",sentence,snip_address);
  printf("Address in memory: %d \n",(int)&snip_address);
  

  return 0;
}
