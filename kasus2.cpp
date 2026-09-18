#include<iostream>

using namespace std;
int main() {
    
    char kata[1000];
    cout << "Masukkan kode huruf kapital A-Z: ";
    cin >> kata;

    cout << kata[0]<< " ";
    for (int i = 1; kata[i] != '\0'; i++)
    {
        int a = kata[i] -'A'+1;
        int b = kata[i-1] -'A'+1;
        int angka = a + b; 
        angka = angka % 26;
        char hasil = angka + 64;
          
        cout <<hasil << " ";
        
        
    }
    return 0;
}