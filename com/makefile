parser: scanner.cpp parser.cpp Node.h symbol.h innercode.h
	g++ -std=c++11 scanner.cpp parser.cpp Node.cpp symbol.cpp  innercode.cpp -o parser 

scanner:scanner.cpp
	g++ -o scanner.cpp

scanner.cpp: scanner.l
	flex -o scanner.cpp scanner.l 

parser.cpp: parser.y
	bison -vdty parser.y -oparser.cpp

clean:
	rm  parser.cpp parser parser.hpp parser.output scanner.cpp

run:
	make && ./parser test.txt


