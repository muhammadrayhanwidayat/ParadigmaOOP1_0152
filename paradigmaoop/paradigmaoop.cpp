#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        const int id;
        string nama;
        float nilai;

public:
    Mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {//member initialization list
        //definisi}
    }
    ~Mahasiswa(){
        cout << "Id = " << id << endl;
        cout << "nama = " << nama << endl;
        cout << "nilai = " << nilai << endl;

        }
};


int main()
{
    Mahasiswa mhs(12, "asroni", 90.5);

    return 0;
    
}

