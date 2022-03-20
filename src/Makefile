hpgl : main.cpp plotter.o hpglstate.o hpglscanner.o hpglstate_Start.o hpglstate_I.o hpglstate_IN.o hpglstate_Error.o hpglstate_P.o hpglstate_X.o hpglstate_ExpectNextX.o  hpglstate_ExpectY.o hpglstate_Y.o hpglstate_PU_PD.o
	g++ -g -o hpgl main.cpp plotter.o hpglstate.o hpglscanner.o hpglstate_Start.o hpglstate_I.o hpglstate_IN.o hpglstate_Error.o hpglstate_P.o hpglstate_X.o hpglstate_ExpectNextX.o  hpglstate_ExpectY.o hpglstate_Y.o hpglstate_PU_PD.o


plotter.o : plotter.hpp plotter.cpp
	g++ -g -c plotter.cpp

hpglstate.o : hpglstate.hpp hpglstate.cpp hpglscanner.hpp 
	g++ -g -c hpglstate.cpp

hpglscanner.o : hpglscanner.hpp hpglscanner.cpp hpglstate.hpp
	g++ -g -c hpglscanner.cpp

hpglstate_Start.o : hpglstate_Start.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_I.hpp hpglstate_P.hpp hpglstate_I.o hpglstate_P.o 
	g++ -g -c hpglstate_Start.cpp

hpglstate_I.o : hpglstate_I.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_IN.hpp
	g++ -g -c hpglstate_I.cpp 

hpglstate_IN.o : hpglstate_IN.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_Start.hpp
	g++ -g -c hpglstate_IN.cpp 

hpglstate_Error.o : hpglstate_Error.hpp hpglstate.hpp hpglstate.o  hpglstate_Start.hpp hpglstate_Start.o
	g++ -g -c hpglstate_Error.cpp

hpglstate_P.o : hpglstate_P.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_PU_PD.hpp
	g++ -g -c hpglstate_P.cpp

hpglstate_X.o : hpglstate_X.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_ExpectY.hpp
	g++ -g -c hpglstate_X.cpp

hpglstate_ExpectY.o : hpglstate_ExpectY.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_Y.hpp 
	g++ -g -c hpglstate_ExpectY.cpp

hpglstate_ExpectNextX.o : hpglstate_ExpectNextX.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_X.hpp 
	g++ -g -c hpglstate_ExpectNextX.cpp

hpglstate_Y.o : hpglstate_Y.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_ExpectNextX.hpp 
	g++ -g -c hpglstate_Y.cpp

hpglstate_PU_PD.o : hpglstate_PU_PD.hpp hpglstate.hpp hpglstate.o  hpglstate_Error.hpp hpglstate_Start.hpp hpglstate_X.hpp 
	g++ -g -c hpglstate_PU_PD.cpp



clean:
	rm -f *.o
	rm -f hpgl
	
	
