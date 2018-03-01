# Bit flipping game
You start off with a 3x3 grid of random generated bits, 
By giving an argument for the row/column you can switch that entire row of bits/colums

example:

| | ROW A | ROW B | ROW C |
| :-: | :-: | :-: | :-: |
| ROW 0 | 1 | 0 | 0 |
| ROW 1 | 1 | 1 | 0 |
| ROW 2 | 1 | 0 | 0 |
| INPUT |     1     |
| ROW 0 | 1 | 0 | 0 |
| ROW 1 | 0 | 0 | 1 |
| ROW 2 | 1 | 0 | 0 |
| INPUT |     B     |
| ROW 0 | 1 | 1 | 0 |
| ROW 1 | 0 | 1 | 1 |
| ROW 2 | 1 | 1 | 0 |

Wikipedia for [Further info](https://en.wikipedia.org/wiki/Bit_flipping)

Rosetta code for [Further info](http://rosettacode.org/wiki/Flipping_bits_game)

Compiling on Linux/Windows/Mac OS X
  - g++ main.cpp
  - Paste the source into your favorite IDE
  - Use another preferred way of compilin
