#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int main ( int argc, char *argv[]) {
  char line[MAXSIZE];
  char previous[MAXSIZE]="";
  int c = 0;
  int repeats = 1;
  strcpy( previous, line );

  while ( fgets ( line, MAXSIZE, stdin ) != NULL ) {
    if ( strcmp(line, previous ) == 0) {
      repeats = repeats + 1;
    } else {
      if ( c!=0) {
        printf ( "%03d %s" , repeats, previous);
      }
      c++;
      repeats = 1;
    }
    strcpy ( previous, line );
  }
  printf ( "%03d %s" , repeats, previous);
  return(0);
}
