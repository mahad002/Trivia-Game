#include "Question.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*Question::Question()
{
	Tquestion = "";
	options[0] = "";
	options[1] = "";
	options[2] = "";
	options[3] = "";
	ans = -1;
}*/

void Question ::rquestions(Question Q[]) //read the questions from file
{
	string getcontent;
	fstream Questions("Questions.txt");
	int i = 0;
	if (!Questions)
	{
		cout << "Error!" << endl;
	}
	else
	{
		while (!Questions.eof())
		{
			getline(Questions, getcontent);
			Q[i].setTquestion(getcontent);
			getline(Questions, getcontent);
			Q[i].setoption1(getcontent);
			getline(Questions, getcontent);
			Q[i].setoption2(getcontent);
			getline(Questions, getcontent);
			Q[i].setoption3(getcontent);
			getline(Questions, getcontent);
			Q[i].setoption4(getcontent);
			getline(Questions, getcontent);
			int x = stoi(getcontent);
			Q[i].setAns(x);
			i++;
		}
	}
	Questions.close();

}

int Question :: DisplayQuestion(Question Q[], int index, int &score)
{
	cout << "-----------------------------------------------------------------\n";
	cout << " Question " << index + 1 << endl;
	cout << "-----------------------------------------------------------------\n";
	cout << Q[index].getTquestion();
	cout << "\nOptions:\n";
	cout << Q[index].getoption1() << endl;
	cout << Q[index].getoption2() << endl;
	cout << Q[index].getoption3() << endl;
	cout << Q[index].getoption4() << endl;
	cout << "-----------------------------------------------------------------\n";

	int x;
	cout << "Enter Ans: ";
	cin >> x;
	while (x <= 0 || x > 4) {
		cout << "Invalid Answer! \nKindly Renter: \n";
		cin >> x;
		cout << "-----------------------------------------------------------------\n";
	}
	if (x == Q[index].getAns()) {
		score++;
		cout << "Correct Answer!\n";
	}
	else {
		cout << "Press 0 to see the answer!" << endl;
		cin >> x;

		if (x == 0)
		{
			cout << "Answer: \n";
			cout << Q[index].getAns() << endl;
		}
	}
	cout << "-----------------------------------------------------------------\n";
	return score;
}

