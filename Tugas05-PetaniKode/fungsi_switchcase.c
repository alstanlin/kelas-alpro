#include <stdio.h>

void main(){

    char grade;

    printf("Inputkan grade: ");
    scanf("%c", &grade);

    switch(grade){
        case'A':
            printf("Luar biasa!\n");
            break;
        case'B':
            printf("Bagus!\n");
            break;
        case'C':
            printf("Bagus!\n");
            break;
        case'D':
            printf("Anda lulus\n");
            break;
        case'E':
            printf("Anda remidi\n");
            break;
        case'F':
            printf("Anda remidi\n");
            break;
        default:
            printf("Grade Salah!\n");
    }
}