#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    double IPK;

    Mahasiswa(string nama, double ipk)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = ipk;
    }

    void tampilkanData()
    {
        cout << "Nama: " << Mahasiswa::nama << endl;
        cout << "IPK: " << Mahasiswa::IPK << endl;
    }
    void ubahNama(const char* namaBaru){
        Mahasiswa::nama = namaBaru;
    }
    string getNama(){
        return Mahasiswa::nama;
    }
    double getIPK(){
        return Mahasiswa::IPK;
    }
    double katrolIPK(const double &tambahanNilai){
        return Mahasiswa::IPK + tambahanNilai;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("John Doe", 2.5);
    mahasiswa1.tampilkanData();
    mahasiswa1.ubahNama("Jane Doe");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "Data Nama: " << dataNama << endl;
    cout << "Data IPK: " << mahasiswa1.getIPK() << endl;
    cout << "Katrol IPK: " << mahasiswa1.katrolIPK(2.5) << endl;

    return 0;
}
