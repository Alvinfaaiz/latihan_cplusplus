#include <iostream>

using namespace std;

int truk(int kapasitas, int muatan){
    int total_truk;
    total_truk = muatan / kapasitas;
    if (muatan % kapasitas != 0){
        total_truk++;
    }
    return total_truk;
}

int main(){
    int i;
    int total_berat_perjenis, muatan = 0;
    int kapasitas, berat_total, jenis_barang, berat_satuan, barang_satuan, butuh_truk;
    cout << "Masukkan kapasitas truk: ";
    cin >> kapasitas;
    cout << "Masukkan jumlah barang: ";
    cin >> jenis_barang;
    for (i = 1; i <= jenis_barang; i++){
        cout << "Berat barang ke " << i << " (kg): ";
        cin >> berat_satuan;
        cout << "Masukkan jumlah barang: ";
        cin >> barang_satuan;
        total_berat_perjenis = berat_satuan * barang_satuan;
        muatan = muatan + total_berat_perjenis;
    }
    butuh_truk = truk(kapasitas, muatan);
    cout << "Membutuhkan " << butuh_truk << " truk untuk mengangkut muatan " << muatan << " kg"<< endl;
    return 0;
}
