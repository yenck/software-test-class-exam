#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdexcept>
using namespace std;
int main(){
	char name[20];
	memset(name, 0 , 20);
	for (int i = 0; i <= 20 ; i++){
		scanf("%c", &name[i]);
	}
	cout << "Your input name: " << name << endl;
	if (name[0] == 's'){ // soft
		if (name[1] == 'w'){ // ware
			if (name[2] == 't'){ // testing
				cout << "you get it" << endl;
				throw std::invalid_argument("You did it");
				return 0;
			}
		}
	}
	cout << "bye" << endl;
	return 0;
}
