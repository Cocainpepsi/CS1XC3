/** @file course.h
 * @author Xingao Wu
 * @date 31/3/2023
 * @brief The header file for course class
*/ 
#include "student.h"
#include <stdbool.h> 
/** \brief The course class.
 * 
 * This is the course class which stores information related to a course.
 */
typedef struct _course 
{
  char name[100]; /**< The name of the course */
  char code[10];  /**< The code of the course */
  Student *students;  /**< The array for enrolled students in this course */
  int total_students; /**< Total number of enrolled students */
} Course;
/** \brief  enrolls a student in a course
 * @param course The pointer to the course to enroll the student
 * @param student The pointer to the student to enroll in the course
 * @return void
 * @see [course](struct__course.html) and [student](struct__student.html)
 * @note the course will create a copy of the student
 * @attention the course and student pointers should not be null
 * @warning the null pointers for parameters will result in run time error
*/
void enroll_student(Course *course, Student *student);
/** \brief  prints the course information
 * @param course The pointer to the course
 * @return void
 * @see [course](struct__course.html) 
 * @note it prints the name and the code of the course and a list of enrolled students
 * @attention the course pointer should not be null
 * @warning the null pointers for parameters will result in run time error
*/
void print_course(Course *course);
/** \brief  returns a pointer to the top student in the course
 * @param course The pointer to the course 
 * @return a pointer to the top student
 * @see [course](struct__course.html) and [student](struct__student.html)
 * @note The top student is based on the average of the grades
 * @attention the course pointers should not be null. If there is no enrolled student it will return NULL.
 * @warning If there is no enrolled student it will return NULL.
*/
Student *top_student(Course* course);
/** \brief returns an array of students who are passing the course
 * @param course The pointer to the course
 * @param total_passing The size of the returned array (the number of passing students)
 * @return a pointer to the array of passing students.
 * @see [course](struct__course.html) and [student](struct__student.html)
 * @note it creates an array of the passed students and returns the address.
 * @attention if there is no passing student it will return NULL.
 * @warning the method will return NULL when there is no passing student. The value of total_passing will be changed in the method.
 */
Student *passing(Course* course, int *total_passing);

