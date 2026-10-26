# Evidencia de Problemas

## Descripción

En esta evidencia se resuelven tres problemas de LeetCode utilizando C++.

Los problemas se seleccionaron con dos niveles de dificultad Easy y uno Medium.

## Problema 1: Minimum Number Game

**Número:** 2974  
**Dificultad:** Easy  
**Tema:** Algoritmos de ordenamiento  
**Algoritmo utilizado:** Bubble Sort

**Enlace al problema:** https://leetcode.com/problems/minimum-number-game/

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

### Complejidad

- **Tiempo: O(n²).** Se utiliza Bubble Sort, que compara los elementos mediante dos ciclos anidados. El intercambio de parejas es O(n), por lo que la complejidad total sigue siendo O(n²).
- **Espacio: O(1).** No se utilizan estructuras adicionales, ya que los cambios se realizan directamente sobre el vector original.

### Código

[Ver solución en C++](2974_Minimum_Number_Game.cpp)

## Plataforma utilizada

Los problemas se resuelven utilizando C++ en LeetCode, donde se comprueba que las soluciones produzcan los resultados correctos mediante casos de prueba.
