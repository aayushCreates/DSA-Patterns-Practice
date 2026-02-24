#include<iostream>
#include<vector>

using namespace std;

int binarySearch_1D_arr(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }else if(arr[mid] > target) {       //  target in left side
            end = mid - 1;
        }else {
            start = mid + 1;                //  target in right side
        }
    }

    return  -1;             //  target "NOT FOUND"
}
