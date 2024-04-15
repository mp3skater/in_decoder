
#ifndef __DECODER_H__
#define __DECODER_H__

/*
 * Checks if the file has any mistakes in it and returns the original file if no multiple errors where placed on the same spot (unlikely in the real world).
 *
 * Parameter:
 * 1: Name of the original file.
 * 2: Name of the new decoded file.
 *
 * Return:
 * Pointer to the incoded file, with the errors corrected.
 */
FILE* decode(char*, char*);

#endif
