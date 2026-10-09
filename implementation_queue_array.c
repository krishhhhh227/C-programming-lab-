#include<stdio.h>
#define size 5
int Q[size];
int f=-1;
int r=-1;
ENQUEUE(int x){
    if(r==size-1){
        printf("queue is full\n");
    }
    else{
        r=r+1;
        Q[r]=x;
    }
    if(f==-1){
        f=0;
    }
}
DEQUEUE(){
    if (f==-1 && r==-1){
        printf("queue is empty");
    }
    else{
        printf("Deleted element is %d \n", Q[f]);
        f=f+1;
    }
}
void main(){
    ENQUEUE(10);
    ENQUEUE(20);
    ENQUEUE(30);
    ENQUEUE(40);
    ENQUEUE(50);
    DEQUEUE();
    DEQUEUE();
    ENQUEUE(25);
}