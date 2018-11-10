/*
** example1.c for function_pointers in /home/antoine/epitech_live_coding/function_pointers
**
** Made by Antoine Baudrand
** Login   <antoine.baudrand@epitech.eu>
**
** Started on  Fri Nov 09 18:38:53 2018 Antoine Baudrand
** Last update Fri Nov 09 18:38:53 2018 Antoine Baudrand
*/

#include <stdio.h>
#include "fptr.h"

// unicorn flag handler
void unicorn(void) {
    printf("I am the unicorn\n");
}

// pony flag handler
void pony(void) {
    printf("I am the pony\n");
}

// turtle flag handler
void turtle(void) {
    printf("I am the ninja turtle\n");
}
// unknown flag handler
void ukn(void) {
    printf("I don't know what I am\n");
}

// This function returns a pointer to the right function depending of the given f flag
t_flag_handler get_handler_for_flag(char f) {
    const char *flags = "upt";
    t_flag_handler handlers[] = {&unicorn, &pony, &turtle, &ukn};

    int i = 0;
    while (flags[i] != '\0' && flags[i] != f) {
        i++;
    }

    return(handlers[i]);
}

void example6() {
    const char *input = "tuuzpt";

    int i = 0;
    while (input[i] != '\0') {
        printf("Getting and Calling handlers function for flag %c:\n", input[i]);
        get_handler_for_flag(input[i])();
        i++;
    }
}


