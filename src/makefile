alignmentOOD: BlastParser.o Alignment.o Native.o Point.o Query.o Template.o Driver.o
	g++  BlastParser.o Alignment.o Native.o Point.o Query.o Template.o Driver.o -o alignmentOOD

BlastParser.o:BlastParser.cpp
	g++ -c BlastParser.cpp
	
Alignment.o: Alignment.cpp
	g++ -c Alignment.cpp
	
Native.o: Native.cpp
	g++ -c Native.cpp

Point.o:Point.cpp
	g++ -c Point.cpp
	
Query.o: Query.cpp
	g++ -c Query.cpp
	
Template.o: Template.cpp
	g++ -c Template.cpp
	
Driver.o: Driver.cpp
	g++ -c Driver.cpp
	

clean:
	rm *.o alignmentOOD