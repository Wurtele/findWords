Owen Wurtele
Assignment 2  - CIS1300

Compile using Makefile
make all
make findWords
make wordbag

findWords
  Reads in textfile and prints list of words in order they appear.
  Only prints words longer than 5 letters
  findWords.c written by Professor Deb Stacey
  functions written by Owen Wurtele
<textfile> | ./findWords

wordbag
  Reads sorted list of words and prints count and words
  Written by Owen Wurtele
<textfile> | ./findWords | sort | ./wordBag
