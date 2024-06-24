#include <iostream> // Library untuk input-output standar
#include <string>   // Library untuk menggunakan tipe data string

using namespace std;

// Definisi kelas Mahasiswa
class Mahasiswa {
public:
    string nama;    // Atribut untuk menyimpan nama mahasiswa
    string NIM;     // Atribut untuk menyimpan NIM mahasiswa
    string jurusan; // Atribut untuk menyimpan jurusan mahasiswa
    double IPK;     // Atribut untuk menyimpan IPK mahasiswa
};

// Fungsi utama
int main(int argc, char const *argv[]) {
    // Membuat objek Mahasiswa dengan nama data1 dan data2
    Mahasiswa data1;
    Mahasiswa data2;

    // Mengisi data untuk objek data1
    data1.nama = "John Doe";
    data1.NIM = "1234567890";
    data1.jurusan = "Teknik Informatika";
    data1.IPK = 3.8;

    // Mengisi data untuk objek data2
    data2.nama = "John Lennon";
    data2.NIM = "0987654321";
    data2.jurusan = "Ilmu Komputer";
    data2.IPK = 3.7;

    // Menampilkan informasi dari objek data1
    cout << "Nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1: " << data1.NIM << endl;
    cout << "Jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl << endl;

    // Menampilkan informasi dari objek data2
    cout << "Nama dari data2: " << data2.nama << endl;
    cout << "NIM dari data2: " << data2.NIM << endl;
    cout << "Jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;

    return 0;
}
