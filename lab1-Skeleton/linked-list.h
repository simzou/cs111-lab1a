// Linked List data structure of commands

#include "command.h"
#include <error.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct command_node {
	struct command_node *next;
	command_t command;
} command_node;

typedef struct command_stream {
	command_node* head;
	command_node* tail;
	command_node* current;
	int size;
} command_stream;

void append_to_list(command_t, command_stream*);

void remove_last_node(command_stream*, command_t*);

int list_size(command_stream* list) {
	return list->size;
}

// int is_empty(command_stream* list) { return list->head == NULL; };

void print_list(command_stream*);
