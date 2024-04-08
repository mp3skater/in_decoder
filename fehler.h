#ifndef __FEHLER_H__
#define __FEHLER_H__

/*
 * Inserts <count> errors in the given file. Attention, if file has less then <count>*9 chars all errors may not be inserted.
 *
 * Parameter:
 * 1: count of errors
 * 2: original incoded file name
 * 3: new file name
 *
 * Return:
 * Pointer to the generated file.
 */
FILE* fehl(int, char*, char*);

#endif
