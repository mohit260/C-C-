#include "iostream"

using namespace std;

main() {
	
	int x = 5;
	int y = 10;
	
	int z = x++ + y + x++ * ++y +x;
	cout << z;
}
