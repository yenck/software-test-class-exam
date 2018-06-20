all: exam

GCOVFLAGS += -fprofile-arcs -ftest-coverage

ASANFLAGS += -fsanitize=address

exam: main.cpp
	g++ $(ASANFLAGS) $(GCOVFLAGS) main.cpp -o exam

test:
	echo "abc" | ./exam

gcov:
	gcov main.cpp

exam-afl: main.cpp
	...... -o exam-afl

fuzz: exam-afl
	......

clean:
	rm exam exam-afl *.gcov *.gcda *.gcno
