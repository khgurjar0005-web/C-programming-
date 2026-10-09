#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};


struct node *F = NULL;
struct node *R = NULL;


void Enqueue(int y) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    new_node->data = y;
    new_node->next = NULL;
    
    
    if (F == NULL) {
        F = R = new_node;
    } else {
        R->next = new_node; 
        R = new_node;       
    }
    printf("Enqueued: %d\n", y);
}


int Dequeue() {
    int x = -1;
    struct node *p;
    
    
    if (F == NULL) {
        printf("Queue is empty\n");
    } else {
        p = F;          
        F = F->next;    
        x = p->data;    
        free(p);     
        
        
        if (F == NULL) {
            R = NULL;
        }
    }
    return x;
}

int main() {
    
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);

    
    printf("Dequeued: %d\n", Dequeue());
    printf("Dequeued: %d\n", Dequeue());
    
    return 0;
}
