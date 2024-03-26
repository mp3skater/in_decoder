/*
 * Test-Module for the generator module.
 */

#include <stdio.h>
#include <string.h>

#include "generator.h"

#define LEN 7 // Name of the generated file

static const char * NAME = "test_generator.txt";
/*
 * This test module generates the file using the generator.c module and prints it in the end to test the initial step of the program. 
 */
int main(void)
{
  // Generation
  fgen(LEN, NAME);

  // Open file
  FILE * text;
  text = fopen(NAME, "r");
  
  // Print file
  //char c;
  //while((c=fgets(text, )) != EOF/*End Of File*/) {
  //  printf("%c", c);
  //}
}
