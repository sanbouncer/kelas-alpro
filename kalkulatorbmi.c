#include <stdio.h>
int main (){
    float TB, BB, BMI;
    int pilihan;

    printf ("1. Laki-laki \n2. Perempuan\n");
    printf ("Pilih Jenis kelamin: ");
    scanf ("%d", &pilihan);

    switch (pilihan){

    case 1:

    printf ("Masukkan tinggi badan: ");
    scanf ("%f", &TB);
    printf ("Masukkan berat badan: ");
    scanf ("%f", &BB);

    TB = TB/100;

    BMI = BB/(TB*TB);

    printf("BMI = %.2f\n", BMI);

    if (BMI >= 17 && BMI <= 23){
        printf ("Berat badan ideal\n");} 
    else {
        printf ("Berat badan tidak ideal\n");} break;

    case 2:

    printf ("Masukkan tinggi badan: ");
    scanf ("%f", &TB);
    printf ("Masukkan berat badan: ");
    scanf ("%f", &BB);

    TB = TB/100;

    BMI = BB/(TB*TB);

    printf("BMI = %.2f\n", BMI);

    if (BMI >= 18 && BMI <= 25){
        printf ("Berat badan ideal\n");} 
    else {
        printf ("Berat badan tidak ideal\n");} break;}
    return 0;
}