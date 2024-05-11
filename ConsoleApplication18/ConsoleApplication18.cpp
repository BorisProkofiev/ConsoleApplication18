#include <iostream>

using namespace std;

int main() {
	int op;
	int a;
	int b;
	cin >> op;
	cin >> a;
	cin >> b;
	switch (op)
	{
	case 1:
		cout << a + b;
	case 2:
		cout << a - b;
		break;
	}
}