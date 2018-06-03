#include "introductionsample.h"

void swap(int *a, int *b){
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
//冒泡排序
void bubblesort1A(int A[],int n)
{
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i = 0;i < n; i++){
            if(A[i-1]>A[i]){
                swap(&A[i-1],&A[i]);
                sorted = false;
            }
        }
        n--;
    }
}

int countOnes(unsigned int n)
{
    int ones = 0;
    while(n>0){
        ones += (1&n);
        n>>=1;
    }
    return ones;
}
