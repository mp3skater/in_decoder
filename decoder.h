
#ifndef __DECODER_H__
#define __DECODER_H__

/*
 * Checks if the file has any mistakes in it.
 *
 * Parameter:
 * 1: Name of the original file.
 * 2: Name of the new decoded file.
 *
 * Return:
 * Pointer to the incoded file, if then it returns NULL instead.
 */
FILE* decode(char*, char*);

#endif
