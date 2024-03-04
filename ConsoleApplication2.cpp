#include <iostream>
using namespace std;
int main() {
	int t, t500, t200, t100, t50, t20, t10, t5, t2, t1;
	cout << "nhap so tien t="; cin >> t;
	while (t > 0) {
		t500 = t / 500;
		t200 = t / 200;
		t100 = t / 100;
		t50 = t / 50;
		t20 = t / 20;
		t10 = t / 10;
		t5 = t / 5;
		t2 = t / 2;
		t1 = t / 1;
		
		cout << "so to 500" << t500 << endl;
		cout << "so to 200" << t200 << endl;
		cout << "so to 100" << t100 << endl;
		cout << "so to 50" << t50 << endl;
		cout << "so to 20" << t20 << endl;
		cout << "so to 10" << t10 << endl;
		cout << "so to 5" << t5 << endl;
		cout << "so to 2" << t2 << endl;
		cout << "so to 1" << t1 << endl;
		cout << "tong so cac loai la";
	}
	return 0;
}