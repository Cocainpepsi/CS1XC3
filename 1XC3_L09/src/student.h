 /** @file student.h
 * @author Student
 * @date 31/3/2023
 * @brief The header file for student class
*/ 
/** \brief The student class.
 * 
 * This is the student class which stores information related to a student.
 */
typedef struct _student 
{ 
  char first_name[50]; /**< The first name of the student */
  char last_name[50];  /**< The last name of the srtudent */
  char id[11];         /**< student id */
  double *grades;      /**< The array of grades of the student */
  int num_grades;      /**< number of grades for this student */
} Student;
/** \brief adds a grade for given student
 * @param student The pointer to the student
 * @param grade The grade to be added
 * @return void
 * @see [student](struct__student.html)
 * @note the grade will be added to the array of the student grades.
 * @attention the current pointer of the grade array will be invalid. 
 * @warning the address of the grade array of the student will change.
*/
void add_grade(Student *student, double grade);
/** \brief gives the average of the grades of the given student
 * @param student The pointer to the student
 * @return the average of the grades of the student
 * @see [student](struct__student.html)
 * @note if there is no grade record for the student the method will return 0
 * @attention the average may change over time and need to be updated
 * @warning the null pointer for student will result in run time error
*/
double average(Student *student);
/** \brief prints information related to the student
 * @param student The pointer to the student
 * @return void
 * @see [student](struct__student.html)
 * @note it prints name, ID and grades of the student. It also prints the average of the grades of the student.
 * @attention 
 * @warning the null pointer for student will result in run time error
*/
void print_student(Student *student);
/** \brief creates a random student and initializes his information,
 *  It also creates a random list of grades for him
 * @param grades The number of grades for the created student
 * @return the pointer to created student
 * @see [student](struct__student.html)
 * @note the name and last name of the student will be selected from a list of 24 strings. The student will have a grade list of size grades
 * @attention the names and last names of repeated calls could include repitition
 * @warning the student codes are not unique.
*/
Student* generate_random_student(int grades); 
