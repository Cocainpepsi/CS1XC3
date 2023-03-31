/** @file main.c
 * @author Xingao Wu
 * @date 31/3/2023
 * @brief The main codes of the project 
*/ 
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"
/** \brief This function creates a course and then enrolls 20 random students with 8 grades in them.
 * It prints the course information, then the information for top student. It also computes and
 * prints total number of passed students and prints informations of each passed student.
 * 
 * @returns void.
 */
int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");

  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}
