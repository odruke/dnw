DEFINETELY NOT WORDLE
A litte word guessing terminal game i'd made to practice logic and some other programing concepts in c, inspired in the popular 'Wordle' game.

Table of Contents

Getting Started

Prerequisites
Installation
Usage
Contributing



Getting Started
This little program is a game that takes a random word from a database, and it prompts for the user to guess it, in 5 oportunities. The program will tell the user if the word he entered was either correct, or has any letter matching the guessed word. It will tell also if they are in place or missplaced. The instructions will be prompted in english, spanish and french, which are also the languages i speak.
Writen in C, This project was made to practice logic for the main part of the project, and i added a multiligual feature to practice file reading and working with structures.
While there can be other more functional approaches, again, the objetive was to practice those specific targets. I tried also to work in good practices, an organized code and files, and the usage of Make. 

Prerequisites
The game is designed to work in Unix-like systems (Mac/Linux). Since this is a very simple project, the only requeriments are terminal enviroment in linux/mac wich supports C language (like in the majority of the instalations) with the basics libraries installed. The libraries needed are the following:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
Everything else needed to the program to work is already contained in. 

Installation
This program must be executed in a terminal. It uses Make to compile. Make is a build automation tool that streamlines the process of compiling and linking source code files to create executable programs or libraries. It uses a Makefile to determine which files need to be recompiled, reducing unnecessary work.
1. Once downloaded the files, go to the parent directory of the project.
2. Type 'Make play' to create the executable file. At this point you are ready to go.
3. If you want to recompile the program, type 'make re'. If you want to just erase the executable and object files, type 'make fclean'.


Usage
In linux/mac enviroments, you will type './play' to execute the file, then follow the instructions prompted by the program to play it. To replay it you can just retype './play'. The program does not keep any information between executions

Contributing
If you'd like to contribute, please follow these steps:

Fork the repository
Create a new branch (git checkout -b feature/your-feature)
Make your changes and commit them (git commit -m 'Description of your changes')
Push to the branch (git push origin feature/your-feature)
Open a pull request

Known bugs:

1 scanf bug
	When prompting a not lowercase letter at first position, there is something remaining in the buffer that leads you to press enter twice to actually get the word to be checked. A whole refactor for a totally custom scanf function may will be required.

2 repeated guessed letters
	When the word to guess has a repeated letter, if you missplace one of both, the help message will ignore it and won't display it.

3 missplaced letters unknown behaviour
	When there are repeated missplaced letters, the message bevahiour is unclear, it can skip the message, or make multiples at a time after where it should be.

Feel free to report any new bug.
