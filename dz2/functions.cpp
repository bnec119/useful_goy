
#include <iostream>
#include "functions.hpp"

int normalize(int value, int max) {
    if (value < 0) return 0;
    if (value > max) return max;
    return value;
}

void input(int &N, int &K, int &Q, int* &a) {
    std::cout << "array length: ";
    std::cin >> N;
    std::cout << "max number: ";
    std::cin >> K;
    std::cout << "request number: ";
    std::cin >> Q;
    
    a = new int[N];
    std::cout << "enter array elements:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }
}

void proc(int N, int K, int* a, int* &kol, int* &psum) {
    kol = new int[K]();
    for (int i = 0; i < N; ++i) {
        kol[a[i]]++;
    }
    
    psum = new int[K + 1]();
    for (int i = 1; i <= K; ++i) {
        psum[i] = psum[i - 1] + kol[i - 1];
    }
}

void queries(int Q, int K, int* psum) {
    for (int i = 0; i < Q; ++i) {
        int l, r;
        std::cout << "range: \nfrom ";
        std::cin >> l;
        std::cout << "to ";
        std::cin >> r;
        
        l = normalize(l, K - 1);
        r = normalize(r, K - 1);
        
        std::cout << psum[r + 1] - psum[l] << std::endl;
    }
}
