/*
 * Module: generator.c
 * Autor: mp3skater
 * Lizenz: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE *fgen(int n, char *name)
{
  FILE * text;
  text = fopen(name, "w");

  // Error
  if(text == NULL) {
    printf("Fehler beim lesen der Datei.");
    return NULL;
  }

  srand(time(NULL));

  int k = 0;

  while(k < 8*n) {
    // 0/1 || 50% each
    fprintf(text, "%c", 48+(rand()%2));
    k++;
  }
  
  fclose(text);

  return text;
}
