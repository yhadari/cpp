#include <iostream>

template <typename T>

void    print(T &arr){
        std::cout << arr << std::endl; 
}

template <typename T>

void    iter(T *arr, size_t arrSize, void(print)(T&)){
    std::cout << "Address is : " << arr << std::endl;
    std::cout << "Length is : " << arrSize << std::endl;
    while (arrSize--)
        print(*(arr++));
}

int main( void ) {
    int arr[] = {10,20,-30,40,50,-60,70};
    size_t arrSize = sizeof(arr)/sizeof(arr[0]);
    iter(arr, arrSize, print);

    std::string arr1[] = {"aaaaa", "bbbbb", "1337", "-42"};
    arrSize = sizeof(arr1)/sizeof(arr1[0]);
    iter(arr1, arrSize, print);

    return 0;
}
