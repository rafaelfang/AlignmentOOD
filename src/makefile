alignmentOOD: HHSearchParser.o HHSearchAlignment.o  Parser.o BlastParser.o BlastAlignment.o Alignment.o Native.o Point.o Query.o Template.o Driver.o
	g++  HHSearchParser.o HHSearchAlignment.o  Parser.o BlastParser.o BlastAlignment.o Alignment.o Native.o Point.o Query.o Template.o Driver.o -o alignmentOOD

Parser.o:Parser.cpp
	g++ -c Parser.cpp

HHSearchParser.o: HHSearchParser.cpp
	g++ -c HHSearchParser.cpp
	
BlastParser.o:BlastParser.cpp
	g++ -c BlastParser.cpp
	
Alignment.o: Alignment.cpp
	g++ -c Alignment.cpp

HHSearchAlignment.o: HHSearchAlignment.cpp
	g++ -c HHSearchAlignment.cpp
	
BlastAlignment.o: BlastAlignment.cpp
	g++ -c BlastAlignment.cpp	

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