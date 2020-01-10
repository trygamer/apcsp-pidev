
#include <stdio.h>
#include <string.h>
//#include "student.h"

struct Student 
{
  char firstName[100];
  char lastName[50];
  int age;
  int studentID;
};

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student->firstName, student->lastName);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentID);
}

int main()
{
  char input[100];
  struct Student students[5];
  char ans;
  int count = 0;

	while(count <5){

    printf("Enter in Student Y/N\n");
    fgets(input, 256,stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "Y") == 0)
      {
	char firstName[256];
	char lastName[256];
	int age;
	int studentID;
	printf("What is the first name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstName);
	printf("What is the last name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastName);
	printf("What is the age:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &age);
	printf("Enter student ID\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentID);
	strcpy(students[count].firstName, firstName);
	strcpy(students[count].lastName, lastName);
	 age = students[count].age;
	 studentID =  students[count].studentID;
	count++;
    }
  else{

  for(int i=0;i<count;i++){
    printStudent(&students[i]);
}
  }
}
}

