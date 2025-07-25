//components
/*Resistor1 1000 5.0
Resistor2 220 10.0
Capacitor1 470 5.0*/

//result
/*Component: Resistor1, Resistance: 1000 Ohms, Power: 0.025 Watts
Component: Resistor2, Resistance: 220 Ohms, Power: 0.454545 Watts
Component: Capacitor1, Resistance: 470 Ohms, Power: 0.0531915 Watts*/

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

int main()
{
	ifstream file("components.txt");
	if (!file.is_open()) {
		cout << "File open error !";
		return 0;
	}
	string line;
	vector<string> v;
	while (file >> line) {
		v.push_back(line);
	}
	ofstream output("result.txt");
	for (int i = 0; i < v.size() - 2; i+=3) {
		output << "Component: " << v[i] << ", Resistance: " << v[i + 1] << " Ohms, Power: "
			<< pow(stod(v[i + 2]),2)/stod(v[i + 1]) << " Watts" << endl;
	}
	output.close();
	file.close();
}
