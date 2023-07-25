#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <ostream>

using namespace std;



int *test(int arr[],int len){

    int *newArr = (int*)malloc(len*4);

    memcpy(newArr, arr, len*4);

    for (int i = 0; i<len ; i++) {

        for (int j = i+1; j<len; j++) {
                if (newArr[i]<newArr[j]) {
                int temp = newArr[i];
                newArr[i]= newArr[j];
                newArr[j]=temp;
                }
        }   
    }

    return newArr;
}

int main(){

    int arr[10]={5,3,2,1,5,4,1,4,5,7};

   int *x= test(arr,10);

   
    cout<<arr[9]<<endl;


   cout<<x[9]<<endl;


    return 0;
}