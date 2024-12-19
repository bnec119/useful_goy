#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

namespace kie {
	void input(int &arr_size, int &max_number, int &request_count, int* &arr);
	int normalize(const int value, const int max);
	void calculate_queries(const int arr_size, const int max_number, int* arr, int* &equal_items_count, int* &summ_arr);
	void output_queries(const int request_count, const int max_number, int* summ_arr);
}

#endif
