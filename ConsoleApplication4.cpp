using namespace std;
#include <iostream>
#include <vector>
void Vector(vector<int>& vec, int n) {
	for (int x = 0; x < vec.size(); x++) {
		vec[x] += n;
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	vector<int> vec = { 1, 2, 3, 4, 5 };
	int n;
	int i = 0;
	cout << "Изначельный вектор: "<<endl;
	for (int x = 0; x < vec.size();x++ ) {
		cout << vec[x] << " ";
	}
	cout <<endl<< "Элементы вектора увеличить на: ";
	cin >> n;
	Vector(vec, n);

	cout << endl;
	cout << "Вектор увеличиный на: "<< n <<endl;
	for (int x = 0; x < vec.size(); x++) {
		cout << vec[x] << " ";
	}
	return 0;
}
