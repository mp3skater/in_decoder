/*
 * Module: decoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* decode(char* orig_name, char* name)
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

  while(fgets(buf, sizeof(buf), orig_text) != NULL) {
    int parity = (buf[0]+buf[1]+buf[2]+buf[3]+buf[4]+buf[5]+buf[6]+buf[7]-48*8) %2;
    if(parity != buf[8]) {
      printf("The file \"%s\" has a mistake!", orig_name);
      return NULL;
    }
    fprintf(text, "%c%c%c%c%c%c%c%c", buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7]);
  }

  return text;
}
