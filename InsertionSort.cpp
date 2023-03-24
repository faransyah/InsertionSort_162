#include <iostream> 
using namespace std;

int arr[20];                                                     // Membuat Array dengan panjang data 20
int n;                                                           // Membuat Variable inputan n

void input() {               // project input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputsn jumlah element Array
		cin >> n;                                     // Memanggil variable inputan n

		if (n <= 20) {                                // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
		}
	}
	