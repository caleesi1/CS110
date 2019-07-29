#include <iostream>
#include <vector>
#include <cstdlib>  // srand, rand 
#include <ctime>    // time 

using namespace std;

int main() {
    srand ( time(0) ); // seed the random generator
	int size, pick=1;
	vector<int> list(size+1,0);

	cout << "waitlist: ";
	cin >> size; 
	cin.ignore();

	int lotto=0;
	while(pick <= size) {
		lotto = rand() % size ;
		if ( list[lotto] != 0 ) continue;
		list[lotto]++;
		cout << pick++ << " pick: " << lotto +1 << endl; 
	} 
}
