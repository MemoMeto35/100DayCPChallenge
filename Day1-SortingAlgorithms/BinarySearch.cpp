#include <iostream>
#include <array>

using namespace std;
int binary_search(int arr[], int n, int key){
    int starting = 0;
    int ending = n - 1;
    int mid;
    while (starting<=ending){
        int mid =(starting+ending)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) ending = mid -1;
        else starting = mid +1;}
        return -1;

    }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(int);

    cout << binary_search(arr, n, 6);
}
