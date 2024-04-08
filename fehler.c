/*
 * Module: fehler.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE* fehl(int count, char* orig_name, char* name)
{
  FILE* orig_text;
  orig_text = fopen(orig_name, "r");
  FILE *text;
  text = fopen(name, "w");

  // Error
  if(orig_text == NULL || text == NULL) {
    printf("Fehler beim lesen der Datei.");
    return NULL;
  }

  // Buffer: 8 chars + parity bit + null terminator
  char buf[10];

  // Random variable
  srand(time(NULL));

  // Error counter
  int errs = 0;
  printf("here");

  // Inserts <count> errors
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
  printf("heretoo");
    if(errs < count)
	    buf[rand()%8] ^= 1; // turn 1 into 0 and 0 into 1 in a random place somehow
    fprintf(text, "%s", buf);
    errs++;
  }

  return text;
}
