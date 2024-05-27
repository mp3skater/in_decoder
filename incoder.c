/*
 * Module: incoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <string.h>

const int p[4][5] = {{0,1,3,4,6},{0,2,3,5,6},{1,2,3,7},{4,5,6,7}}; // parity-calculation-table: pi | field

char getparity(int, char *);

int incode(char *orig_name, char *name)
{
  // Open file (reading)
  FILE *orig_text;
  orig_text = fopen(orig_name, "r");

  // Create file (writing)
  FILE *text;
  text = fopen(name, "w");

  // Error
  if(orig_text == NULL || text == NULL) {
    printf("--> Error while creating the file.");
    return 1;
  }

  // Buffer: 8 chars + null terminator
  char buf[9];

  // Read 8 chars at a time and insert 4 parity-bits
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    fprintf(text, "%c%c%c%c%c%c%c%c%c%c%c%c", getparity(0, buf), getparity(1, buf), buf[0], getparity(2, buf), buf[1], buf[2], buf[3], getparity(3, buf), buf[4], buf[5], buf[6], buf[7]);
  }

  // Very important: Close the files
  fclose(orig_text);
  fclose(text);

  return 0;
}

char getparity(int pi, char *buf)
{
  int i = 0;
  // If the parity the 2. or 3.
  for(int j = 0; j<(pi>=2? 4:5); j++) {
    i += buf[p[pi][j]];
  }

  // Return '0', if the parities for <pi> are even. Else '1'
  return i%2 +48;
}
