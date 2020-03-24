/* C867 Melissa Hunter #001182393*/
#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include "Student.h"
#include "degree.h"

using namespace std;

class NetworkStudent : public Student {
public:
	Degree getDegreeProgram() override;
	NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, 
		Degree degree);
private:
	Degree degree;

};

#endif
