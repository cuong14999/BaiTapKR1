
#include <stdio.h>
int main(){
    int arr1[20];
    char arr2[30];
    struct Tinh {
        char thanh_pho[20];
        char duong[20];
        int so_nha;
    };
    enum DongVat {Meo, Cho, Ho, Bao};
    printf("\nKich thuoc kieu du lieu int: %d", sizeof(int));
    printf("\nKich thuoc kieu du lieu char: %d", sizeof(char));
    printf("\nKich thuoc kieu du lieu float: %d", sizeof(float));
    printf("\nKich thuoc kieu du lieu double: %d", sizeof(double));
    printf("\nKich thuoc kieu du lieu mang so nguyen: %d", sizeof(arr1));
    printf("\nKich thuoc kieu du lieu mang ki tu: %d", sizeof(arr2));
    printf("\nKich thuoc kieu du lieu struct: %d", sizeof(struct Tinh));
    printf("\nKich thuoc kieu du lieu enum: %d", sizeof(enum DongVat));
    return 0;
}
