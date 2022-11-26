#include <iostream>
using namespace std;
int main()
{
	char HexDec1[4], HexDec2[4];
	char A[4], B[4], C[4], D[4], E[4], F[4];
	int Result[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "Please enter the first Hexadecimal number:" << endl;
		cin >> HexDec1[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cout << "Please enter the second Hexadecimal number : " << endl;
		cin >> HexDec2[i];
	}
	int Dec[4];
	for (int i = 3; i >=0; i--)
		switch (HexDec1[i])
	{
		case'0': {Dec[i] = 0; break; }
		case'1': {Dec[i] = 1; break; }
		case'2': {Dec[i] = 2; break; }
		case'3': {Dec[i] = 3; break; }
		case'4': {Dec[i] = 4; break; }
		case'5': {Dec[i] = 5; break; }
		case'6': {Dec[i] = 6; break; }
		case'7': {Dec[i] = 7; break; }
		case'8': {Dec[i] = 8; break; }
		case'9': {Dec[i] = 9; break; }
		case'A': {Dec[i] = 10; break; }
		case'B': {Dec[i] = 11; break; }
		case'C': {Dec[i] = 12; break; }
		case'D': {Dec[i] = 13; break; }
		case'E': {Dec[i] = 14; break; }
		case'F': {Dec[i] = 15; break; }
		default: {cout << "Please enter the number within the range of hexadecimal numbers"; }
	}
	int dec[4];
	for (int i = 3; i >= 0; i--)
		switch (HexDec2[i])
		{
		case'0': {dec[i] = 0; break; }
		case'1': {dec[i] = 1; break; }
		case'2': {dec[i] = 2; break; }
		case'3': {dec[i] = 3; break; }
		case'4': {dec[i] = 4; break; }
		case'5': {dec[i] = 5; break; }
		case'6': {dec[i] = 6; break; }
		case'7': {dec[i] = 7; break; }
		case'8': {dec[i] = 8; break; }
		case'9': {dec[i] = 9; break; }
		case'A': {dec[i] = 10; break; }
		case'B': {dec[i] = 11; break; }
		case'C': {dec[i] = 12; break; }
		case'D': {dec[i] = 13; break; }
		case'E': {dec[i] = 14; break; }
		case'F': {dec[i] = 15; break; }
		default: {cout << "Please enter the number within the range of hexadecimal numbers"; }
		
		}
	int Remainder;
	int i = 0;
	Remainder = Result[i] % 16;
	if (Result[i] != 0)
	{
		Result[i] = Result[i] + Remainder;
		cout << "The Result of Addition is:" << Result;
	}
	else
	{
		Result[i] = HexDec1[i] + HexDec2[i];
		cout << "The Result of Addition is:" << Result;
	}
		
}
// Amr Atia is creating a pull request
