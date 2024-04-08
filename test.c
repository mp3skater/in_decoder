/*
 * Test-Module for the generator module.
 */

#include <stdio.h>
#include <string.h>

#include "generator.h"

#define LEN 7 // Name of the generated file

static const char * NAME1 = "test_generator.txt";
static const char * NAME2 = "test_incoder.txt";
static const char * NAME3 = "test_fehlerteufel.txt";
static const char * NAME4 = "test_decoder.txt";

/*
 * This test module generates the file using the generator.c module and prints it in the end to test the initial step of the program. 
 */
int main(void)
{
  // Generation
  fgen(LEN, NAME1);
  
  // Incoder
  incode(NAME1, NAME2);

  // Fehlerteufel


  // Decoder


  return 0;
}
