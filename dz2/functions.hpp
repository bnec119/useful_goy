
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

int normalize(int value, int max);
void input(int &N, int &K, int &Q, int* &a);
void proc(int N, int K, int* a, int* &kol, int* &psum);
void queries(int Q, int K, int* psum);

#endif
