#include <stdio.h>
int main()
{
    int option;
    float a, b, result;
    printf("\nMasukkan bilangan pertama :");
    scanf("%f", &a);

    printf("\n\tMENU\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih operasi: \n");
    scanf("%d", &option);

    printf("\nMasukkan bilangan kedua :");
    scanf("%f", &b);


    if(option==1) {
        result = a + b;
        printf("\n%g + %g = %g\n ", a, b, result);
    }
    else if(option==2) {
        result = a - b;
        printf("\n%g - %g = %g\n ", a, b, result);

    } else if(option==3) {
        result = a * b;
        printf("\n%g * %g = %g\n ", a, b, result );

    }else if(option==4){
        result = a / b;
        printf("\n%g / %g = %g\n ", a, b, result);

    }else{
        printf("Pilihan operasi tidak valid");
    }
}
