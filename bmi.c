#include <stdio.h>

int main(){

    int memilih;
    float bmi_lakilaki, tinggi_lakilaki, berat_lakilaki, bmi_perempuan, tinggi_perempuan, berat_perempuan;
    char nama_lakilaki[100], nama_perempuan[100];

    //Menu Awal dan Pemilihan Menu Kalkulator Body Mass Index//
    printf("=====SELAMAT DATANG DI KALKULATOR BODY MASS INDEX=====\n");
    printf("Pilih Jenis Kelamin Anda!\n 1) Laki-laki\n 2) Perempuan\n 9) Exit\n");
    printf("Pilihan\t: "); 
    scanf("%d", &memilih);
    
    switch(memilih){


        //Mengisi Data Diri Gender Laki-Laki//
        case 1:
            printf("Masukkan Nama Panggilan Anda\t: "); 
            scanf("%s", nama_lakilaki);
            printf("Masukkan Tinggi Badan (cm)\t: "); 
            scanf("%f", &tinggi_lakilaki);
            printf("Masukkan Berat Badan (kg)\t: "); 
            scanf("%f", &berat_lakilaki);

            //Perhitungan Body Mass Index Gender Perempuan//
            bmi_lakilaki=berat_lakilaki/((tinggi_lakilaki/100)*(tinggi_lakilaki/100));

            //Menampilkan Nilai Body Mass Index Gender Perempuan//
            printf("Nilai Body Mass Index %s\t: %.2f\n", nama_lakilaki, bmi_lakilaki);

            //Pengambilan Keputusan berdasarkan Nilai Body Mass Index yang sudah Dihitung//
            if(17 <= bmi_lakilaki && bmi_lakilaki <= 23){
                printf("Selamat, Berat Badan %s Ideal.\n\n", nama_lakilaki);
            }else{
                printf("Maaf, Berat Badan %s Kurang Ideal.\n\n", nama_lakilaki);
            }
            main();


        //Mengisi Data Diri Gender Perempuan//
        case 2:
            printf("Masukkan Nama Panggilan Anda\t: "); 
            scanf("%s", nama_perempuan);
            printf("Masukkan Tinggi Badan (cm)\t: "); 
            scanf("%f", &tinggi_perempuan);
            printf("Masukkan Berat Badan (kg)\t: "); 
            scanf("%f", &berat_perempuan);
    
            //Perhitungan Body Mass Index Gender Perempuan//
            bmi_perempuan=berat_perempuan/((tinggi_perempuan/100)*(tinggi_perempuan/100));

            //Menampilkan Nilai Body Index Gender Perempuan//
            printf("Nilai Body Mass Index %s\t: %.2f\n", nama_perempuan, bmi_perempuan);

            //Pengambilan Keputusan berdasarkan Nilai Body Mass Index yang sudah Dihitung//
            if(18 <= bmi_perempuan && bmi_perempuan <= 25){
                printf("Selamat, Berat Badan %s Ideal.\n\n", nama_perempuan);
            }else{
                printf("Maaf, Berat Badan %s Kurang Ideal.\n\n", nama_perempuan);
            }
            main();

        //Menu Exit
        case 9:
        printf("Terima Kasih Sudah Menggunakan Kalkulator Body Mass Index. Sampai Jumpa.\n");
        break;

        //Bila Pengguna memilih Pilihan diluar 1 dan 2//
        default:
            printf("Maaf, Pilihan Anda Tidak Tersedia\n\n");
            main();

    }
    return 0;
}