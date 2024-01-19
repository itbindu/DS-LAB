#include<stdio.h>


int partition (int a[],int lb,int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end){
    while(a[start] <= pivot){
        start++;
    }
    while (a[end]>pivot){
        end--;
    }
    
    if(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }
    }
        int temp=pivot;
        a[lb]=a[end];
        a[end]=pivot;
        return end;
    
    
}

void quicksort(int a[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc=partition(a, lb, ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
    
    }
    
    
int main(){
    int size;
    printf("Enter the Size:");
    scanf("%d",&size);
    int a[size] ;
    printf("Enter %d Elements:\n",size);
    for(int I=0; I<size;I++){
        scanf("%d",&a[I]);
    }
    printf("Array Elements are:");
     for(int I=0; I<size;I++){
        printf("%3d",a[I]);
    }
    int lb=0;
    int ub=size-1;
    quicksort(a,lb, ub);
    printf("\nSorted Array Elements:");
    for(int I =0;I<size;I++){
        printf("%3d",a[I]);
    }
    return 0;
}

