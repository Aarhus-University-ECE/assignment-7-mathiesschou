#include "stack.h"
#include <assert.h>


void initialize(stack* s){
  //implement initialize here

  // starter med at pointeren til NULL
  s->head = NULL; 

}

void push(int x, stack* s){
    //implement push here
  
    // allokerer hukommelse til ny node
    node *new_t = (node *)malloc(sizeof(node));

    // pointer mod data og så pointer mod den næste værdi
    new_t->data = x;
    new_t->next = s->head;
    s->head = new_t;

}

int pop(stack* s){
    // implement pop here

    //frigører node fra top stack
    node *t = s->head;
    s->head = t->next;
    int hold = t->data;
    // befrier / sletter den
    free(t);

  // returner hold
  return hold;
}

bool empty(stack* s)
{
  //implement empty here
  if(s->head == NULL)
  {
    return true;
  }
  else 
  //return true, hvis top noden er NULL
  return false;
}

bool full(stack* s) {
   
  //Den ændrer sig dymnamisk, så den kan ikke være fuld.
  return;
}
