/*
** fptr.h for function_pointers in /home/antoine/epitech_live_coding/function_pointers
**
** Made by Antoine Baudrand
** Login   <antoine.baudrand@epitech.eu>
**
** Started on  Fri Nov 09 18:32:14 2018 Antoine Baudrand
** Last update Fri Nov 09 18:32:14 2018 Antoine Baudrand
*/

#ifndef FPTR_H_
# define FPTR_H_

// typedef defines a new type t_mytype from an int
typedef int t_mytype;

// typedef defines a new type t_flag_handler from a function pointer
typedef void (*t_flag_handler)(void);


void example1(t_mytype a);
void example2(void);
void example3(void);
void example4(void);
void example5(void);
void example6(void);

#endif /* !FPTR_H_ */
