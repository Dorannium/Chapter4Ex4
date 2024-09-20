/* Title: CHapter 4 Exercise 4 - Making Decision
 File name: Chapter4Ex4
 Progammer: Cody Drumheller
 Professor: Mark Goldstein
 Date:20240920
 Requirements:





*/

#include <iostream>
using namespace std;



int main()
{
	int numberBooks; 
	cout << "How many books did you purchase?";
	cin >> numberBooks;
	if (numberBooks >= 0)

	{
		if (numberBooks == 0)

			cout << " YOu have earned NO points " << endl;
		else if (numberBooks == 1)
			cout << "You have earned 5 points" << endl;
		else if (numberBooks == 2)
			cout << "You have earned 15 points" << endl;
		else if (numberBooks == 3)
			cout << "You have earned 30 points" << endl;
		else
			cout << "You have earned 60 points" << endl;
	}
	else
		cout << "please enter a valid number";

}

