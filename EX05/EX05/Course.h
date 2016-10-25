#pragma once
#ifndef COURSE_h
#define Course_h
#include <string>
using namespace std;


class Course {
public:
	Course(const string&courseName, int capacity);
	~Course();
	Course::Course(const Course& source);
	void doublearray();
	void clearStudents();
	string getCourseName() const;
	void addStudent(const string&name);
	void dropStudent(const string&name);
	string*getStudents() const;
	int getNumberOfStudents() const;

private:
	string courseName;
	string*students;
	int numberOfStudents;
	int capacity;
};

#endif