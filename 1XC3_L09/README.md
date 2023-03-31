# Lab 9 Project - Documentation

Last update: 31/3/2023
# Description 
In this project we are going to use several tools for creating documentations.
The main tool used in this project is doxygen which given commentated code files, generates
beautiful documentations in html and latex formats.
The program defines classes for [student](struct__student.html)s  and [course](struct__course.html)s and also implements some related functions. The program implements methods to :
- create a student
- enroll a student in a course
- get the average of a student
- print student information

It also creates methods for course that:
- create a course
- enroll a student in a course
- get the top student in a course
- print course information
- get the passing students

# Usage 
To run and use this project you can use the make instructions as follows:

## requirement
You need the following tools and softwares to run this program:
- make tools  - to build the files and compile them using makefile
- gcc   - to compile C code files
- doxygen  - to generate documentation files.
- latex (optional) - to preview latex documentation
## installation instructions
compiles the code files and creates documentations.
```bash
make 
```
## configurating instructions
There is no special configuration for this version of the program.
## operating instructions
### clean
removes object and executive files
```bash
make clean
```
### documentation
creates documentation files using doxigen tools.
```bash
make docs
```
# Troubleshooting
If you had any problems please contact [@student](https://www.github.com/student)
# Changelog
This is the version 1.1.1 of the program.

## Authors

- [@student](https://www.github.com/student)
