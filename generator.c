/*
 * Module: generator.c
 * Autor: mp3skater
 * Lizenz: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fgen(int n, char *name)
{
  // Create file (writing)
  FILE* text;
  text = fopen(name, "w");

  // Error
  if(text == NULL) {
    printf("--> Error while creating the file.");
    return 1;
  }

  // Random init
  srand(time(NULL));

  int k = 0;
  while(k < 8*n) {
    // 0/1 || 50% each
    fprintf(text, "%c", 48+(rand()%2));
    k++;
  }
  
  // Very important: Close the file
  fclose(text);

  return 0;
}
