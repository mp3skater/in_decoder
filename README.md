<h1 align="center">
  In/Decoder
</h1>

> A simple binary in/decoder that uses the triple-modular-redundancy to check for errors and even correct them.

## Features

--> Info: This project is an interesting school-exercise which I really like for its interesting usage in the real world (signal transmission, eg. bluetooth) :)

**Added Features:**
- Random-binary-file-generator (the 0/1's are though accually written in ASCII 148/149)
- Incoder (prints a "byte"(or 8 chars) 3 times instead of, well once) [what is triple-modular-redundancy?](https://en.wikipedia.org/wiki/Triple_modular_redundancy)
- "Fehlerteufel" (inserts a given number of errors in the generated/incoded file)
- Decoder (returnes a pointer to the decoded file if no mistakes were found, otherwise NULL)

- Test programs for the intire process and check rule
- Makefile for all programs

**In Future:**
- Idk, I'd be already happy if it worked...

---

## How to use

To compile this program I'd recommend to use a linux distro with [gcc](https://www.gnu.org/software/gcc/), but you can also use [MinGW](https://www.mingw-w64.org/) for windows or an IDE like Vim/Emacs or VCS for Windows and MacOS.
The rules to compile the different Test-programs are in the makefile.

## License

This project is open source and licensed under the [MIT](/LICENSE) License.
