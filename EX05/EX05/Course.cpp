#include <iostream>
#include "Course.h"
using namespace std;



Course::Course(const string&courseName, int capacity) {
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}


void Course::doublearray() {
	if (numberOfStudents == sizeof(string)){
		string* newlist = new string[2 * capacity];
			for (int i = 0; i < numberOfStudents; i++)
			{
				newlist[i] = students[i];
			}
		string*students = newlist;
		}
}

Course::Course(const Course& source)
{
	
	students = source.students;
	courseName = source.courseName;
	numberOfStudents = source.numberOfStudents;
	capacity = source.capacity;


}


Course::~Course() {
	delete[] students;

}
string Course::getCourseName() const {
	return courseName;
}
void Course::addStudent(const string&name) {
	students[numberOfStudents] = name;
	numberOfStudents++;
	doublearray();
}
void Course::dropStudent(const string&name) {
	int hole = -1;
	bool studentexist = false;
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
		{
			hole = i;
			studentexist = true;
		}
		}
	if (studentexist == true)
	{
		for (int i = hole; i < numberOfStudents; i++)
			students[i] = students[i + 1];
		numberOfStudents--;
	}
	else if (studentexist == false)
		cout << "\n\nstudent removed does not exist\n";
}
void Course::clearStudents() {
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = "";
	}
	numberOfStudents = 0;
}


string* Course::getStudents() const {
	return students;
}
int Course::getNumberOfStudents() const {
	return numberOfStudents;
}
