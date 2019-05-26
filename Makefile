CC = g++
EXECUTABLE = bin/main.out
CFLAGS = -Wall -Werror -c -MD
SOURCES = $(wildcard $(addprefix src/,*.cpp))
OBJECTS = $(patsubst $(addprefix src/, %.cpp),$(addprefix build/, %.o),$(wildcard $(addprefix src/, *.cpp)))
DEPENDENCIES = $(patsubst $(addprefix build/, %.o), $(addprefix build/, %.d), $(wildcard $(addprefix build/, *.o)))

all : $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS)
	$(CC) $^ -o $@ -std=c++11

build/%.o : src/%.cpp
	$(CC) $(CFLAGS) $< -o $@ -std=c++11

.PHONY : clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(DEPENDENCIES)

.PHONY :test
test: bin/tester

bin/tester : test/main.o 
	gcc -Wall -Werror test/main.o -o bin/tester -lm

test/main.o: test/main.c
	gcc -Wall -Werror -c -I party -I src test/main.c -o test/main.o
=======
>>>>>>> 7819caa665b2a94fcbc3315f36aab3fef66e01b7
