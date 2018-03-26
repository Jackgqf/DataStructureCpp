#include "introductionsample.h"

void swap(int *a, int *b){
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubblesort1A(int A[], int n){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i=0;i<n;i++){
            if(A[i-1]>A[i]){
                swap(&A[i-1],&A[i]);
                sorted = false;
            }
        }
        n--;
    }
}
