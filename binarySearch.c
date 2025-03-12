#include <stdio.h>

int binarySearch(int arr[], int low, int high, int ele){
    if(low > high) return -1;
    int mid = (low + high)/2;
    if(arr[mid] == ele){
        return mid;
    }
    else if(arr[mid] > ele){
        binarySearch(arr, low, mid-1, ele);
    }
    else{
        binarySearch(arr, mid+1, high, ele);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be found: ");
    int ele;
    scanf("%d", & ele);
    int index = binarySearch(arr, 0, n-1, ele);
    if(index == -1){
        printf("Element %d is not there in the array", ele);
    }
    else{
        printf("Element %d is found at index %d", ele, index);
    }
    return 0;
}