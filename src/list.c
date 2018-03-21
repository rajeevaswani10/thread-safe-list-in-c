
/*
 * File: list.c
 * Author: Rajeev
 *
 * Desc: thread safe list implementation in c
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct llist_node {
	int data;
	struct list_node_t * next;
};

typedef struct llist_node		llist_node_t;


struct llist_t {
	llist_node_t * front;
	llist_node_t * tail;
	unsigned int count;
};

typedef struct llist_t 			llist_t;



llist_t * llist_create()
{

	return NULL;
}

void llist_destroy(llist_t * list)
{

}

int llist_isempty(llist_t * list)
{

	return TRUE;
}

LLIST_RC llist_insert_last(llist_t * list, int data)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_insert_first(llist_t * list, int data)
{
	return LLIST_SUCCESS;

}

LLIST_RC llist_insert_at_position(llist_t * list, int index, int data)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_delete_last(llist_t * list)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_delete_first(llist_t * list)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_delete_at_position(llist_t * list, int index)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_get_element(llist_t * list, unsigned index, int * data)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_pop_element_from_front(llist_t * list, int * data)
{

	return LLIST_SUCCESS;
}

LLIST_RC llist_pop_element_from_last(llist_t * list, int * data)
{

	return LLIST_SUCCESS;
}

void llist_print(llist_t * list)
{

}

unsigned int llist_size(llist_t * list)
{

	return LLIST_SUCCESS;
}

