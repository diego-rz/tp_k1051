/*
*Punto 1 de la seccion 1 del trabajo practico
*Programa simple en prolog que utiliza hechos y reglas
*2/8/2016
*/

ladron(walter).
ladron(jesse).
policia(hank).
policia(steve).

socios(X,Y):-(ladron(X),ladron(Y));(policia(X),policia(Y)).
enemigos(X,Y):- (ladron(X),policia(Y));(policia(X),ladron(Y)).

mensaje:-
  nl,nl,write('Personas: walter, jesse, hank, steve.'),nl,
  write('Funciones: ladron(x), policia(x), enemigos(x,y), socios(x,y)'),nl,nl,nl.
:-mensaje.
