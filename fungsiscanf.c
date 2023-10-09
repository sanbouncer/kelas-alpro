#include <stdio.h>

int main () {
    // membuat variabel
    char name[20], alamat_rumah[30];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat rumah: ");
    scanf("%s", &alamat_rumah);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Rumah yang diinputkan: %s\n", alamat_rumah);
   
    return 0;
}