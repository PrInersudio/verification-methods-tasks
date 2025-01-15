#include "selection_sort.h"

size_t index_of_min_element(int* array, size_t begin, size_t end) {
  size_t imin = begin;
  /*@ loop invariant begin <= imin < i <= end;
      loop invariant indexOfMinElement(array, begin, i, imin);
      loop assigns imin, i;
      loop variant end - i;
  */
  for(size_t i = begin + 1; i < end; ++i)
    if(array[i] < array[imin]) imin = i;
  return imin;
}

void swap(int* p, int* q) {
  int tmp = *p; *p = *q; *q = tmp;
}

void selection_sort(int* array, size_t begin, size_t end) {
    /*@ loop invariant begin <= i <= end;
        loop invariant sorted(array, begin, i);
        loop invariant permutation{Pre, Here}(array, begin, end);
        loop invariant \forall integer j, k; begin <= j < i ==> i <= k < end ==> array[j] <= array[k];
        loop assigns i, array[begin .. end - 1];
        loop variant end - i;
    */
    for(size_t i = begin; i < end; ++i) {
        //@ ghost L: ;
        size_t imin = index_of_min_element(array, i, end);
        swap(array + i, array + imin);
        //@ assert swapInArray{L, Here}(array, begin, end, i, imin);
    }
}
