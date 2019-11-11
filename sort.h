#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED
typedef bool (*CMP)(int, int);
void swap(int&, int&);
bool larger(int a, int b);
bool smaller(int a, int b);
void sort(int*, int, CMP);


#endif // SORT_H_INCLUDED
