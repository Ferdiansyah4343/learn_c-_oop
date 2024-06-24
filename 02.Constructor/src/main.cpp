#include <iostream>
#include <string>

using namespace std;

// Kelas Polos tanpa Constructor
class Polos
{
public:
    string dataString;
    int dataInt;
};

// Kelas Mahasiswa dengan Constructor
class Mahasiswa
{
public:
    string nama;
    string nim;
    string jurusan;
    double ipk;

    // Constructor dengan parameter
    Mahasiswa(string nama, string nim, string jurusan, double ipk)
    {
        // Inisialisasi atribut kelas dengan nilai dari parameter constructor
        Mahasiswa::nama = nama;
        Mahasiswa::nim = nim;
        Mahasiswa::jurusan = jurusan;
        Mahasiswa::ipk = ipk;

        // Menampilkan informasi mahasiswa saat constructor dijalankan
        cout << "Nama: " << Mahasiswa::nama << endl;
        cout << "NIM: " << Mahasiswa::nim << endl;
        cout << "Jurusan: " << Mahasiswa::jurusan << endl;
        cout << "IPK: " << Mahasiswa::ipk << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Membuat objek mahasiswa1 dan mahasiswa2 menggunakan constructor
    Mahasiswa mahasiswa1 = Mahasiswa("Ferdiansyah", "12345678", "Teknik Informatika", 3.85);
    Mahasiswa mahasiswa2 = Mahasiswa("Fatur", "87654321", "Sistem Informasi", 3.90);

    // Contoh penggunaan kelas Polos tanpa Constructor
    // Polos polos;
    // polos.dataString = "Hello, World!";
    // polos.dataInt = 42;

    // Menampilkan data dari objek polos
    // cout << "String: " << polos.dataString << endl;
    // cout << "Integer: " << polos.dataInt << endl;

    return 0;
}
