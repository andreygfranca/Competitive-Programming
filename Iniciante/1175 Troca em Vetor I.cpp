#include <iostream>

using namespace std;

int main (){
	int N[20], N2[20];

	for (int i = 0; i < 20; i++){
        cin >> N[i];
	}

	for (int i = 0; i < 20; i++){
        N2[i] = N[19-i];
	}
	for (int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << N2[i] << endl;
	}

	return 0;
}
