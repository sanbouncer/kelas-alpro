#include <stdio.h>

int main () {
   char name[50], alamat_rumah[50];

   printf("Nama: ");
   gets(name);
   
   printf("Alamat rumah: ");
   gets(alamat_rumah);

   printf("Nama: %s\n", name);
   printf("Alamat rumah: %s\n", alamat_rumah);

   return(0);
}
