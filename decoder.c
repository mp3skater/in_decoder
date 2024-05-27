/*
 * Module: decoder.c
 * Author: mp3skater
 * License: MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

const int p[4][5] = {{0,1,3,4,6},{0,2,3,5,6},{1,2,3,7},{4,5,6,7}}; // parity-calculation-table: pi | field

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

  // Buffer: 8 chars + 4 parity bit (still chars) + null terminator
  char buf[13];

  // Copy the non-redundant part of the file in the new one
  while(fgets(buf, sizeof(buf), orig_text) != NULL) {

    // To calculate the position of the error
    int error = 0;

    for(int pi = 0; pi<4; pi++) {
      // Maximal size of bits for parity calculation
      int fmax = 4;
      if(pi<2)
        fmax++;

      // Calculate the parity-bits and determine the position of the mistake
      for(int f = 0; f<fmax; f++)
        error += math.pow(2, pi) * ...(p[pi][f] + (p[pi][f]<4? 2 : p[pi][f]<8? 3 : 4));

      printfj´taentoehnao.. lel i'm tired lllol
    }

    // Every "bit" of the "byte"
    for(int i = 0; i<8; i++) {
      // All three versions of the bit
      if(buf[i]+buf[i+8]+buf[i+16]-144 > 1) // ~~~ I THINK CAN BE WRITTEN MORE EFFICIENTLY!!! RELOOK PLS
        // 
      	fprintf(text, "1");
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
