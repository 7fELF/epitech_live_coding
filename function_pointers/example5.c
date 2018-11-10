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

// static means that this function can be only called from this file
// you can do a function pointer without static
static void rick(void) {
    printf("I'm pickle rick!\n");
}

static void morty(void) {
    printf("Oh jeez...rick\n");
}

static t_flag_handler get_function_pointer_from_index(int index) {
    t_flag_handler function_pointer_array[2];
    function_pointer_array[0] = &rick;
    function_pointer_array[1] = &morty;

    return (function_pointer_array[index]);
}

// type t_flag_handler is defined in fptr.h, it is a function pointer
// having the type defined makes it easier to reuse it
void example5() {
    t_flag_handler function_to_run;

    printf("Getting the fonction at index 0 and calling it:\n");
    function_to_run = get_function_pointer_from_index(0);
    function_to_run();

    printf("Getting the fonction at index 1 and calling it:\n");
    get_function_pointer_from_index(1)();
}
