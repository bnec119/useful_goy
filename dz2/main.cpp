#include "functions.hpp"

int main() {
    int arr_size, max_number, request_count;
    int *arr = nullptr, *equal_items_count = nullptr, *summ_arr = nullptr;
    
    kie::input(arr_size, max_number, request_count, arr);
    kie::calculate_queries(arr_size, max_number, arr, equal_items_count, summ_arr);
    kie::output_queries(request_count, max_number, summ_arr);
    
    delete[] arr;
    delete[] equal_items_count;
    delete[] summ_arr;
    
    return 0;
}
