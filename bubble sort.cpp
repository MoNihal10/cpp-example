#include <iostream>

using namespace std;

void swap(int first,int second,int number[]){
     int temp=first;
     first=second;
     second=temp;
}

void bubbleSort(int number[],int size){
    for(int i=0; i<size;i++){
        for(int j=1;j<size;j++){
            if(number[j]<number[j-1]){
                swap(number[j],number[j-1]);
            }
        }
    }
}

int main() {
    int numbers[]={20,60,30,10};
    bubbleSort(numbers,size(numbers));
    for(int val:numbers)
       cout<<val<<endl;
    return 0;
}
