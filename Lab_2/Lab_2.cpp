#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Hello dude!\n";
	cout << "Enter a number: ";
    cin >> number;

    if (number == 0)
    {
		cout << "The number 0 has not any divisors";
        return 0;
    }

	cout << "Divisors of " << number << " are: ";

    int limit = abs(number);
    for (int i = 1; i <= limit; i++)
    {
        if (limit % i == 0)
        {
            cout << -i << " " << i << " ";
        }
    }
}