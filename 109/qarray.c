#include <stdio.h>
#define size 5
int q[size];
int f = -1, r = -1;

void enqueue(int x) {
    if (r == size - 1) {
        printf("Quenq is Full\n");
    } else {
        r++;
        q[r] = x;
        if (f == -1) f = 0;
    }
}

void dequeue() {
    if (f == -1 || f > r) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted element is :%d\n", q[f]);
        f++;
    }
}

int main() {
    enqueue(10); 
    enqueue(20); 
    enqueue(30); 
    enqueue(40); 
    enqueue(50);
    dequeue();   
    dequeue();   
    enqueue(25); 
    return 0;
}
