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

**Número:** 933  
**Dificultad:** Easy  
**Tema:** Estructuras lineales  
**Estructura utilizada:** Queue (Cola)

### Descripción del problema

El problema consiste en registrar solicitudes que se realizan en diferentes momentos y contar cuántas ocurrieron durante los últimos 3000 milisegundos.

Cada vez que llega una nueva solicitud, debemos contar solamente las que se encuentran dentro de ese intervalo de tiempo, incluyendo la solicitud actual.

### Solución

Para resolver el problema utilicé una cola circular implementada con un arreglo.

Primero declaré un arreglo de 3001 posiciones para guardar los tiempos de las solicitudes. También utilicé tres variables: `inicio`, para indicar la posición de la solicitud más antigua; `fin`, para saber dónde guardar la siguiente solicitud; y `cantidad`, para llevar el conteo de los elementos.

En la función `ping()` calculo el tiempo mínimo permitido restando 3000 al tiempo actual.

Después utilizo un ciclo `while` para revisar si la solicitud más antigua ya quedó fuera del intervalo. Si es así, avanzo la posición de `inicio` y disminuyo la cantidad de elementos.

Para mover las posiciones utilizo el operador módulo `%`, que permite regresar al inicio del arreglo cuando se llega al final.

Por último, guardo la nueva solicitud en la posición `fin`, avanzo esa posición y aumento el contador.

La función regresa la cantidad de solicitudes que siguen dentro del tiempo permitido.

### Ejemplo

**Entrada:**

```text
ping(1)
ping(100)
ping(3001)
ping(3002)
```

**Salida:**

```text
1, 2, 3, 3
```

En la última solicitud, el tiempo es 3002. Como solamente cuentan las solicitudes desde el tiempo 2 hasta el 3002, eliminamos la solicitud del tiempo 1 porque ya quedó fuera del intervalo.

Por eso la función regresa 3.

### Análisis de complejidad

**Función: ping()**

- **Mejor caso: O(1)**
- **Caso promedio: O(1)**
- **Peor caso: O(1)**


### Código

[Ver solución en C++](933_Number_of_Recent_Calls.cpp)

### Validación en LeetCode

**Mi perfil:** https://leetcode.com/u/ErickMunoz/

**Problema:** https://leetcode.com/problems/number-of-recent-calls/

**Mi solución:** https://leetcode.com/problems/number-of-recent-calls/solutions/8599581/solucion-problema-933-by-erickmunoz-32ne

### Video explicativo

En este video explico cómo resolví el problema 933. Number of Recent Calls utilizando una Cola (Queue)
**Video:** https://drive.google.com/file/d/1KChex-lP1ltZl2UaK7xh8oGNO3bYNIHz/view?usp=sharing
