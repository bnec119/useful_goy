
#include "functions.hpp"

int main() {
    int N, K, Q;
    int *a = nullptr, *kol = nullptr, *psum = nullptr;
    
    input(N, K, Q, a);
    
    proc(N, K, a, kol, psum);
    
    queries(Q, K, psum);
    
    
    delete[] a;
    delete[] kol;
    delete[] psum;
    
    return 0;
}
