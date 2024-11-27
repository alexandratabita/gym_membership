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
        cout << "Tekan tombol Enter untuk kembali...";
        cin.ignore();
        cin.get();
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
        cout << "Tekan tombol Enter untuk kembali...";
        cin.ignore();
        cin.get();
    }
};
    
class Admin : public User {
    private :
    string name;
    string password;

        bool _validateLogin(string _name, string _password, Admin arrAdmin[10]) {
            bool isSuccess = false;
            for (int i = 0; i < 10; i++) {
                if (_name == arrAdmin[i].name && _password == arrAdmin[i].password) {
                isSuccess = true;
                break;
                }
            }
            if (isSuccess) {
                cout << "Login success." << endl;
                return isSuccess;

                
            }
            cout << "Invalid username or password. Please try again." << endl;
            return isSuccess;
        }

    public :
    Admin(string _name, string _password) {
        Admin::name = _name;
        Admin::password = _password;
    }

    Admin(){}
    void LoginAdmin(Admin arrAdmin[10]) {
        string _name, _password;
        system("cls");
        cout << "LOGIN" << endl;
        cout << "-----------" << endl;
        cout << "username: ";
        cin >> _name;
        cout << "password: ";
        cin >> _password;

        cout << "-----------" << endl;
        Admin::_validateLogin(_name, _password, arrAdmin);

        cout << "press enter to continue...";
        cin.ignore();
        cin.get();
    }
    void CreateMembership() {
        
    }
    void EditMembership() {
    }
    void DeleteMembership() {
    }
    void ViewMembership() {
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
    Admin admin;

    Admin arrAdmin[10];
    arrAdmin[0] = Admin("bitalxndr", "pw1234");
    arrAdmin[1] = Admin("bittabitt", "pw1235");

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
            case LOGIN:
                admin.LoginAdmin(arrAdmin);
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
int UIAdmin() {
    Admin admin;
    int choice;
    system("cls");
    cout << "Pilih menu:" << endl;
    cout << "1. Create Membership" << endl;
    cout << "2. Edit Membership" << endl;
    cout << "3. Delete Membership" << endl;
    cout << "4. View Membership" << endl;
    cout << "5. Keluar" << endl;
    cout << "--------------------" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> choice;
    return choice;
}