#ifndef __INCODER_H__
#define __INCODER_H__

/*
 * Creates a file where after every 8th-char there is a parity-bit.
 *
 * Parameter:
 * 1: Name of the original file.
 * 2: Name of the new incoded file.
 *
 * Return:
 * Pointer to the incoded file.
 */
FILE* incode(char*, char*);

#endif
