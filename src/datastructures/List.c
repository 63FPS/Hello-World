
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
     void *data;
     struct node *next;
} node_t;

typedef struct list {
    node_t *head;
    node_t *last;
} _list_t;

_list_t *create_list() {
    _list_t*list;

    if (0 > (list = (_list_t *) malloc(sizeof(_list_t)))) {
        perror("malloc() failed. Cannot acquire memory for the list");
        return NULL;
    }

    list->head = NULL;
    list->last = NULL;

    return list;
}

void destroy_list(_list_t *list) {
    if (list == NULL) {
        return;
    }

    //toDo schleife: free all node's in list

    free(list);
}

void printList(_list_t *list) {

   node_t *ptr = list->head;

   printf("\n[head] =>");
   
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

int append(void* data) {
   
    node_t *new_node;
    if ((new_node = (node_t*) malloc(sizeof(node_t))) < 0) {
        perror("malloc() failed. Cannot acquire memory for the node");
        return -1;
    }

    new_node->data = data;
    new_node->next = NULL;
    
    //toDo Fall 2: Nicht leere liste

    return 0;
}

int main() {
   insert(1);
   insert(2);
   insert(3); 

   void printList(_list_t *list);
   return 0;
}