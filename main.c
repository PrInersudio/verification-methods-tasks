#include <stdio.h>
#include "selection_sort.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int* array = (int*)malloc((argc - 1) * sizeof(int));
    for (int i  = 1; i < argc; ++i)
        array[i - 1] = atoi(argv[i]);
    selection_sort(array, 0, (argc - 1));
    for (int i  = 1; i < argc; ++i)
        printf("%d ", array[i - 1]);
    printf("\n");
    return 0;
}