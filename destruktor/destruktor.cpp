#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);   //constructor
	~angka();     //Destruction
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) { //Constructor
	panjang = i;
	arr = new int[i];
	isiData;
}

angka::~angka() { //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array sudah dilepaskan" << endl;
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
    }
}

void angka::cetakData() {
	for (int i = 1;i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //constructor dipanggil
	angka* ptrBelajarcpp = new angka(5); //Constructor dipanggil
	delete ptrBelajarcpp; //Deastructor dipanggil

	return 0;
}//Destructor dipanggil





 


