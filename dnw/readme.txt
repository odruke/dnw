Known bugs:

1 scanf bug
	When prompting a not lowercase letter at first position, there is something remaining in the buffer that leads you to press enter twice to actually get the word to be checked. A whole refactor for a totally custom scanf function may will be required.

2 repeated guessed letters
	When the word to guess has a repeated letter, if you missplace one of both, the help message will ignore it and won't display it.

3 missplaced letters unknown behaviour
	When there are repeated missplaced letters, the message bevahiour is unclear, it can skip the message, or make multiples at a time after where it should be.
