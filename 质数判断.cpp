#include <iostream>

using namespace std;

bool prime_judge = 0;

int possible_factor;

int prime(int usr_input) 
{
	
	for (int i = 2; i <= usr_input; i++)
	{
		if (usr_input % i == 0 && i != 1 && i != usr_input)
		{
			prime_judge = 0;
			possible_factor = i;
			break;
		}
		else if(usr_input == i)
		{
			prime_judge = 1;
		}
	}
	return prime_judge,possible_factor;
}
int main() 
{
	int input = 2;

	int l;
	
	int sum = 0;

	int num = 0;
	
	cin >> l;

	while (sum <= l)
	{
		prime(input);
		if (prime_judge == 1)
		{
			sum = sum + input;
			if (sum > l)
			{
				break;
			}
			else 
			{
				cout << input << endl;
				num++;
				
			}
			
		}
		input++;
	}

	cout << num << endl ;
	
	return 0;
}

