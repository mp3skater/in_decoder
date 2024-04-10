/*
 * Module: incoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <string.h>

FILE* incode(char *orig_name, char *name)
{
  FILE *orig_text;
  orig_text = fopen(orig_name, "r");
  FILE *text;
  text = fopen(name, "w");

  // Error
  if(orig_text == NULL || text == NULL) {
    printf("Fehler beim lesen der Datei.");
    return NULL;
  }

  // Buffer: 8 chars + null terminator
  char buf[9];

  // Read 8 chars at a time
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    int parity = (buf[0]+buf[1]+buf[2]+buf[3]+buf[4]+buf[5]+buf[6]+buf[7]-48*8) %2; 
    fprintf(text, "%s%c", buf, 48+parity);
  }

  return text;
}
