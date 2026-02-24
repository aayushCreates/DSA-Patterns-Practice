#include<iostream>
#include<vector>

using namespace std;

int bruteForce_solution(vector<int> arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int binarySearch_solution(vector<int> arr, int target) {
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

int main() {
    vector<int> arr = {2,7,9,9,9,9,9,10,10,20,50,100};
    int target ;

    cout<<"Enter the target Value: "<<endl;
    cin>>target;

    int bruteForceAns = bruteForce_solution(arr, target);
    int binarySearchAns = binarySearch_solution(arr, target);

    return 0;
}