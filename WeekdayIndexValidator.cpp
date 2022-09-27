// Source of logic assistance: 
// Gaddis, T. (2018). Starting out with C++: From control structures through objects. Pearson. 

#include <iostream> // To use cin/cout
using namespace std; 

const int MIN_VAL = 1, MAX_VAL = 7;

const string TITLE = "Weekday Index Validator Program";
const string AUTHOR_LINE = "By Forrest Moulin";

int main()
{
	// User input integer initialization
	int userInput;
	// Pseudo boolean character Y/N
	char keepLooping = 'Y';
	// Booleans for first run and while loop termination
	bool firstRun = true, isDone = false;

	cout << TITLE << endl
		<< AUTHOR_LINE << endl << endl;

	// Loop until user quits the program
	while (isDone == false)
	{
		cout << "Please enter a valid weekday index integer from 1 to 7,"
			<< endl << "representing a day of the week:" << endl
			<< "1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat." << endl
			<< "NOTE: Only enter the integer."
			<< endl << endl;

		cin >> userInput;
		// Make note of first loop iteration
		firstRun = false;

		// Inner loop prompts user to provide a valid integer
		while (userInput < MIN_VAL || userInput > MAX_VAL)
		{
			if (firstRun == false)
			{
				cout << endl << userInput << " is invalid." << endl;
			}
			cout << "Please enter a valid weekday index integer from 1 to 7,"
				<< endl << "representing a day of the week:" << endl
				<< "1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat."
				<< endl << endl;
			// Get user input another time
			cin >> userInput;
		}

		// Print weekday index day string value
		cout << endl << userInput << " is the weekday index for ";
		// Selection logic based on user input
		switch (userInput)
		{
		case 1:
			cout << "Sunday." << endl << endl;
			break;
		case 2:
			cout << "Monday." << endl << endl;
			break;
		case 3:
			cout << "Tuesday." << endl << endl;
			break;
		case 4:
			cout << "Wednesday." << endl << endl;
			break;
		case 5:
			cout << "Thursday." << endl << endl;
			break;
		case 6:
			cout << "Friday." << endl << endl;
			break;
		case 7:
			cout << "Saturday." << endl << endl;
			break;
		default:
			cout << "... SWITCH STATEMENT DEFAULT ERROR OCCURRED." 
				<< endl << endl;
		}

		cout << "Would you like to continue?" << endl
			<< "Please enter Y for yes or enter N to quit."
			<< endl << endl;

		cin >> keepLooping;

		// Check for valid character entry
		while (keepLooping != 'Y' && keepLooping != tolower('Y')
			&& keepLooping != 'N' && keepLooping != tolower('N'))
		{
			cout << endl << "Invalid entry. "
				<< "Please enter Y for yes or N to quit."
				<< endl << endl;
			cin >> keepLooping;
		}
		// If user wants to continue
		if (keepLooping == 'Y' || keepLooping == tolower('Y')) {
			cout << "Starting over..." << endl << endl;
			// Reset bool for next iteration
			firstRun = true;
			// Start the outer loop again
			continue;
		}
		// User wants to close the program
		else if (keepLooping == 'N' || keepLooping == tolower('N'))
		{
			cout << endl << "Closing the program..." << endl
				<< "Thanks for using the Weekday Index Validator." << endl
				<< "Until next time!" << endl;
			// Close the program by breaking the loop
			break;
		}
	}
}
/*
* CONSOLE OUTPUT - INDICES 1-7 VALIDATED
* Weekday Index Validator Program
* By Forrest Moulin
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* -1
*
* -1 is invalid.
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
*
* 0
*
* 0 is invalid.
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
*
* 100
*
* 100 is invalid.
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
*
* 1
*
* 1 is the weekday index for Sunday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 2
*
* 2 is the weekday index for Monday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* Y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 3
*
* 3 is the weekday index for Tuesday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 4
*
* 4 is the weekday index for Wednesday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* Y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 5
*
* 5 is the weekday index for Thursday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 6
*
* 6 is the weekday index for Friday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* Y
* Starting over...
*
* Please enter a valid weekday index integer from 1 to 7,
* representing a day of the week:
*
* 1 Sun, 2 Mon, 3 Tue, 4 Wed, 5 Thu, 6 Fri, 7 Sat.
* NOTE: Only enter the integer.
*
* 7
*
* 7 is the weekday index for Saturday.
*
* Would you like to continue?
* Please enter Y for yes or enter N to quit.
*
* n
*
* Closing the program...
* Thanks for using the Weekday Index Validator.
* Until next time!
*/
