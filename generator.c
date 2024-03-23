/*
 * Modul zur Überschreibung einer Datei mit zufälligen "1"en und "0"en
 * Autor: mp3skater
 * Lizenz: MIT-License
 * Changelog:
 * 	2024/03/18 --> mp3skater: Initial commit
 * 	2
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fgen(int n, char * path)
{
  FILE * text;
  text = fopen(path, "w");

  // Fehler
  if(text == NULL) {
    printf("Fehler beim lesen der Datei.");
    return 1;
  }

  srand(time(NULL));

  int k = 0;

  printf("here");

  while(k < 8*n) {
    // 0/1 || 50% each
    fprintf(text, "%c", 48+(rand()%2));
    k++;
  }
  
  fclose(text);

  printf("File has been generated correctly!");

  return 0;
}
