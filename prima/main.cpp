#include <iostream>

using namespace std;

int main()
{
    int input;
    int i;
    int prima = 2;

    cin >> input;
    if (input <= 1){
        prima = prima + 1;
    }
    for (i = 2; i < input; i++){
        if (input % i == 0){
            prima = prima + 1;
        }
    }
    if (prima > 2){
        cout << "Bukan prima" << endl;
    }else {
        cout << "Prima" << endl;
    }
    return 0;
}
