#include <iostream>
using namespace std;

class User {
    public:
    void ViewJadwal() {
        cout << "Jadwal Buka" << endl;
        cout << "==============" << endl;
        cout << "Senin" << "  | " << "04.30 - 22.00" << endl;
        cout << "Selasa" << " | " << "04.30 - 22.00" << endl;
        cout << "Rabu" << "   | " << "04.30 -  22.00" << endl;
        cout << "Kamis" << "  | " << "04.30 - 22.00" << endl;
        cout << "Jumat" << "  | " << "04.30 -  22.00" << endl;
        cout << "Sabtu" << "  | " << "04.30 - 22.00" << endl;
    }
    void ViewPelatih() {
        cout << "Jadwal Pelatih" << endl;
        cout << "==============" << endl;
        cout << "Pelatih 1: Ronaldo" << "      | " << "Senin, Rabu" << endl;
        cout << "Pelatih 2: Messi" << "        | " << "Rabu, Kamis" <<endl;
        cout << "Pelatih 3: Ronaldinho" << "   | " << "Selasa, Jumat" << endl;
        cout << "Pelatih 4: Xavi" << "         | " << "Rabu, Sabtu" << endl;
        cout << "Pelatih 5: Cristiano" << "    | " << "Kamis, Sabtu" << endl;
        cout << "Pelatih 6: Lionel Messi" << " | " << "Senin, Selasa" << endl;
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
    int choice = getUserInput();
    switch (choice) {
        case KELUAR:
            cout << "Terima kasih sudah menggunakan layanan kami." << endl;
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
    return 0;
}

int getUserInput() {
    int choice;
    cout << "Pilih menu:" << endl;
    cout << "1. Lihat jadwal buka" << endl;
    cout << "2. Lihat jadwal pelatih" << endl;
    cout << "3. Buat janji" << endl;
    cout << "4. Login admin" << endl;
    cout << "99. Keluar" << endl;
    cin >> choice;
    return choice;

}