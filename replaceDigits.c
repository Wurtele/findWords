#include <string.h>

int replaceDigits ( char *line) {
  int count = 0;
  int i;
  int c;
  for (i=0; i<strlen(line); i++) {
    c = *(line+i);
    if ( c > 47 && c < 58) {
      *(line+i) = ' ';
      count = count + 1;
    }
  }
  return ( count );
}
