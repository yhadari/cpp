#include <iostream>
#include <cstdlib>

template <typename T>
void    ft(T arr){
        std::cout << arr << std::endl; 
}

template <typename T>
void    iter(T *arr, int arrSize, void(ft)(T)){
    std::cout << "the address of an array is :" << arr << std::endl;
    std::cout << "the length of the array is :" << arrSize << std::endl;
    while (arrSize--)
        ft(*(arr++));
}

int main( void ) {

    int arr[] = {10,20,30,40,50,60};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    iter(arr, arrSize, ft);
    std::string arr1[] = { "aaaaa", "bbbbb", "ccccc"};
    arrSize = sizeof(arr1)/sizeof(arr1[0]);
    iter(arr1, arrSize, ft);
    return 0;
}
