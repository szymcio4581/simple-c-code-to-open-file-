#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Program czytający rzeczy z pliku\n";
  ifstream plik("dane.txt");

  if (!plik.is_open()) {
    cerr << "Nie udalo sie otworzyc pliku!" << endl;
    return 1;
  }

  string linia;
  while (getline(plik, linia)) {
    cout << linia << endl;
  }

  plik.close();

  return 0;
}
