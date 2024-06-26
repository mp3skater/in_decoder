#ifndef __INCODER_H__
#define __INCODER_H__

/*
 * Creates a file where after every 8th char there gets inserted a parity-bit.
 *
 * Parameter:
 * 1: Name of the original file.
 * 2: Name of the new incoded file.
 *
 * Return:
 * 0: Operation successful.
 * 1: Error while reading/creating a file.
 */
int incode(char*, char*);

#endif
