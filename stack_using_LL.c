#include<stdlib.h>
#include<stdio.h>
struct node {
    int data;
    struct node *next;
};


struct node *new,*top;
void pop() {
    if(top==NULL) {
        printf("Stack Underflow\n");
    } else {
        struct node *t;
        t=top;
        top=top->next;
        free(t);
        t=NULL;
    }
}


void push(int x) {
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}


void display() {
    struct node *t;
    t=top;
    while(t!=NULL) {
        printf("%d\n",t->data);
        t=t->next;
    }
}


void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Stack elements are:\n");
    display();
    pop();
    pop();
    printf("Stack elements after popping:\n");
    display();
}