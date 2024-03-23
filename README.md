<h1 align="center">
  In/Decoder
</h1>

> A simple binary in/decoder that uses parity-bits to check for errors.

## Features

--> Info: This project is an interesting school-exercise which I really like for its interesting usage in the real world (signal transmission, eg. bluetooth) :)

**Added Features:**
- Random-binary-file-generator (the 0/1's are though accually written in ASCII 148/149)
- Incoder (inserts a parity-bit after every byte) [what is a parity-bit?](https://en.wikipedia.org/wiki/Parity_bit)
- "Fehlerteufel" (inserts a given number of errors in the generated/incoded file)
- Decoder (returnes a pointer to the decoded file if no mistakes were found, otherwise NULL)

- Test programs for every module and one for the intire process
- Makefile for all programs 

**In Future:**
- Idk, I'd be already happy if it worked...

---

## How to use

To compile this program I'd recommend to use a linux distro with [gcc](https://www.gnu.org/software/gcc/), but you can also use [MinGW](https://www.mingw-w64.org/) for windows or an IDE like Vim/Emacs or VCS for Windows and MacOS.
The rules to compile the different Test-programs are in the makefile.

## License

This project is open source and licensed under the [MIT](/LICENSE) License.
