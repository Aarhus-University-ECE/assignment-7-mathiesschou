#include "stack.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void initialize(stack* s){
  //implement initialize here

  // starter med at pointeren til NULL
  *s = NULL; 

}

void push(int x, stack* s){
    //implement push here
  
    // allokerer hukommelse til ny node
    node *t = (node *)malloc(sizeof(node));

    // pointer mod data og så pointer mod den næste værdi
    t->data = x;
    t->next = *s; 

    // topnoden bliver den nye node
    *s = t; 
}

int pop(stack* s){
    // implement pop here

    //pre: assert hvis vores pointer ikke er i toppen
    assert(*s != null);

    //frigører node til p, og returnere værdien
    node *p = *s;
    *top = (*s)->next;

    //tager dataen og sletter den
    int temp = p->data;
    free(p);

  // returner dataen
  return temp;
}

bool empty(stack* s)
{
  //implement empty here

  //return true, hvis top noden er NULL
  return *s == NULL;
}

bool full(stack* s) {
    //implement full here

    // return false, hvis top noden ikke er NULL
  return *s != NULL;
}
