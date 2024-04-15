/*
 * Module: incoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <string.h>

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

  // Read 8 chars at a time and insert parity-bit
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    fprintf(text, "%s%s%s", buf, buf, buf);
  }

  // Very important: Close the files
  fclose(orig_text);
  fclose(text);

  return 0;
}
