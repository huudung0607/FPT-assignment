
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <fstream>
using namespace std;

struct Component {
	char name[50];
	double R;
	double V;
};

int main()
{
	Component v[3] = {
		{ "Resistor1",1000,5.0 }, 
		{ "Resistor2",220,10.0 }, 
		{ "Capacitor1",470,5.0 }
	};
	ofstream output("components.dat", ios::binary);
	if (!output.is_open()) {
		cout << "Cannot open file";
		return 0;
	}
	for (int i = 0; i < 3; i++) {
		output.write((char*)&v[i], sizeof(Component));
	}
	output.close();
	Component a[3];
	ifstream input("components.dat", ios::binary);
	if (!input.is_open()) {
		cout << "Cannot open file";
		return 0;
	}
	for (int i = 0; i < 3; i++) {
		input.read((char*)&a[i], sizeof(Component));
	}
	input.close();
	for (int i = 0; i < 3; i++) {
		cout << "Component: " << a[i].name << ", Resistance: " << a[i].R << " Ohms"
			<< ", Voltage: " << a[i].V << " Volts" << endl;
	}
}

