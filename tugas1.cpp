#include <iostream>
using namespace std;

int main()
{
    float odometerAwal, odometerAkhir, literBahanBakar, pemakaianBBM;
    // MasukKan nilai odometer di kota asal
    cout << "Masukkan nilai odometer di kota asal: ";
    cin >> odometerAwal;

    // Masukan nilai odometer di kota tujan
    cout << "Masukan nilai odometer di kota tujuan: ";
    cin >> odometerAkhir;

    // Jumlah liter pengisian BBM di kota tujuan
    cout << "Jumlah liter pengisian BBM di kota tujuan: ";
    cin >> literBahanBakar;

    // Hitung jaraktempuh
    float jaraktempuh = odometerAkhir - odometerAwal;

    // Hitung pemakaian bahan bakar dalam satuan KM perliter
    pemakaianBBM = jaraktempuh/literBahanBakar;

    // Tampilkan hasil Konsumsi bahan bakar
    cout <<"Konsumsi bahan bakar = " << pemakaianBBM << "KM perliter." << endl;

    return 0;

}