#include <iostream>

using namespace std;

bool binarySearch(int arr[], int start, int end, int key){

    if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;
    
    if(arr[mid] == key){
        return true;
    }
        
    else if(arr[mid] > key){
        return binarySearch(arr, start, mid-1, key);
    }
    
    else{
        return binarySearch(arr, mid+1, end, key);
    }
    
}

int main()
{
    //sorted array
    int arr[] = {2, 5, 10, 19, 26, 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    bool found = binarySearch(arr, 0, n-1, key);
    
    if(found){
        cout<<"Element is present"<<endl;
    }
    
    else{
        cout<<"Element is not present"<<endl;
    }
    
    return 0;
}
