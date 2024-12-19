#include "functions.hpp"

#include <iostream>

int kie::normalize(int value, int max) {
    if (value < 0) return 0;
    if (value > max) return max;
    return value;
}

void kie::input(int &arr_size, int &max_number, int &request_count, int* &arr) {
    std::cout << "array length: ";
    std::cin >> arr_size;
    std::cout << "max number: ";
    std::cin >> max_number;
    std::cout << "request number: ";
    std::cin >> request_count;
    
    arr = new int[arr_size];
    std::cout << "enter array elements:" << std::endl;
    for (int i = 0; i < arr_size; ++i) {
        std::cin >> arr[i];
    }
}

void kie::calculate_queries(int arr_size, int max_number, int* arr, int* &equal_items_count, int* &summ_arr) {
    equal_items_count = new int[max_number]();
    for (int i = 0; i < arr_size; ++i) {
        equal_items_count[arr[i]]++;
    }
    
    summ_arr = new int[max_number + 1];
    for (int i = 1; i <= max_number; ++i) {
        summ_arr[i] = summ_arr[i - 1] + equal_items_count[i - 1];
    }
}

void kie::output_queries(int request_count, int max_number, int* summ_arr) {
    for (int i = 0; i < request_count; ++i) {
        int l, r;
        std::cout << "range: \nfrom ";
        std::cin >> l;
        std::cout << "to ";
        std::cin >> r;
        
        l = normalize(l, max_number - 1);
        r = normalize(r, max_number - 1);
        
        std::cout << summ_arr[r + 1] - summ_arr[l] << std::endl;
    }
}
