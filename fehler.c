/*
 * Module: fehler.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fehl(int count, char* orig_name, char* name)
{
  // Open file (reading)
  FILE* orig_text;
  orig_text = fopen(orig_name, "r");

  // Create file (writing)
  FILE *text;
  text = fopen(name, "w");

  // Error
  if(orig_text == NULL || text == NULL) {
    printf("--> Error while creating/reading a file.");
    return 1;
  }

  // Buffer: 8 chars + 4 parity-bits + null terminator
  char buf[13];

  // Random init
  srand(time(NULL));

  // Inserts <count> errors
  int errs = 0;
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    if(errs < count)
    	buf[rand()%8] ^= 1; // turn 1 into 0 and 0 into 1 in a random place somehow
    fprintf(text, "%s", buf);
    errs++;
  }

  // Very important: Close the files
  fclose(orig_text);
  fclose(text);

  return 0;
}
