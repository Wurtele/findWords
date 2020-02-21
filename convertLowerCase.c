#include <string.h>

int convertLowerCase( char *line) {
  int count = 0;
  int i;
  int c;
  for (i=0; i<strlen(line); i++) {
    c = *(line+i);
    if ( c > 64 && c < 91 ) {
      c = c + 32;
      count = count + 1;
    }
    *(line+i) = c;
  }
  return (count);
}
