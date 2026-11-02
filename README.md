# Evidencia de Problemas

## Descripción

En esta evidencia publicare tres problemas de LeetCode utilizando C++.

Los problemas se seleccionaron con dos niveles de dificultad Easy y uno Medium.

## Problema 1: Minimum Number Game

**Número:** 2974  
**Dificultad:** Easy  
**Tema:** Algoritmos de ordenamiento  
**Algoritmo utilizado:** Bubble Sort

### Descripción del problema

El problema consiste en un juego entre Alice y Bob. En cada ronda, Alice toma el número más pequeño del arreglo y Bob toma el siguiente número más pequeño. Después, los números se agregan al resultado colocando primero el de Bob y luego el de Alice.

Este proceso se repite hasta utilizar todos los números.

### Solución

Para resolver el problema utilicé el algoritmo Bubble Sort, que permite ordenar los números de menor a mayor comparando elementos consecutivos e intercambiándolos cuando es necesario.

Una vez ordenado el arreglo, utilizo otro ciclo que avanza de dos en dos. En cada vuelta guardo los números correspondientes a Alice y Bob, y después intercambio sus posiciones para seguir las reglas del juego.

Finalmente, regreso el arreglo con los números en el orden solicitado.

### Ejemplo

**Entrada:**
```text
nums = [5, 4, 2, 3]
```

**Arreglo ordenado:**
```text
[2, 3, 4, 5]
```

**Salida:**
```text
[3, 2, 5, 4]
```

### Análisis de complejidad

**Función: numberGame()**

- **Mejor caso: O(n²)**
- **Caso promedio: O(n²)**
- **Peor caso: O(n²)**

Se utiliza el algoritmo Bubble Sort para ordenar los números. Su complejidad es O(n²) debido a que utiliza dos ciclos anidados para comparar los elementos del arreglo.

En los tres casos la complejidad es la misma, ya que el algoritmo realiza las comparaciones sin importar si los números ya están ordenados o no.

Después se utiliza otro ciclo para intercambiar las parejas de números, con complejidad O(n), pero esto no modifica la complejidad total de la función.


### Código

[Ver solución en C++](2974_Minimum_Number_Game.cpp)

### Validación en LeetCode

**Enlaces de LeetCode**

**Mi perfil:** https://leetcode.com/u/ErickMunoz/

**Problema:** https://leetcode.com/problems/minimum-number-game/

**Mi solución:** https://leetcode.com/problems/minimum-number-game/solutions/8590559/solucion-problema-2974-by-erickmunoz-42cr

### Video explicativo

En este video explico cómo resolví el problema
2974. Minimum Number Game utilizando Bubble Sort.

[Ver video explicativo](https://drive.google.com/file/d/1JJAK33H-Ll-844BtJ7oLC0Gt6mdrkFSV/view?usp=sharing)




## Problema 2: Number of Recent Calls
Número: 933
Dificultad: Easy
Tema: Estructuras lineales
Estructura utilizada: Queue (Cola)

Descripción del problema

El problema consiste en registrar solicitudes que se realizan en diferentes momentos y contar cuántas ocurrieron durante los últimos 3000 milisegundos.

Cada vez que llega una nueva solicitud, debemos contar solamente las que se encuentran dentro de ese intervalo de tiempo, incluyendo la solicitud actual.

Solución

Para resolver el problema utilicé una cola (queue), porque permite guardar las solicitudes en el orden en que van llegando y eliminar primero las más antiguas.

Primero, la función ping() recibe el tiempo de una solicitud y lo agrega a la cola utilizando push().

Después se utiliza un ciclo while para revisar si la solicitud más antigua ya quedó fuera del intervalo de los últimos 3000 milisegundos. Si ya no cuenta, se elimina utilizando pop().

Este proceso se repite hasta que la solicitud más antigua todavía esté dentro del tiempo permitido.

Finalmente, utilizo size() para regresar la cantidad de solicitudes que quedan en la cola.

Ejemplo

Entrada:

ping(1)
ping(100)
ping(3001)
ping(3002)

Salida:

1, 2, 3, 3

En la última solicitud, el tiempo es 3002. Como solo cuentan las solicitudes desde el tiempo 2 hasta el 3002, eliminamos la solicitud del tiempo 1 porque ya no está dentro del intervalo.

Por eso la función regresa 3.

Análisis de complejidad

Función: ping()

Mejor caso: O(1)

Caso promedio amortizado: O(1)

Peor caso general: O(n)

En el mejor caso solamente se agrega una solicitud y se regresa el tamaño de la cola, sin necesidad de eliminar elementos.

En el peor caso general, el ciclo while puede eliminar varias solicitudes antiguas, por lo que puede realizar hasta n eliminaciones.

El costo amortizado es O(1), porque cada solicitud se agrega una vez y se elimina como máximo una vez.

En las condiciones específicas de LeetCode, los tiempos son enteros crecientes y el intervalo es fijo de 3000 milisegundos. Por eso, la cola puede guardar como máximo 3001 solicitudes y el peor caso también queda acotado por O(1).

Complejidad espacial: O(n)

Se utiliza una cola para almacenar las solicitudes recientes, por lo que, en el análisis general, la memoria depende de cuántos elementos contiene.

En este problema, el límite de 3001 solicitudes hace que el espacio también esté acotado por O(1) bajo las restricciones específicas de LeetCode.

Código

Ver solución en C++

Validación en LeetCode

Mi perfil: https://leetcode.com/u/ErickMunoz/

Problema: https://leetcode.com/problems/number-of-recent-calls/

Mi solución: Pendiente de agregar.

Video explicativo

En este video explico cómo resolví el problema 933. Number of Recent Calls utilizando una cola para registrar las solicitudes y eliminar las que ya no están dentro del intervalo de tiempo.

Video: Pendiente de agregar.


