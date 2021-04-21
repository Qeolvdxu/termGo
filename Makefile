SOURCE_PATH = ./textbaduk2/src
HEADER_PATH = ./textbaduk2/include

SOURCE_FILES = ./termGo.cpp ${SOURCE_PATH}/Stone.cpp ${SOURCE_PATH}/Board.cpp ${SOURCE_PATH}/BoardGUI.cpp

HEADER_FILES = 	${HEADER_PATH}/Stone.hpp ${HEADER_PATH}/Board.hpp

OUT	= termGo
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(HEADER_FILES) $(SOURCE_FILES) $(LFLAGS)

testBoard.o: testBoard.cpp
	$(CC) $(FLAGS) testBoard.cpp 

Stone.o: Stone.cpp
	$(CC) $(FLAGS) Stone.cpp 

Board.o: Board.cpp
	$(CC) $(FLAGS) Board.cpp 


clean:
	rm -f $(OBJS) $(OUT)
