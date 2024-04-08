#ifndef __GENERATOR_H__
#define __GENERATOR_H__

/*
 * Generates a file with a certain filesize(8*n) with random 0(ASCII: 48) or 1(ASCII: 49)
 *
 * Parameter:
 * 1. Anzahl der Bytes an größe der Datei.
 * 2. Name der Datei die erstellt wird in der cwd.
 *
 * Return:
 * Pointer to the incoded file.
 */
FILE* fgen(int, char*);

#endif
