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
	cout << endl;                                 // Membuat jarak per baris program
	cout << "======================" << endl;     // Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;
	for (int i = 0; i < n; i++)                        // Menggunakan perulangan for untuk menyinpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";         // Memasukkan atau menginputkan nilai data n
		cin >> arr[i];                                 // Menyimpan nilai data n kedalam array arr

	}

}
void insertionsort() {                      // Procedure Insertionsort

	int temp;                               // Membuat variable daya temporer atau penyimpanan sementara
	int j;                                  // Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {              // 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];                         // 2. simpan nilai arr[1] ke variable sementara temp

		j = i - 1;                             // 3. setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)        // 4. loping while dimana nilai j lebih besar sama dengan 0 dan
			// arr[j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];               // 4a. simpan arr[j] ke dalam variable arr[j+1]
			j--;                               // 4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;                   // 5. simpan nilai temp ke dalam arr[j+1]
		cout << "\nPass " << i << ": ";      // Output ke layar
		for (int k = 0; k < n; k++) {        // Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";          // Output ke layar
		}

	}
}




void display() {      // procedure display
	cout << endl;                                              // output  baris kosong
	cout << "\n=================================" << endl;     // output ke layar
	cout << "Element Array yang telah tersusun" << endl;       // output ke layar
	cout << "==================================" << endl;      // output kelayar

		for (int j = 0; j < n; j++) {             // Looping dengan j dimulai dari 0 hingga n-1
			cout << arr[j] << endl;               // output ke layar
		}
		cout << endl;                            // output baris kosong
	}

int main()                  
{
	input();                // memanggil input
	insertionsort();        // memanggil insertionsort
	display();              // memanggil display
}
