/* C867 Melissa Hunter #001182393*/
#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "degree.h"

using namespace std;

class Roster {
public:
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, 
		Degree degree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	Roster();
private:
	vector<Student*> classRosterArray;
};

#endif