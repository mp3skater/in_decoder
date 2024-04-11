#ifndef __GENERATOR_H__
#define __GENERATOR_H__

/*
 * Generates a file with a certain filesize(8*n*sizeof(char)) with random 0(ASCII: 48) or 1(ASCII: 49)
 *
 * Parameter:
 * 1. Number of "bytes" of the file.
 * 2. Name of the file that will be generated in the current directory.
 *
 * Return:
 * 0: Opration successful.
 * 1: Error while creating the file.
 */
int fgen(int, char*);

#endif
