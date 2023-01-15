#include <iostream>

using namespace std;

int binarySearch(int arr[],int first,int last,int target){
    if(first<=last){
        int mid = (first+last)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]<target){
            return binarySearch(arr,mid+1,last,target);
        }
        else
            return binarySearch(arr,first,mid-1,target);
    }
    return -1;
}

int main() {
    int arr[] = {1,3,10,16,20,30};
    int targetValue;
    int firstIndex = 0;
    int lastIndex = size(arr);
    cout<<"Enter The Number To Search For In The Array: ";
    cin>>targetValue;
    int result = binarySearch(arr,firstIndex,lastIndex,targetValue);
    if(result == -1)
        cout<<"The number doesn't exist in the array. ";
    else
        cout<<targetValue<<" is in the "<<result<<" index of the array.";

    return 0;
}
