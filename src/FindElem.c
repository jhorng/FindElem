#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "FindElem.h"
#include "SimpleList.h"

Element *listFind(List *list, void *data){
  Element *elem = malloc(sizeof(Element));
  
  elem = list->head;
  
  if (list->head == NULL){
    printf("Nothing is here");
    return NULL;
  }
  else{
    while (*(int *)(elem->data) != *(int *)data){
      elem = elem->next;
    }
  }
  return elem; 
}