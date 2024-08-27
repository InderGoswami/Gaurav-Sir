#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Stack.h"
#include<stdbool.h>
struct Node{
    int data;
    struct Node* next;

};
typedef struct Node Node;
Node* head=NULL;
int N=0;
void push(int item){//O(1)
    Node* oldhead=head;
    head=(Node*)malloc(sizeof(Node));
    head->data=item;
    head->next=oldhead;
    N++;


}
int pop(){//O(1)
    if(N==0){
        return -1;
    }
    int val=head->data;
    Node* temp=head;
    head=head->next;
    N--;
    free(temp);
    return val;

}
int size(){//O(1)
    return N;

}
bool isEmpty(){//O(1)
    return N==0;

}
int testStack(){//tset case
    push(1);
    push(2);
    push(3);
    assert(size()==3);
    assert(pop()==3);
    assert(size()==2);
    assert(pop()==2);
    assert(size()==1);
    assert(pop()==1);
    assert(size()==0);
    assert(isEmpty());

}
int main(){
    testStack();
    return 0;
}