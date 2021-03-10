
#include <iostream>
#include <string>
using namespace std;

int main() {


	string napis = "Wszystko wiem";
	string napis1 = "Nic nie wiem";

	napis += " dobrze";
	napis1 += " nie dobrze";
	cout << "napis po dodaniu: " << napis;
	cout << "\nnapis1 po dodaniu: " << napis1;

	if (napis == napis1)
		cout << "\na i c sa takie same\n";
	else
		cout << "\na i b sa rozne\n";

	return 0;
}
