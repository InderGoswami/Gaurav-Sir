#include<stdio.h>
#include<assert.h>
#include<sys/time.h>
#include<stdlib.h>
#include<time.h>
void bubble_sort(int arr[],int size){
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}
void selection_sort(int arr[],int size){
    for(int i=0;i<size;i++){
        int min=arr[i];
        int m=i;
        for(int j=i+1;j<size;j++){
            if(min>arr[j]){
                min=arr[j];
                m=j;

            }

        }
        int temp=arr[m];
        arr[m]=arr[i];
        arr[i]=temp;

    }
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void test_input(){
    int arr[]={4,1,7,8,2};
    int expected_output[]={1,2,4,7,8};
    bubble_sort(arr,5);
    for(int i=0;i<5;i++){
        assert(arr[i]==expected_output[i]);
    }

}
int main(){
    // int arr[100];
    // int size;
    // scanf("%d",&size);
    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    // selection_sort(arr,size);
    // printArr(arr,size);
    // test_input();
    srand(time(NULL));//if we will not do this rand() function will repeat random numbers every time
    for(int i=0;i<10;i++) printf("%d \n",rand());

    return 0;

}