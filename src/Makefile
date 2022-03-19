hpgl : main.cpp plotter.hpp plotter.o hpglstate.hpp hpglstate.o hpglscanner.hpp hpglscanner.o
	g++ -g -o hpgl main.cpp plotter.o hpglstate.o hpglscanner.o


plotter.o : plotter.hpp plotter.cpp
	g++ -g -c plotter.cpp

hpglstate.o : hpglstate.hpp hpglstate.cpp hpglscanner.hpp 
	g++ -g -c hpglstate.cpp

hpglscanner.o : hpglscanner.hpp hpglscanner.cpp hpglstate.hpp
	g++ -g -c hpglscanner.cpp

clean:
	rm -f *.o
	rm -f hpgl
	
	
