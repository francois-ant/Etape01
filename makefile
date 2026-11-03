Test1:	Test1.cpp Event.o
	g++ -o Test1 Test1.cpp Event.o #-D DEBUG

Event.o:	Event.cpp Event.h
	g++ -c -o Event.o Event.cpp #-D DEBUG

clean:
	rm -f *.o Test1