Paradigma declarativo
En el paradigma de programación declarativo, los problemas deben ser descritos a la computadora mediante condiciones y proposiciones que se pueden combinar mediante reglas, y la solución es obtenida mediante métodos internos de control. En este paradigma el programador especifica qué debe realizarse más bien que cómo se debe realizar.

Para la resolución de un problema, se crean las descripciones que representan al dominio en el cual existe el problema a resolver y se plantea el problema como una pregunta que debe ser respondida bien con alguna de las unidades conceptuales iniciales o bien con una combinación válida de ellas.

En este paradigma la descripción de los problemas es más clara y concisa que en el paradigma imperativo, es posible describir problemas complejos con pocas líneas de código del lenguaje que permitan la solución de un gran número de problemas.

Además, con una programación adecuada, basta haber descrito un dominio de problemas de forma correcta y saber formular nuestro problema como una simple consulta en dicho dominio. La variedad de preguntas que se pueden responder con una única descripción del dominio de problemas concreto suele ser muy elevada.

Y principalmente, no se requiere diseñar un algoritmo específico que resuelva el problema.


Programación lógica
Dentro del paradigma declarativo se encuentra la programación lógica. La programación lógica estudia el uso de la lógica matemática para el planteamiento de problemas y el control sobre las reglas de inferencia para alcanzar la solución.
La lógica matemática es la manera más sencilla, para el intelecto humano, de expresar formalmente problemas complejos y de resolverlos mediante la aplicación de reglas, hipótesis y teoremas.

De esta forma, la programación lógica construye bases de conocimientos mediante hechos y reglas. Un hecho es una declaración, cláusula o proposición cierta o falsa, establece una relación entre objetos y es la forma más sencilla de sentencia. Una regla es una implicación o inferencia lógica que deduce nuevo conocimiento y permite definir nuevas relaciones a partir de otras ya existentes.

Ejemplo:

- Provincia(San Luis).
- PerteneceA(Villa Mercedes, San Luis)
Se establece el hecho de que San Luis es una provincia y Villa Mercedes pertenece a San Luis.

- MismaProvincia(x,y):- PerteneceA(x,z) ^ PerteneceA(y,z).
Se establece la regla : x e y pertenecen a la misma provincia si ambas cumplen la función PerteneceA para un mismo elemento z.
