#pragma once

#include <iostream>

using namespace std;

class Question {
private: 
	string Tquestion;
	string options[4];
	int ans;
public:

	string getTquestion() {
		return Tquestion;
	}
	void setTquestion(string Tq) {
		Tquestion = Tq;
	}


	string getoption1() {
		return options[0];
	}
	void setoption1(string a) {
		options[0] = a;
	}


	string getoption2() {
		return options[1];
	}
	void setoption2(string b) {
		options[1] = b;
	}


	string getoption3() {
		return options[2];
	}
	void setoption3(string c) {
		options [2] = c;
	}


	string getoption4() {
		return options[3];
	}
	void setoption4(string d) {
		options[3] = d;
	}


	int getAns() {
		return ans;
	}
	void setAns(int a) {
		ans = a;
	}

	//Question();
	static void rquestions(Question[]);
	int DisplayQuestion(Question [], int, int&);
};