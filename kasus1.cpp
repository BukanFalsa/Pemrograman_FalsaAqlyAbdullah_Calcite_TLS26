#include <iostream>

using namespace std;

int main() {
    int N, K;
    cout << "masukkan jumlah astronot : ";
    cin >> N;
    cout << "masukkan nilai eliminasi : ";
    cin >> K;

   
    if (N <= 0 || K <= 0) {
        cout << "Input harus lebih besar dari 0" << endl;
        return 0;
    }

    // Inisialisasi daftar astronot nomor 1 sampai N
    int astronot[1000];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int current_size = N;
    int index = 0;

    cout << "\nUrutan astronot yang tereliminasi:\n";

    // Loop proses eliminasi hingga tersisa 1 astronot
    while (current_size > 1) {
        // Tentukan posisi astronot yang dieliminasi dengan lingkaran (modulo)
        index = (index + K - 1) % current_size;
        int eliminated = astronot[index];

        cout << "Astronot " << eliminated << " tereliminasi.\n";

        // Hapus elemen dari array dengan menggeser sisa elemen ke kiri
        for (int i = index; i < current_size - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        current_size--;

        // Aturan perubahan nilai K
        if (eliminated % 2 == 0) {
            K += 2; // Genap -> K bertambah 2
        } else {
            K -= 1; // Ganjil -> K berkurang 1
        }

        // Batas minimal K adalah 2
        if (K < 2) {
            K = 2;
        }
    }

    // Hasil astronot terakhir
    cout << "\nAstronot terakhir yang bertahan: " << astronot[0] << endl;

    return 0;
}