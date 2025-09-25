#include <iostream>

using namespace std;

int main(){
    int array[10];
    int n;

    cout << "Masukkan panjang array yang diinginkan: ";
    cin >> n;

    if (n >= 100 || n < 0){
        cout << "Masukkan tidak valid!";
        return 0;
    }

    for(int i = 0; i < n; i++){
        cout << "Masukkan elemen array ke-" << i+1 << ": ";
        cin >> array[i];
    }

    cout << "Isi array: " << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}
