#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Otwórz plik tekstowy "dane.txt".
  ifstream plik("dane.txt");

  // SprawdŸ, czy plik zosta³ pomyœlnie otwarty.
  if (!plik.is_open()) {
    cerr << "Nie uda³o siê otworzyæ pliku!" << endl;
    return 1;
  }

  // WyprowadŸ dane z pliku tekstowego po jednej linii.
  string linia;
  while (getline(plik, linia)) {
    cout << linia << endl;
  }

  // Zamykamy plik.
  plik.close();

  return 0;
}
