
#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

int queue[MAX_QUEUE_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_QUEUE_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = item;
}

int dequeue() {
    int item;
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        exit(1);
    }
    item = queue[front];
    front++;
    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue()); // This will print "Queue is empty" and exit the program
    return 0;
}
