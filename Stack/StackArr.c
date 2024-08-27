#include<stdlib.h>
#include"Stack.h"
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int *array=NULL;
int N=0;
int max_size=1;
void resize_array(int new_size){
    int* new_array=(int*)malloc(new_size*sizeof(int));
    for(int i=0;i<N;i++) new_array[i]=array[i];
    int *temp=array;
    array=new_array;
    free(temp);

}
void push(int data){
    if(N==0){
        resize_array(max_size);
        
    }
    else if(N==max_size){ 
        resize_array(2*max_size);
        max_size*=2;
        
    }
    array[N++]=data;

}
int pop(){
    if(isEmpty()){
        return INT_MIN;
    }
    int item=array[--N];
    if(size()>0 && size()==max_size/4){
        max_size=max_size/2;
        resize_array(max_size);
    }
    return item;


}
bool  isEmpty(){
    return N==0;

}
int size(){
    return N;
}

int testStack(){//test case
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

