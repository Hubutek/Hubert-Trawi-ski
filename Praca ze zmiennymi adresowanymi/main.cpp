#include <stdio.h>
#include <iostream>
#include "Algorithm.h"


void menu(void) {
    printf("1.Wyswietl tabele\n");
    printf("2.Wprowadz wartosci do tabeli\n");
    printf("3.Zdefiniuj najmniejsza wartosc\n");
    printf("4.Zdefiniuj majwieksza warotsc\n");
    printf("5.Zdefiniuj srednia wartosc\n");
    printf("0.Wyjscie\n");
    printf("wybierz wlasciowa opcje\n\n");
}

int main() {
    int array[SIZE];
    int i = array[0];
    int option = 0;
    int size;
    printf("Tabela\n");
    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                break;
            case 1:
                for (int i = 0; i < size; i++) {
                    printf("[%d]:Wartosc:%d\n", i, array[i]);
                }
                break;
            case 2:
                for (int i = 0; i < size; i++) {
                    printf("%d:", i);
                    scanf("%d\n", &array[i]);
                }
                break;
            case 3:
                printf("Najmniejsza wartosc:%d\n", min);
                break;
            case 4:
                printf("Najwieksza warotsc:\n");
                break;
            case 5:
                printf("Srednia warotsc:\n");
                break;
            case 6:
                printf("Savin data to the file\n");
                break;
            case 7:
                printf("Restoring date frome the file\n");
            default:
                printf("Wprowadz poprawna wartosc\n");
        }
    }
while (option !=0);

printf("Koniec programu");

return 0;
}