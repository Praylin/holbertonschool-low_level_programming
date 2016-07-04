#include <string.h>
#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int add_end_dl_list(List **list, char *str) 
{
  struct List* temp = *list;
  /*Creating new node*/
  struct List* newNode = (struct List*)malloc(sizeof(struct List));
  newNode->str = strdup(str);
  newNode->prev = NULL;
  newNode->next = NULL;
  /*If list is empty*/
  if (*list == NULL) {
   *list = newNode;
   return 0;
  }
  /*If list is not empty, loop till the last node and then add the new node*/
  while(temp->next != NULL) 
    temp = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
  newNode->next = NULL;
  return 0;
}

int add_begin_dl_list(List **list, char *str)
{
  /*Creating new node*/
  struct List* newNode = (struct List*)malloc(sizeof(struct List)); 
  newNode->str = strdup(str); 
  newNode->prev = NULL;
  newNode->next = NULL;
  /*If head is empty*/
  if(*list == NULL) {
    *list = newNode;
    return 0;
  }
  /*If the list is non-empty*/
  else {
    (*list)->prev = newNode;
    newNode->next = *list;
    *list = newNode;
    return 0;
  }
}

