
#include <stdio.h>

#include <string.h>

#include "student.h"

int main()



{



  char input[100];



  struct Student students[5];



  char ans;



  int count = 0;







	while(count <10){







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



	  students[count].age =age;



	  students[count].studentID = studentID;



	count++;



    }



  else{







  for(int i=0;i<count;i++){



    printStudent(&students[i]);



}



  }



}



}
