CC = g++
CFLAGS = -I. -Wall -Wextra -Werror -O2 -pedantic -std=c++11
DEPS = logic.hpp
OBJ =  main.o logic.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

app: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm *.o app
