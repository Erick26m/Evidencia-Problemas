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

