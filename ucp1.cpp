//1. int n, string nama, char pilihan



//2. prosedur dan fungsi
//#include <iostream>
//using namespace std;

//string nama;
//int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
//int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

//void input()
//{
//    cout << "Nama pembeli : ";
//    cin >> nama;

//    cout << "Jumlah Xpander : ";
//    cin >> nXpander;

//    cout << "Jumlah Porsche : ";
//    cin >> nPorsche;

//    cout << "Jumlah Avanza : ";
//    cin >> nAvanza;

//    cout << "Jumlah Brio : ";
//    cin >> nBrio;

//    cout << "Jumlah Lamborghini : ";
//    cin >> nLamborghini;
//}

//int TotalHarga(){
//    return (nXpander*hXpander) + (nPorsche*hPorsche) + (nAvanza*hAvanza) + (nBrio*hBrio) + (nLamborghini*hLamborghini);
//}

//void display(){
//    cout << "Total Harga : " << TotalHarga() << endl;
//}

//int main()
//{
//    char pilihan;
//    do{
//    input();
//    display();
//    cout << "Apakah ingin membeli kembali? ";
//    cin >> pilihan;
//    }while(pilihan == 'y' || pilihan == 'Y');
//}



//3. looping
//#include<iostream>
//using namespace std;

//int main(){
    
//    int bilangan;

//    srand(time(0));

//    bilangan = rand() %12;

//    while(bilangan %2){
//        cout << bilangan << endl;
//        cout << "Bilangannya ganjil " << endl;

//        bilangan = rand() %12;
//    }

//    cout << bilangan << endl;
//    cout << "Bilangannya genap" << endl;
//}



//4. conditional statement
//#include <iostream>
//using namespace std;

//int main (){
//    int nNilMat, nNilFis, nRerata;
//    string status;

//    cout << "Masukkan Nilai Matematika = " << endl;
//    cin >> nNilMat; 
//    cout << "Masukkan Nilai Fisika = " << endl;
//    cin >> nNilFis;

//    nRerata = (nNilMat + nNilFis) / 2;

//    if(nRerata > 60 || nNilMat > 70){
//        status ="Lulus";
//    }
//    else{
//        status ="Tidak Lulus";
//    }

//    cout << "Rata-rata kedua nilai adalah = " << nRerata << endl;
//    cout << "Anda dinyatakan = " << status << endl;

//    return 0;

//    }



//5. struct
//#include <iostream>
//using namespace std;

//struct DetailAlamat{
//    string desa;
//    string kota;    
//};

//struct Mahasiswa {
//    string nim;
//    string nama;
//    DetailAlamat alamat;
//    int umur;
//};

//int main(){
//    Mahasiswa mhs[3];
//    for(int i=0;i<3;i++){
//        cout << "Data ke-" << (i+1) <<":"<< endl;
//        cout << "Nomor Mahasiswa : ";
//        getline(cin , mhs[i].nim);
//        cout << "Nama Mahasiswa : ";
//        getline(cin , mhs[i].nama);
//        cout << "Alamat Mahasiswa : " << endl; 
//        cout << "\t Nama Desa : ";
//        cin >> mhs[i].alamat.desa;
 //       cout << "\t Nama Kota : ";
//        cin >> mhs[i].alamat.kota;
//        cout << "Umur Mahasiswa : ";
//        cin >> mhs[i].umur;
//        cin.ignore(1,'\n');
//        cout << endl;
//    }

//    for(int i=0;i<3;i++){
//    cout << endl;
//    cout << "Data Mahasiswa ke-" << (i+1) << ":" << endl;
//    cout << "\n NIM : " << mhs[i].nim;
//    cout << "\n Nama : " << mhs[i].nama;
//    cout << "\n Alamat : ";
//    cout << "\n \t Desa : " << mhs[i].alamat.desa;
//    cout << "\n \t Kota : " << mhs[i].alamat.kota;
//    cout << "\n Umur : " << mhs[i].umur;
//    }
//}



//6. 
#include <iostream>
using namespace std;

int sensor[3];
string status, namaKota;

void input(){
    cout << "\nBADAN PENGAWASAN KUALITAS UDARA" << endl;
    cout << "-------------------------------\n" << endl;

        cout << "Nama Kota : ";
        cin >> namaKota;
        for(int i=0;i<3;i++){
        cout << "Sensor ke-" << (i+1) << ":" << endl;
        cin >> sensor[3];    
        }
}

void program(){
    
    if ((sensor[1]+sensor[2]+sensor[3])/3 <= 75 || sensor[1] <45 || sensor[2] <45|| sensor[3] <45){
        status = "Sehat";
    } else{
        status = "Tidak Sehat";
    }
}

void display(){
    cout << "Nama Kota: " << namaKota << endl;
    cout << "Status: " << status << endl;
}

int main(){
    char pilihan;

    do{
    input();
    program();
    display();
    cout << "Apakah ingin mengecek kembali? ";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}