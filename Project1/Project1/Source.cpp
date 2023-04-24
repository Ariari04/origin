#include <iostream>
#include <fstream>

using namespace std;
int main() {
	ifstream fin("in.txt");
	ofstream fout("out.txt");

	int n, i, m;
	fin >> n;
	int* arr1 = new int[n];
	for (i = 0; i < n; ++i) {
		fin >> arr1[i];
	}
	fin >> m;
	int* arr2 = new int[m];
	for (i = 0; i < m; ++i) {
		fin >> arr2[i];
	}
	for (i = 1; i < n; ++i) {
		swap(arr1[i], arr1[i - 1]);
	}
	for (i = m-1; i > 0; --i) {
		swap(arr2[i], arr2[i - 1]);
	}
	fout << m << "\n";
	for (i = 0; i < m; ++i) {
		fout << arr2[i] << " ";
	}
	fout << endl <<n<<"\n";
	for (i = 0; i < n; ++i) {
		fout << arr1[i] << " ";
	}
	delete[] arr1;
	delete[] arr2;


}