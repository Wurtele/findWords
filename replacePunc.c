#include <string.h>

int replacePunc (char *line) {
  int count = 0;
  int i;
  int c;
  for (i=0; i<strlen(line); i++) {
    c = *(line+i);
    if ( (c>32 && c<48) || (c>57 && c<65) || (c>90 && c<97) || (c > 122 && c<256)) {
      *(line+i) = ' ';
      count = count + 1;
    }
  }
  return (count);

}
