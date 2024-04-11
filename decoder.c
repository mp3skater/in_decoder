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

  // Buffer: 8 chars + parity bit + null terminator
  char buf[10];

  // Copy the non-redundant part of the file in the new one
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    // Calculate parity-bit
    int parity = (buf[0]+buf[1]+buf[2]+buf[3]+buf[4]+buf[5]+buf[6]+buf[7]-48*8) %2;

    // Oboardif the parity-bit signals a mistake
    if(parity != buf[8]) {
      printf("The file \"%s\" has a mistake!\n", orig_name);

      // Unlinking file
      //fclose(text);
      //unlink(text);

      return NULL;
    }
    fprintf(text, "%c%c%c%c%c%c%c%c", buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7]);
  }

  // Very important: close the files
  fclose(orig_text);
  fclose(text);

  return text;
}
