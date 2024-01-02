#include <stdio.h>
#define MAX 5
void TampilkanArray (int A[], int n) { 
    for (int j=0; j<n; j++) { printf("A[%d] = %d\n", j, A[j]);
}
}
int main() {
/* Mendeklarasikan array dan melakukan inisialisasi nilai
ke dalamnya */
int A[MAX] = (40,4,30,8,7);
int x, /* Mendeklarasikan variabel untuk menyimpan banyak elemen array yang belum terurut */
j, k,/ Mendeklarasikan variabel untuk indeks
maks,
imaks,
temp;
pengulangan */
/* Mendeklarasikan variabel untuk menyimpan nilai maksimal */
/ Mendeklarasikan variabel untuk menyimpan indeks dari elemen yang menyimpan
nilai maksimal */
/* Mendeklarasikan variabel sebagai variabel temporari /
/* Menampilkan array sebelum diurutkan */ printf("Sebelum pengurutan: \n");
TampilkanArray (A, MAX);
/* Melakukan proses pengurutan dengan metode maksimum */ X = MAX;
for (j=0; j<MAX-1; j++) {
}
maks = A[0];
imaks = 0;
for (k-1; k<X; k++) {
}
if (A[k] > maks) {
}
maks A[k];
imaks k;
/* Melakukan pertukaran nilai dengan nilai maks */
temp
A[X-1];
A[X-1] A[imaks];
A[imaks]= temp;
/* Melakukan decrement terhadap nilai X */
X--;
printf("\n");
/* Menampilkan array setelah diurutkan */ printf("Setelah pengurutan: \n");
TampilkanArray (A, MAX);
return 0;
}