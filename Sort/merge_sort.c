#include<stdio.h>
#include<assert.h>
void exch(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void merge(int arr[],int aux[],int left,int mid,int right){
    for(int i=left;i<=right;i++){
        aux[i]=arr[i];
    }
    for

}
void merge_sort_recursive(int arr[],int aux[],int left,int right){
    if(left>=right){
        return;
    }
    int mid=(left+right)/2;
    merge_sort_recursive(arr,aux,left,mid);
    merge_sort_recursive(arr,aux,mid+1,right);
    merge(arr,aux,left,mid,right);


}
void merge_sort(int arr[],int n){

    int* aux=(int)malloc(n*sizeof(int));//aux array is only defined for only one time
    merge_sort_recursive(arr,aux,0,n-1);
    free(aux);
    

}
int main(){

}