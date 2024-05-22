# DEFINETELY NOT WORDLE

**DEFINITELY NOT WORDLE** is a simple word-guessing terminal game inspired by the popular 'Wordle' game. It was created to practice logic and programming concepts in C.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Contributing](#contributing)
- [Known Bugs](#known-bugs)

## Getting Started

This program randomly selects a word from a database and challenges the user to guess it in five attempts. The program provides feedback to the user, indicating whether the entered word is correct and if any of the guessed letters match the target word. It also indicates if the guessed letters are in the correct position or misplaced. Instructions are provided in English, Spanish, and French.

Written in C, this project was created to practice core programming logic and implement multilingual features to practice file reading and working with structures. While there may be more functional approaches to solving this problem, the primary objective was to practice specific programming skills and target objectives. The code and files adhere to good practices, and the project uses Make for build automation.

### Prerequisites

The game is designed to work on Unix-like systems (Mac/Linux). The only requirements are a terminal environment that supports C language (as in most installations) and the basic libraries. The necessary libraries are as follows:

- `<stdio.h>`
- `<stdlib.h>`
- `<string.h>`
- `<time.h>`

Everything else needed for the program to work is already included in the project.

### Installation

This program must be executed in a terminal and uses Make for compilation. Make is a build automation tool that streamlines the compilation and linking of source code files to create executable programs or libraries. It uses a Makefile to determine which files need to be recompiled, reducing unnecessary work.

1. After downloading the project files, navigate to the parent directory of the project.
2. To create the executable file, run the following command:

`make play`
(This prepares the program for use)

4. To recompile the program, use the following command:

`make re`

6. To remove the executable and object files, execute:

`make fclean`


## Usage

In Linux and macOS environments, open a terminal and run the following command to execute the program:

`./play`

Follow the instructions provided by the program to play the game. Once you have finished the game (either guessing the word or exhausting all attempts), the program will terminate itself. You can replay the game by entering `./play` again. The program does not retain information between executions.

## Contributing

If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (e.g., `feature/your-feature`).
3. Make your changes and commit them using a clear description (e.g., `git commit -m 'Description of your changes'`).
4. Push your changes to the branch with `git push origin feature/your-feature`.
5. Open a pull request.

## Known Bugs

1. **`scanf` Bug:** If a non-lowercase letter is entered as the first character, there is a buffer issue that requires pressing Enter twice to check the word. A potential solution would be to refactor the `scanf` function.

2. **Repeated Guessed Letters:** When the word to guess contains repeated letters, mismatches with one of the repeated letters can cause the help message to be ignored and not displayed.

3. **Misplaced Letters Behavior:** When there are repeated misplaced letters, the behavior of the program is unclear. It may skip the message or produce multiple messages beyond where they should appear.

Feel free to report any new bugs or contribute to improving the program.
