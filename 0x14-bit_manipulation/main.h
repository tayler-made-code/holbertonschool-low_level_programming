#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
