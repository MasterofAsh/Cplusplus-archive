#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;



int main(){
    int arr[] = {1, 2, 64, 23, 591, 212, 2};
    sort(arr, arr + 5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;;
    }
    
    return 0;
}