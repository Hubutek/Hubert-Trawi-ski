#include <stdio.h>
#include "Algorithm.h"


void enterNumbers(int tab[], int size) {
    for (int i = 0; i <= size; i++) {
        int *ptr;
        ptr = tab;
        printf("\nWprowadz wartosc dla wyrazu %d:", i);
        scanf("%d", ptr + i);
    }

}

void displayNumbers(int tab[], int size) {
    for (int i = 0; i <= size; i++) {
        printf("\nWyraz nr.%d: %d", i, tab[i]);
    }

}

float calculateAverage(int tab[], int size) {
    int sum = 0;
    for (int i; i <= size; i++) {
        sum += tab[i];
    }
    float average = (float) sum / size;
    printf("\nSrednia: %f", average);
    return average;
}

int min(int array[], int size) {
    int minimum = array[0];
    for (int i = 0; i < size; i++) {
        if (minimum > array[i])
            minimum = array[i];
    }
    return minimum;
}

int max(int array[], int size) {
    int maximum = array[0];
    for (
            int i = 0;
            i < size; i++) {
        if (maximum > array[i])
            maximum = array[i];
    }
    return maximum;
}

int saveArrayToFile(int array[], int size) {
    FILE *fptr = NULL;
    fptr = fopen("Sik.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0 < size; ++i;) {
        fprintf(fptr, "%d\n", array[i]);
    }
    fclose(fptr);
    return 0;
}
