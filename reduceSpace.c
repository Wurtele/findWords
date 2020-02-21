#include <string.h>

#define OUT 0
#define IN 1


int reduceSpace ( char *line ) {
  int count = 0;
  int i;
  int j = 0;
  int state = 0;
  char newLine[500];

  for (i=0; i<strlen(line); i++) {
    if ( *(line+i)!=' ') {
      newLine[j++] = *(line+i);
      state = IN;
    } else if (state==IN){
      newLine[j++] = ' ';
      state = OUT;
    } else {
      count = count + 1;
    }
  }
  newLine[i]='\0';

  for (i=0; i<strlen(newLine); i++) {
    *(line+i) = newLine[i];
  }
  *(line+i)='\0';

  return ( count );
  }
