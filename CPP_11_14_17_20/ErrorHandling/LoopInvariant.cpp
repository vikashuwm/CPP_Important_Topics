#include <iostream>

using namespace std;

int findmax(const std::vector<int>& arr) {
    if(arr.empty()) {
        cerr << "Error : Array is empty."<< std::endl;
    }

    int max = arr[0];
    
    for(int i=1;i<arr.size();i++) {
        max = std::max(max, arr[i]);
    }
    return max;
}

int main() {
    vector<int> arr{1,2,3,4,5,6};
    int max = findmax(arr);
    cout << "Maximum Element : " << max <<endl;
    return 0;
}