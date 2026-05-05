<div align="center">
 
# UNIVERSIDAD NACIONAL DE LOJA 
## Portafolio Digital de Aprendizaje – Teoría de la Programación.
<img width="250" alt="Sello_UNL sin fondo" src="https://github.com/user-attachments/assets/4860f66d-04aa-472e-8df6-fb32526f5482" />

# UNIVERSIDAD NACIONAL DE LOJA
## Portafolio Digital de Aprendizaje – Teoría de la Programación

**Estudiante:** Jose Camilo Merino Morocho  
**Carrera:** Ingeniería en Computación  
**Asignatura:** Teoría De La Programación  
**Ciclo:** Primero  
**Período Académico:** 2026  
**Docente:** Ing. Lissette Lopez

</div>

------------------------------------------------------------------------------
# 🚀 Unidad 1: Fundamentos de Programación
------------------------------------------------------------------------------
### 📖 Contenidos Esencailes

- **Algoritmo** → Es Conjunto ordenado de pasos o instrucciones que permiten resolver un problema o realizar una tarea específica.
- **Pseudocódigo** → Es una Forma de representar un algoritmo usando un lenguaje intermedio entre el lenguaje natural y el de programación, sin reglas estrictas de sintaxis.
- **Diagrama de flujo** → Representación gráfica de un algoritmo mediante formas gemetricas como óvalos, rectángulos, rombos, flechas que muestran el flujo de ejecución. 
- **Prueba de escritorio** → Es una Técnica para verificar un algoritmo paso a paso, simulando su ejecución manualmente con datos de prueba para comprobar su funcionamiento.
- **Lenguajes de programación** → Conjunto de reglas y símbolos que permiten escribir instrucciones que una computadora puede entender y ejecutar como ej: C, Python, Java.

### 🧩 Programación por bloques

Es una Forma de programar usando bloques visuales que se encajan entre sí como piezas o rompecabezas, facilitando el aprendizaje sin necesidad de escribir código como por ejemplo Scratch

-------------------------------------------------------------------------------

## 🛠️ Ejercicio con estructura secuencial: Conversión de Medidas

### 📌 Planteamiento del problema
Escribir un programa para convertir una medida dada en pies a sus equivalentes en: a) yardas; b) pulgadas; c) centímetros; y d) metro. (1 pie: 12 pulgadas, 1 yarda= 3 pies, 1 pulgada= 2.54 cm, 1 metro= 100 cm). Leer el número de pies e imprimir el número de yardas, pies, pulgadas, centímetros y metros.


### 🔍 Análisis del problema

ENTRADA:
- pies

PROCESO:
- yardas = pies / 3
- pulgadas = pies * 12
- centimetros = pulgadas * 2.54
- metros = centimetros / 100

SALIDA:
- Conversión a todas las unidades

### ✍️Diseño Del Algoritmo

#### 📝Psudocodigo
 Inicio
   1. Leer pies
   2. yardas = pies / 3
   3. pulgadas = pies * 12
   4. centimetros = pulgadas * 2.54
   5. metros = centimetros / 100
   6. Escribir resultados
   
Fin

#### ⚡Diagrama de Flujo
<img width="700" height="1000" alt="ChatGPT Image 3 may 2026, 04_36_58 p m" src="https://github.com/user-attachments/assets/593b3d60-820e-4e38-ae5e-bfa114aca448" />


### 💻Codificación (código fuente): Desarrollado en C
```c
#include <stdio.h>

int main(){
    float pies, yardas, pulgadas, centimetros, metros;

    printf("Ingrese su medida en pies: ");
    scanf("%f", &pies);

    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;

    printf("La medida en pies es: %.2f\n", pies);
    printf("Su medida en yardas es: %.2f\n", yardas);
    printf("Su medida en pulgadas es: %.2f\n", pulgadas);
    printf("Su medida en centimetros es: %.2f\n", centimetros);
    printf("Su medida en metros es: %.2f\n", metros);

    return 0;
}
```
### ✅ Validación (Prueba de escritorio)
| 👣 pies | 📏 yardas | 📐 pulgadas | 📊 cm  | 📏 m |
| ------- | --------- | ----------- | ------ | ---- |
| 3       | 1         | 36          | 91.44  | 0.91 |
| 6       | 2         | 72          | 182.88 | 1.82 |

-------------------------------------------------------------------------------
## ⚠️ Principales dificultades y reflexión crítica en la aplicación de los contenidos.
Algunas dificultades que se pueden presentar podrian ser: 
- Comprender correctamente la lógica del problema antes de programar.

- Traducir correctamente el algoritmo a pseudocódigo.
- Errores de sintaxis en el código AL Momento de programar.
- Falta de práctica en pruebas de escritorio.

### 💭 Reflexión crítica
El desarrollo de algoritmos es un proceso iportante para la programación, ya que permite organizar ideas de forma lógica antes de programar ademas el uso de herramientas como pseudocódigo y diagramas de flujo facilita la comprensión del problema. Sin embargo, es necesario practicar constantemente para mejorar la capacidad de análisis y reducir errores en la implementación.

------------------------------------------------------------------------------------------------------------------------------------------------------------
# 📖 Bibliografía
[1] T. H. Cormen, C. E. Leiserson, R. L. Rivest y C. Stein, *Introduction to Algorithms*, 3rd ed. Cambridge, MA, USA: MIT Press, 2009.

[2] B. W. Kernighan y D. M. Ritchie, *The C Programming Language*, 2nd ed. Englewood Cliffs, NJ, USA: Prentice Hall, 1988.

[3] R. Sedgewick y K. Wayne, *Algorithms*, 4th ed. Boston, MA, USA: Addison-Wesley, 2011.

[4] M. Sipser, *Introduction to the Theory of Computation*, 3rd ed. Boston, MA, USA: Cengage Learning, 2012.

[5] J. Glenn Brookshear y D. Brylow, *Computer Science: An Overview*, 13th ed. Boston, MA, USA: Pearson, 2019.


# 🤖Declaración de uso de inteligencia artificial generativa

Para la elaboración del presente portafolio se utilizó una herramienta de inteligencia artificial generativa (ChatGPT) como apoyo en la organización de contenidos, redacción en formato Markdown y estructuración de ejemplos de programación.

El uso de esta herramienta se limitó a funciones de asistencia académica, tales como:
- Ayuda al mejoramiento visual del documento
- Apoyo en la redacción técnica.
- Sugerencias de ejemplos y explicaciones.

El estudiante es responsable de la revisión, comprensión y validación del contenido presentado, así como de garantizar la originalidad y el uso ético de la información conforme a las normas académicas de la institución.
