<div align="center">
  
# 💻 Unidad 3: Programación Modular y Estructuras de Datos Estáticas Básicas

</div>

## 📖 Introducción

En esta tercera unidad se abordaron conceptos fundamentales de la programación estructurada en lenguaje **C**, enfocados en la **modularidad** y el uso de **arreglos**. A través de ejercicios prácticos se comprendió la importancia de dividir un programa en funciones para mejorar la organización, reutilización y mantenimiento del código, además de aplicar el paso de parámetros por valor y por referencia. También se estudiaron los arreglos unidimensionales, bidimensionales y tridimensionales como estructuras que permiten almacenar y manipular conjuntos de datos de manera eficiente. Los ejercicios desarrollados fortalecieron el pensamiento lógico y las habilidades necesarias para resolver problemas mediante una programación organizada y estructurada.

---
<div align="center">

# 📌 Modularidad

</div>

## ¿Qué es la modularidad?

La **modularidad** es una técnica de programación que consiste en dividir un programa en pequeñas partes llamadas **funciones** o **módulos**, donde cada una realiza una tarea específica. Esto permite que el código sea más organizado, fácil de entender y sencillo de mantener. Además, facilita la reutilización de funciones en diferentes programas sin necesidad de volver a escribirlas.



## ✅ Ventajas de la modularidad

- Permite dividir programas grandes en partes más pequeñas.
- Facilita la lectura y comprensión del código.
- Reduce la repetición de instrucciones.
- Hace más sencillo corregir errores.
- Permite reutilizar funciones en otros programas.
- Favorece el trabajo colaborativo entre programadores.



## 📌 Paso de parámetros por valor

El **paso por valor** consiste en enviar una copia del valor de una variable hacia una función. Esto significa que cualquier modificación realizada dentro de la función **no afecta** la variable original declarada en el programa principal.

Este tipo de paso de parámetros es recomendable cuando únicamente se necesita utilizar el valor para realizar cálculos sin modificar la variable original.

### 📄 Ejemplo desarrollado

**Archivo del código:**

[📄 Ver código completo](ejercicioValor.c)


### Explicación

En el programa desarrollado, la función:

```c
float calcularValorCliente();
```

no recibe parámetros, pero devuelve un valor de tipo **float** correspondiente al total que debe pagar un cliente según la consola seleccionada y las horas utilizadas. El valor calculado se devuelve mediante la instrucción `return`, permitiendo que otra función lo utilice posteriormente.



## 📌 Paso de parámetros por referencia

El **paso por referencia** permite enviar la dirección de memoria de una variable mediante un puntero. Gracias a esto, la función puede modificar directamente el contenido de la variable original.

Este mecanismo es muy utilizado cuando una función necesita actualizar valores calculados sin necesidad de devolver múltiples resultados.

### 📄 Ejemplo desarrollado

**Archivo del código:**


[📄 Ver código completo](ejercicioRefe.c)


### Explicación

Dentro del programa se implementa la función:
 
```c
void calcularValorRecaudado(int nrVehiculos, float *totalRecaudado);
```
 
En este caso, el parámetro `totalRecaudado` es un **puntero** que almacena la dirección de memoria de la variable original.
 
Cada vez que un vehículo realiza un pago, el programa ejecuta:
 
```c
*totalRecaudado = *totalRecaudado + calcularValorVehiculo();
```
 
De esta forma se actualiza directamente la variable del programa principal sin necesidad de devolver un valor mediante `return`.



## ✅ Conclusión sobre la modularidad

La modularidad permite desarrollar programas más organizados, reutilizables y fáciles de mantener. Además, el uso adecuado del paso de parámetros por valor y por referencia ayuda a optimizar el manejo de la información dentro de un programa, dependiendo de si se requiere únicamente consultar un dato o modificarlo directamente.

---
<div align="center">

# 📦 Arreglos

</div>

## ¿Qué son los arreglos?

Los **arreglos** son estructuras de datos estáticas que permiten almacenar varios elementos del mismo tipo utilizando una sola variable. Cada elemento ocupa una posición denominada **índice**, lo que facilita acceder rápidamente a cualquier dato almacenado.

Los arreglos son ampliamente utilizados para organizar información, recorrer datos mediante ciclos y resolver problemas relacionados con listas, tablas y matrices.

---

# 📌 Arreglo Unidimensional

## Teoría

Un arreglo unidimensional representa una **lista de elementos** almacenados en una sola dimensión. Cada dato posee una posición numérica iniciando desde el índice cero.

Su sintaxis general es:

```c
tipo nombre[tamaño];
```

Ejemplo:

```c
int lista[5];
```

---

### 📄 Ejemplo desarrollado

[📄 Ver código completo](unidimensional.c)


### Explicación

En este ejercicio el usuario ingresa cinco números utilizando un ciclo `for`.

Posteriormente, otro ciclo recorre el arreglo para mostrar todos los valores almacenados.

Este tipo de arreglo es útil cuando se necesita almacenar listas de datos como edades, notas, temperaturas, salarios o cualquier conjunto de elementos del mismo tipo.

---

# 📌 Arreglo Bidimensional

## Teoría

Los arreglos bidimensionales permiten almacenar datos organizados en **filas y columnas**, formando una matriz.

Su sintaxis es:

```c
tipo matriz[fila][columna];
```

Ejemplo:

```c
int matriz[3][2];
```

---

### 📄 Ejemplo desarrollado

[📄 Ver código completo](bidimensional.c)


### Explicación

En este programa se crea una matriz de **3 filas y 2 columnas**.

Mediante dos ciclos `for` anidados se ingresan todos los datos y posteriormente se imprimen en pantalla respetando la estructura de la matriz.

Este tipo de arreglo es ampliamente utilizado para representar tablas, hojas de cálculo, matrices matemáticas y juegos tipo tablero.

---

# 📌 Arreglo Tridimensional

## Teoría

Los arreglos tridimensionales almacenan información en **tres dimensiones**, conocidas comúnmente como capas, filas y columnas.

Su sintaxis general es:

```c
tipo matriz[capas][filas][columnas];
```

Ejemplo:

```c
float matriz[2][5][3];
```

---

### 📄 Ejemplo desarrollado


[📄 Ver código completo](tridimensional.c)


### Explicación

En este ejercicio se declara una matriz tridimensional con dos capas.

Cada capa contiene cinco registros y cada registro almacena tres datos.

El recorrido se realiza mediante tres ciclos `for` anidados, permitiendo acceder a todos los elementos de la estructura.

Este tipo de arreglo es utilizado cuando la información necesita organizarse en diferentes niveles, por ejemplo horarios, inventarios por sucursal, calificaciones por cursos o imágenes digitales.

---

# 📊 Comparación entre los tipos de arreglos

| Tipo de arreglo | Dimensiones | Aplicaciones |
|:----------------|:-----------:|:------------|
| Unidimensional | 1 | Listas, vectores, edades, notas y temperaturas. |
| Bidimensional | 2 | Tablas, matrices, horarios y hojas de cálculo. |
| Tridimensional | 3 | Datos organizados por capas, imágenes, videojuegos y bases de datos simples. |

---

# 💭 Principales dificultades encontradas

Durante el desarrollo de esta unidad una de las principales dificultades fue comprender el funcionamiento del **paso de parámetros por referencia**, ya que implica trabajar con punteros y direcciones de memoria. También fue necesario practicar el uso de ciclos anidados para recorrer correctamente los arreglos bidimensionales y tridimensionales, debido a que al inicio resultaba complicado identificar el orden adecuado de filas, columnas y capas. Sin embargo, mediante la práctica constante fue posible comprender el funcionamiento de estas estructuras.

---

# ✍️ Reflexión crítica

Los contenidos estudiados en esta unidad son fundamentales para la programación, ya que permiten desarrollar programas más organizados y eficientes. La modularidad facilita dividir un problema complejo en tareas pequeñas y reutilizables, mientras que los arreglos permiten almacenar y manipular grandes cantidades de información de manera ordenada. Considero que estos conocimientos serán de gran utilidad en asignaturas futuras y en el desarrollo de proyectos de software más complejos, donde la organización del código y el manejo adecuado de datos son aspectos indispensables.

---

