#include <iostream>

using namespace std;

int truk(int kap_truk, int berat_angkutan){
    int tot_truk;
    tot_truk = berat_angkutan / kap_truk;
    if (berat_angkutan % kap_truk != 0){
        tot_truk = tot_truk + 1;
    }
    return tot_truk;
}

int main(){
    int kapasitas_truk, berat_muatan, jml_truk;
    cout << "Masukkan kapasitas truk (kg): ";
    cin >> kapasitas_truk;
    cout << "Masukkan berat muatan (kg): ";
    cin >> berat_muatan;
    jml_truk = truk(kapasitas_truk, berat_muatan);
    cout << "Truk yang dibutuhkan untuk mengangkut barang tersebut sebanyak: " << jml_truk << endl;
    return 0;
}
