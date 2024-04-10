/*
 * Test-Module for the generator module.
 */

#include <stdio.h>
#include <string.h>

#include "generator.h"
#include "incoder.h"
#include "fehler.h"
#include "decoder.h"

#define LEN 7 // Name of the generated file

static char* NAME1 = "test_generator.txt";
static char* NAME2 = "test_incoder.txt";
static char* NAME3 = "test_fehler.txt";
static char* NAME4 = "test_decoder.txt";

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
  fehl(3, NAME2, NAME3);

  // Decoder
  decode(NAME3, NAME4);

  return 0;
}
