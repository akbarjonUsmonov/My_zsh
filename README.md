# Welcome to My Zsh
***

## Description
    Zsh - tcsh - bash - sh are command interpreters. A command interpreter is run inside a terminal.
    The program "zsh" is a UNIX command interpreter that runs (-bash ...)
    that read commands from "stdin" and sends them to execution after correcting
    their (keywords, identifiers, operands) by expected syntax and execute the 
    command if everything is okay.

    Zsh:
        ->
        |  Read: Read the command from standard input.
        |  Parse: Separate the command string into a program and arguments.
        |  Execute: Run the parsed command.
        |-- (repeat)

    Some commands to use:
        cd, echo, ls, which ...
        env, pwd, setenv, unsetenv ...

## Installation
    To run this program use GNU (gcc) compilation or Makefile that i provided 
        GNU:
            $> gcc zsh/c/*.c zsh/h/*.h
            $> a.out
            [/home/docode/project]> Enter command

        Makefile:
            $> make
            $> my_zsh
            [/home/docode/project]> Enter command

    Note: to remove binary file (my_zsh) of Makefile use command "make clean" ;-)

## Usage
    This "Zsh" UNIX command interpreter work:
        [/home/docode/project]>ls
        Makefile  README.md  my_zsh  zsh
        [/home/docode/project]>cd ..
        [/home/docode]>pwd
        /home/docode
        [/home/docode]>

### The Core Team
Akbar Usmonov\
<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
