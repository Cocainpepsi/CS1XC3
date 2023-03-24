all: library.c compile_
CC = gcc 
CFLAGS = -Wall -w
BUILD_DIR = /src/build/
SRC_DIR = /src/

compile_: library.c
	echo $^
	${CC} ${CFLAGS} .${SRC_DIR}max.c .${BUILD_DIR}library.o -o  .${BUILD_DIR}max
	${CC} ${CFLAGS} .${SRC_DIR}multiply.c .${BUILD_DIR}library.o -o .${BUILD_DIR}multiply 
	${CC} ${CFLAGS} .${SRC_DIR}square.c .${BUILD_DIR}library.o -o .${BUILD_DIR}square 

library.c:
	./check_build.sh 
	${CC} -c .${SRC_DIR}$@ -o .${BUILD_DIR}library.o 

clean:
	-rm -f .${BUILD_DIR}*.o 
	-rm -f .${BUILD_DIR}max 
	-rm -f .${BUILD_DIR}multiply
	-rm -f .${BUILD_DIR}square
	-rm -f -r test
	
test: all
	./check_test.sh
	.${BUILD_DIR}./square inches  <./test_data/square_input.txt> ./test/square_output.txt
	diff ./test/square_output.txt ./test_data/square_expected.txt || echo 'Test Not Pass for Square'
	.${BUILD_DIR}./multiply 2  <./test_data/multiply_input.txt> ./test/multiply_output.txt
	diff ./test/multiply_output.txt ./test_data/multiply_expected.txt || echo 'Test Not Pass for Multiply'
	.${BUILD_DIR}./max 4 3 2 1 5 7 8 10 6 > ./test/max_output.txt
	diff ./test/max_output.txt ./test_data/max_expected.txt || echo 'Test Not Pass for Max'
	
	
