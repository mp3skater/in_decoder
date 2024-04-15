/*
 * Module: decoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

FILE* decode(char* orig_name, char* name)
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
    return NULL;
  }

  // Buffer: 3 * 8 chars + null terminator
  char buf[25];

  // Copy the non-redundant part of the file in the new one
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    // Every "bit" of the "byte"
    for(int i = 0; i<8; i++) {
      // All three versions of the bit
      if(buf[i]+buf[i+8]+buf[i+16]-144 > 1) { // ~~~ I THINK CAN BE WRITTEN MORE EFFICIENTLY!!! RELOOK PLS
        // 2 or more ones
	fprintf(text, "1");
      }
      else {
        // 2 or more zeros
        fprintf(text, "0");
      }
    }
  }

  // Very important: close the files
  fclose(orig_text);
  fclose(text);

  return text;
}
