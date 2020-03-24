/* C867 Melissa Hunter #001182393*/

#include "NetworkStudent.h"
#include "degree.h"

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, 
	int daysInCourse3, Degree degree) : Student(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree) {}

Degree NetworkStudent::getDegreeProgram() {
	return NETWORK;
}