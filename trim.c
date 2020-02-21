#include <string.h>

int trim ( char *line ) {
  int i;
  int length = strlen(line);
  for (i=0; i<length; i++) {
    if ( *(line+i)==' ' ) {
      *(line+i)='\0';
    } else {
      i=length;
    }
  }
  length = strlen(line);
  for (i=length; i>-1; i--) {
    if ( *(line+i)==' ' ) {
      *(line+i)='\0';
    } else {
      i=-1;
    }
  }
  return (0);
}
