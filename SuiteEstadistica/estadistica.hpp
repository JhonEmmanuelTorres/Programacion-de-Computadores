#ifndef ESTADISTICA_HPP_INCLUDED
#define ESTADISTICA_HPP_INCLUDED

double max( double *x, int n );

double min( double* x, int n );

double rango( double* x, int n );

double media( double* x, int n );

double mediaGeometrica( double* x, int n );

double mediaArmonica( double* x, int n );

double mediana( double* x, int n );

double moda( double* x, int n );

double varianza( double* x, int n );

double desviacionEstandar( double* x, int n );

double rangoIntercuartilico( double* x, int n );

double asimetriaPearson( double* x, int n );

double asimetriaBowley( double* x, int n );

int permutacion( int n, int k );

int combinacion( int n, int k );

#endif // ESTADISTICA_HPP_INCLUDED
