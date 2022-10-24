#include <iostream>
using namespace std;
//#define BIN_NUM
//#define HEX_NUM
void main() {
	setlocale(LC_ALL, "");
#ifdef BIN_NUM
	int num_dec = 0;
	int num_save = 0;
	int calc = 0;
	cout << "Введите число в десятичной системе счисления: "; cin >> num_dec;
	int num_bin = num_dec;
	int* arr = new int[num_bin];
	for (int i = 0; i < num_bin; i++)
	{
		arr[i] = num_dec % 2;
		if (num_dec / 2 > 0)
			calc = i;
		num_save = num_dec / 2;
		num_dec = num_save;
	}
	cout << "Число в двоичной системе счисления: ";
	for (int i = (calc + 1); i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	delete[]arr;
#endif // BIN_NUM
#ifdef HEX_NUM
	const int num_hex = 16;
	int num_dec = 0;
	char arr_char_hex[num_hex] = { '0','1','2','3','4','5','6','7','8','9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int arr_save[num_hex];
	int calc = 0;
	cout << "Введите число в десятичной системе счисления: "; cin >> num_dec;
	int num_save = 1;
	if (num_dec < num_hex)
		cout << "Число в шестнадцатеричной системе счисления: " << arr_char_hex[num_dec];
	else {
		for (int i = 0; i < num_hex; i++)
		{
			if (num_dec / 16 > 0)
				calc = i;
			arr_save[i] = num_dec % 16;
			num_save = num_dec / 16;
			num_dec = num_save;
		}

		cout << "Число в шестнадцатеричной системе счисления: ";
		for (int i = calc + 1; i >= 0; i--)
		{

			cout << arr_char_hex[arr_save[i]];

		}
	}
#endif // HEX_NUM
}
