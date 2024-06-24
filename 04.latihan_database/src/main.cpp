#include <iostream>
#include <string>
#include <fstream>

#define DATA_FILE "dataMahasiswa.txt" // Define the name of the data file

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;

        // Constructor to initialize Mahasiswa object with given data
        Mahasiswa(string nama, string NIM, string jurusan) {
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        // Method to convert Mahasiswa data to a formatted string
        string stringify() {
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DBase {
    public:
        ifstream in; // Input file stream for reading from the file
        ofstream out; // Output file stream for writing to the file
        string filename; // Name of the file to operate on

        // Constructor to initialize DBase with a filename
        DBase(const char* fileName) {
            DBase::filename = fileName;
        }

        // Method to save Mahasiswa data to the file
        void save(Mahasiswa data) {
            cout << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            DBase::out.open(DBase::filename, ios::app); // Open file in append mode
            DBase::out << data.stringify(); // Write data to file
            DBase::out.close(); // Close the file
        }

        // Method to display all Mahasiswa data from the file
        void showAll() {
            DBase::in.open(DBase::filename, ios::in); // Open file in read mode
            string nama, NIM, jurusan;
            int index = 1;
            while (!DBase::in.eof()) {
                DBase::in >> nama; // Read name from file
                DBase::in >> NIM; // Read NIM from file
                DBase::in >> jurusan; // Read jurusan from file
                cout << index++ << ", Nama: " << nama << ", NIM: " << NIM << ", Jurusan: " << jurusan << endl;
            }
            DBase::in.close(); // Close the file
        }
};

int main() {
    // Input user data
    string nama, NIM, jurusan;
    cout << "Masukan data mahasiswa: " << endl;
    cout << "Nama: "; cin >> nama;
    cout << "NIM: "; cin >> NIM;
    cout << "Jurusan: "; cin >> jurusan;

    // Create objects for Mahasiswa and DBase
    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);
    DBase database = DBase(DATA_FILE);

    // Save data to the database
    database.save(dataMahasiswa);

    // Display all data in the database
    database.showAll();
    return 0;
}
