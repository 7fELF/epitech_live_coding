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

// this is the same as example 3, but we use previously defined type
// type t_flag_handler is defined in fptr.h, it is a function pointer
void example4() {
    t_flag_handler function_pointer_array[2];
    function_pointer_array[0] = &rick;
    function_pointer_array[1] = &morty;

    printf("Calling function_pointer[0]:\n");
    function_pointer_array[0]();
    printf("Calling function_pointer[1]:\n");
    function_pointer_array[1]();
}
