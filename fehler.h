#ifndef __FEHLER_H__
#define __FEHLER_H__

/*
 * Inserts <count> errors in the given file. Attention, if file has less then <count>*8 chars all errors may not be inserted.
 *
 * Parameter:
 * 1: count of errors.
 * 2: original incoded file name.
 * 3: new file name.
 *
 * Return:
 * 0: Operation successful.
 * 1: Error while creating/reading a file.
 */
int fehl(int, char*, char*);

#endif
