# 📘 Unidad 2: Estructuras Condicionales y Repetitivas

---

# 🔀 Estructuras Condicionales
Las estructuras condicionales permiten tomar decisiones dentro de un algoritmo dependiendo de si una condición es verdadera o falsa.



## 🔶 Condicional Simple If (Si)
Ejecuta una acción únicamente cuando se cumple una condición.

### Pseudocódigo

```text
Si condición Entonces
    Acción
FinSi
```

### Diagrama de Flujo
<img width="496" height="327" alt="image" src="https://github.com/user-attachments/assets/eb55b035-4d92-4528-aa6c-63c22011b7a4" />


###  Ejemplo

```text
Si nota >= 7 Entonces
    Escribir "Aprobado"
FinSi
```



## 🔶 Condicional Doble if-else  (Si - Sino)
Permite elegir entre dos alternativas.

### Pseudocódigo

```text
Si condición Entonces
    Acción 1
Sino
    Acción 2
FinSi
```

### Diagrama de Flujo

<img width="575" height="325" alt="image" src="https://github.com/user-attachments/assets/50c788fe-bc54-48b0-a407-ddf18915f943" />

### Ejemplo

```text
Si nota >= 7 Entonces
    Escribir "Aprobado"
Sino
    Escribir "Reprobado"
FinSi
```



## 🔶 Condicional Múltiple Switch case (Segun hacer)
Permite evaluar varias condiciones.

###  Pseudocódigo

```text
Si condición1 Entonces
    Acción 1
Sino Si condición2 Entonces
    Acción 2
Sino
    Acción 3
FinSi
```

###  Diagrama de Flujo

<img width="1042" height="443" alt="image" src="https://github.com/user-attachments/assets/15b130ab-5c43-47f2-83b2-b867b08fff12" />


###  Ejemplo

```text
Si nota >= 9 Entonces
    Escribir "Excelente"
Sino Si nota >= 7 Entonces
    Escribir "Aprobado"
Sino
    Escribir "Reprobado"
FinSi
```

---



# 🔁 Estructuras Repetitivas
Las estructuras repetitivas permiten ejecutar varias veces un bloque de instrucciones.



## 🔶 Ciclo Mientras (While)
Repite instrucciones mientras la condición sea verdadera.

### Pseudocódigo

```text
Mientras condición Hacer
    Acción
FinMientras
```

###  Diagrama de Flujo

<img width="563" height="562" alt="image" src="https://github.com/user-attachments/assets/bea61d76-2c82-44c3-92bf-56d599caca26" />


### Ejemplo

```text
Mientras contador <= 5 Hacer
    Escribir contador
    contador = contador + 1
FinMientras
```



## 🔶 Ciclo Repetir - Hasta Mientras (Do While)
Ejecuta primero las instrucciones y luego evalúa la condición.

### Pseudocódigo

```text
Repetir
    Acción
Hasta Que condición
```

### Diagrama de Flujo

<img width="532" height="498" alt="image" src="https://github.com/user-attachments/assets/e5426f07-f336-4fae-9a35-4ed64f0b78df" />

### Ejemplo

```text
Repetir
    Leer numero
Hasta Que numero > 0
```




## 🔶 Ciclo Para (For)
Se utiliza cuando se conoce previamente el número de repeticiones.

### Pseudocódigo

```text
Para i = 1 Hasta 5 Hacer
    Acción
FinPara
```

### Diagrama de Flujo

<img width="491" height="371" alt="image" src="https://github.com/user-attachments/assets/5c1deba3-22ae-47a7-a823-aa1673f9e03b" />


### Ejemplo

```text
Para i = 1 Hasta 5 Hacer
    Escribir i
FinPara
```



# 🔢 Ejercicio con estructura condicional y repetitiva (Programa de la Serie de Fibonacci en Lenguaje C)


## 📝 Planteamiento del Problema


Desarrollar un programa en lenguaje **C** que solicite al usuario un número entero positivo **n** y calcule el término correspondiente de la **Serie de Fibonacci**. Además, el programa debe mostrar los valores generados durante el proceso hasta llegar al término solicitado.

La sucesión de Fibonacci se caracteriza porque cada número es la suma de los dos anteriores:

```text
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
```

---

## 🔍 Análisis del Problema

### 📥 Datos de Entrada

- `n`: Posición del término de Fibonacci que desea calcular el usuario.

### ⚙️ Proceso

1.  Solicitar el valor de `n`.
2.  Validar que sea mayor o igual a 0.
3. 🔹 Si `n = 0`, mostrar 0.
4. 🔹 Si `n = 1`, mostrar 1.
5.  Si `n > 1`, calcular la serie utilizando un ciclo `for`.
6.  Mostrar cada término calculado.
7.  Mostrar el término Fibonacci correspondiente a la posición ingresada.

### 📤 Datos de Salida

-  Serie generada.
- Término de Fibonacci calculado.

### 📋 Variables Utilizadas

| Variable | Tipo | Descripción |
|-----------|------|-------------|
| `n` | int | 🔢 Posición de la serie |
| `anta` | int | ⬅️ Número anterior A |
| `antb` | int | ➡️ Número anterior B |
| `suma` | int | ➕ Resultado de la suma |
| `cont` | int | 🔄 Contador del ciclo |

---

## 🧠 Diseño del Algoritmo (Diagrama de Flujo)

<img width="978" height="1297" alt="image" src="https://github.com/user-attachments/assets/79bb8238-0e38-475f-8560-67d9878a51ae" />


---

### 💻Codificación (código fuente): Desarrollado en C

```c
#include <stdio.h>

int main() {
    int n, anta, antb, cont, suma;

    anta = 0;
    antb = 1;

    do {
        printf("Ingrese el numero: ");
        scanf("%i", &n);
    } while (n < 0);

    if (n == 0) {
        printf("0");
    }
    else if (n == 1) {
        printf("1");
    }
    else {
        for (cont = 2; cont <= n; cont++) {
            suma = anta + antb;
            printf("%i\n", suma);

            anta = antb;
            antb = suma;
        }

        printf("En la serie de Fibonacci es: %i", suma);
    }

    return 0;
}
```

---

## 🧪 Validación (Prueba de Escritorio)

### 📥 Entrada

```text
n = 7
```

### ⚙️ Inicialización

| Variable | Valor |
|-----------|--------|
| `anta` | 0 |
| `antb` | 1 |

### 🔄 Desarrollo del Ciclo

| cont |  suma = anta + antb |  anta | antb |
|-------|--------------------|--------|----------|
| 2 | 1 | 1 | 1 |
| 3 | 2 | 1 | 2 |
| 4 | 3 | 2 | 3 |
| 5 | 5 | 3 | 5 |
| 6 | 8 | 5 | 8 |
| 7 | 13 | 8 | 13 |

### 📤 Salida

```text
1
2
3
5
8
13

En la serie de Fibonacci es: 13
```

### ✔️ Comprobación

La serie de Fibonacci es:

```text
0, 1, 1, 2, 3, 5, 8, 13
```

Por lo tanto, el término en la posición **7** es:

```text
13
```

✅ **Resultado correcto.**
