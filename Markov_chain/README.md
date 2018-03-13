# Markov chain
We link words together and make a sequence out of those using probabillity factor
We have a prefix and get a suffix from this, then the prefix becomes that suffic and we do it again.

Example:
`am i i or am i you` creates:

| Prefix | Suffix     | 
|  :-:   |   :-:      |
|   am   | i, i, i    |
|    i   | i, or, you | 
|   or   |     am     |
|   you  |     am     |

This can create a sequence like :

` am i or am i you am i or am i `

Wikipedia for [Further info](https://en.wikipedia.org/wiki/Markov_chain)

Rosetta code for [Further info](https://rosettacode.org/wiki/Markov_chain_text_generator)
