#include <string.h>
int chop ( char *line) {
  if (*(line + strlen(line) -1) == '\n') {
    *(line + strlen(line) -1) = '\0';
    return (0);
  } else {
    return (-1);
  }
}
