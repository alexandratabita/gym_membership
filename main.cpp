#include <iostream>
#include <string>
using namespace std;

class User {
    public:
    void ViewJadwal() {
        system("cls");
        cout << "Jadwal Buka" << endl;
        cout << "----------------------" << endl;
        cout << "Senin" << "  | " << "04.30 - 22.00" << endl;
        cout << "Selasa" << " | " << "04.30 - 22.00" << endl;
        cout << "Rabu" << "   | " << "04.30 - 22.00" << endl;
        cout << "Kamis" << "  | " << "04.30 - 22.00" << endl;
        cout << "Jumat" << "  | " << "04.30 - 22.00" << endl;
        cout << "Sabtu" << "  | " << "04.30 - 22.00" << endl;
        cout << "Minggu" << " | " << "04.30 - 22.00" << endl;
        cout << "\n----------------------" << endl;
        char resp;
        cout << "Kembali ke menu awal? (Y): ";
        cin >> resp;
    }
    void ViewPelatih() {
        system("cls");
        cout << "Jadwal Pelatih" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Pelatih 1: Rizky Pratama" << " | " << "Senin, Jumat" << endl;
        cout << "Pelatih 2: Raditya Putra" << " | " << "Rabu, Kamis" <<endl;
        cout << "Pelatih 3: Daniel Aditya" << " | " << "Selasa, Jumat" << endl;
        cout << "Pelatih 4: Kevin Permana" << " | " << "Rabu, Sabtu" << endl;
        cout << "Pelatih 5: Satria Wijaya" << " | " << "Kamis, Sabtu" << endl;
        cout << "Pelatih 6: Andreas Dimas" << " | " << "Senin, Selasa" << endl;
        cout << "\n----------------------------------------" << endl;
        char resp;
        cout << "Kembali ke menu awal? (Y): ";
        cin >> resp;
    }
};

const int JADWAL = 1;
const int PELATIH = 2;
const int BUAT_JANJI = 3;
const int LOGIN = 4;
const int KELUAR = 99;

int getUserInput();
int main() {
    User user;
    int shouldExit = 0;
    while (true) {
        if (shouldExit) {
            break;
        }
        int choice = getUserInput();
        switch (choice) {
            case KELUAR:     
                cout << "Terima kasih sudah menggunakan layanan kami." << endl;
                shouldExit = 1;
                break;
            case JADWAL:
                user.ViewJadwal();
                break;
            case PELATIH:
                user.ViewPelatih();
                break;
            default:
                cout << "Pilihan yang anda masukkan salah." << endl;
                break;
        }
    }
    return 0;
}

int getUserInput() {
    int choice;
    system("cls");
    cout << "Pilih menu:" << endl;
    cout << "1. Lihat jadwal buka" << endl;
    cout << "2. Lihat jadwal pelatih" << endl;
    cout << "3. Buat janji" << endl;
    cout << "4. Login admin" << endl;
    cout << "99. Keluar" << endl;
    cout << "-----------------------" << endl;
    cout << "Masukkan pilihan: ";
    cin >> choice;
    return choice; 
}