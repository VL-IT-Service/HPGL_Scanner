# HPGL_Scanner
A C++ based Scanner for HPGL using a state design pattern

Version 1 will implement:

IN; (initialize plotter)

PU; (pen up)

PD; (pen down)

PU x,y; and PU x1,y1,x2,y2,<...>; (pen up and move for multiple coordinates)

PD x,y; and PD x1,y1,x2,y2,<...>; (pen down and move for multiple coordinates)

## State Design Pattern
State design pattern is implemented in abstract class **HPGLState** 

The states are documented in the file [HPGL_Scanner.pdf](https://github.com/VL-IT-Service/HPGL_Scanner/blob/main/HPGL_Scanner.pdf)

The class **Plotter** represents the plotter which is supposed to draw the HPGL file. The implementation is a dummy and you need to exchange this with your own real plotter control class which needs to implement all the methods of Plotter.
