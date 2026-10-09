#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
struct node*f,*r;
int dequeue(){
    int x=-1;
    struct node*p;
    if(f==NULL){
        printf("D is empty\n");
    }
    else{
        p=f;
        f=f->next;
        x=p->data;
        free(p);
        p=NULL;
        printf("Deleted element is %d\n",x);
    }
    return x;
}

void enqueue(int y){
    struct node*new;
    new =(struct node*)malloc(sizeof(struct node))
    new->data=y;
    new->next=NULL;
    if(f==NULL){
        f=r=new;
    }
    else{
        r->next=new;
        r=new;
    }
}
void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
}