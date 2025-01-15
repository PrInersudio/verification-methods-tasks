#ifndef SPEC_SORT_H
#define SPEC_SORT_H

/*@ axiomatic SortProperties {
        predicate indexOfMinElement(int* array, size_t begin, size_t end, size_t imin) =
            begin <= imin < end &&
            \forall integer i; begin <= i < end ==> array[imin] <= array[i];

        predicate swap{L1, L2}(int* p, int* q) =
            \at(*p, L2) == \at(*q, L1) && \at(*q, L2) == \at(*p, L1);

        predicate sorted(int* array, integer begin, integer end) =
            \forall integer i, j; begin <= i <= j < end ==> array[i] <= array[j];

        predicate swapInArray{L1, L2}(int* array, integer begin, integer end, integer i, integer j) =
            begin <= i < end && begin <= j < end &&
            swap{L1, L2}(array + i, array + j) &&
            \forall integer k;
                begin <= k < end && k != j && k != i ==>
                \at(array[k], L1) == \at(array[k], L2);

        inductive permutation{L1, L2}(int* array, integer begin, integer end) {
            case reflexive{L1}:
                \forall int* array, integer begin, end;
                    permutation{L1, L1}(array, begin, end);
            case swap{L1, L2}:
                \forall int* array, integer begin, end, i, j;
                    swapInArray{L1, L2}(array, begin, end, i, j) ==>
                    permutation{L1, L2}(array, begin, end);
            case transitive{L1, L2, L3}:
                \forall int* array, integer begin, end;
                    permutation{L1, L2}(array, begin, end) &&
                    permutation{L2, L3}(array, begin, end) ==>
                    permutation{L1, L3}(array, begin, end);
        }
}*/

#endif // Конец #ifndef SPEC_SORT_H.