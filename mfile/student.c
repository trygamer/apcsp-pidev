#include <stdio.h>

#include <string.h>

#include "student.h"

struct Student 



{



int null;



  int age;



 char firstName[256];



  int studentID;



  char lastName[256];



};







void printStudent(struct Student* student)



{



  printf("First Name: %s \n", student->firstName);

  printf("Last Name %s\n",  student->lastName);



  printf("  Age: %d\n", student->age);



  printf("  Student ID: %d\n", student->studentID);



}
