#include <iostream>

template <typename T>
void iter(T *array, int length, void (*func)(T const &));

template<typename T>
void print_out(T arg);