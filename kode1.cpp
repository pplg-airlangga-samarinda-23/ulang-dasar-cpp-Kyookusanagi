#include <iostream>
using namespace std;

void cetakData(string nama, string nisn, string jurusan, int tinggibadan)
{
cout << "Nama anda: " << nama << endl;
cout << "Nisn anda: " << nisn << endl;
cout << "Jurursan anda: " << jurusan << endl;
cout << "Tinggi badan anda: " << tinggibadan << endl;



}

int main ()
{
    string nama = "Afif maulana putra";
    string nisn = "00642821";
    string jurusan = "PPLG";
    int tinggibadan = 165 ;

cetakData(nama, nisn, jurusan, tinggibadan);
return 0;
}