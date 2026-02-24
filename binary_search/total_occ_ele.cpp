#include<iostream>
#include<vector>

using namespace std;

int firstOccurrence(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int firstOcc = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] >= target) {
            firstOcc = mid;   
            right = mid - 1;
        }else {
            left = mid + 1;                
        }
    }

    return  firstOcc;             
}

int lastOccurrence(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int lastOcc = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] > target) {
            right = mid - 1;
        }else {
            lastOcc = mid;   
            left = mid + 1;                
        }
    }

    return  lastOcc;             
}

int main() {
    vector<int> arr = {2,7,9,9,9,9,9,10,10,20,50,100};
    int target ;

    cout<<"Enter the target Value: "<<endl;
    cin>>target;

    int firstOcc = firstOccurrence(arr, target);
    int lastOcc = lastOccurrence(arr, target);

    cout<<"First occurrence of "<<target<<" is: "<<firstOcc<<endl;
    cout<<"Last occurrence of "<<target<<" is: "<<lastOcc<<endl;

    int totalOccurrence = lastOcc - firstOcc;
    cout<<"Total occurrence of "<<target<<" is: "<<totalOccurrence + 1;

    return 0;
}