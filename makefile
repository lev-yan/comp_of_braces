all:comp_of_braces.cpp
	g++ comp_of_braces.cpp -o braces
	./braces
clean:
	rm braces
