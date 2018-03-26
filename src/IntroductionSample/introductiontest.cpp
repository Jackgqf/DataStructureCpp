#include <iostream>
#include "introductionsample.h"

using namespace std;

int main(int argc, char *argv[])
{
//test bubblesort function
    int bubbleArray[6] = {1,4,5,8,9,6} ;

    bubblesort1A(bubbleArray,6);

    for(int i = 0; i < 6; i++){
        cout<<bubbleArray[i]<<endl;
    }

// Test the one number
    unsigned int x = 8;
    cout<<"test the one number"<<endl;
    cout<<countOnes(x)<<endl;

    cout<<"test sample"<<endl;
    return 0;
}
