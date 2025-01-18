#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <stddef.h>
#include "spec_sort.h"

/*@ requires \valid_read(array + (begin .. end - 1));
    requires begin < end;
    assigns \nothing;
    ensures indexOfMinElement(array, begin, end, \result);
*/
size_t index_of_min_element(int* array, size_t begin, size_t end);

/*@ requires \valid(p) && \valid(q);
    assigns *p, *q;
    ensures swap{Pre, Post}(p , q);
*/
void swap(int* p, int* q);

/*@ requires \valid(array + (begin .. end - 1));
    requires begin < end;
    assigns array[begin .. end - 1];
    ensures sorted(array, begin, end);
    ensures permutation{Pre, Post}(array, begin, end);
*/
void selection_sort(int* array, size_t begin, size_t end);

#endif // Конец #ifndef SELECTION_SORT_H.
