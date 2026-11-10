# Ejercicios

## 3.1.11

**¿Qué hace el código?**
Imprime 10 líneas alternando `****` y `+++++++++`.

**¿Cómo funciona?**
En cada vuelta del `while` evalúa si *count* es impar (`count % 2 == 1`):
- Si es impar, imprime `****`
- Si es par, imprime `+++++++++`

Finalmente añade un salto de línea y suma 1 a la variable *count*.

**Aclaraciones:** `count % 2 == 1 ? "****" : "+++++++++"`
El símbolo **%** es el operador módulo, que calcula el **resto de una división entera**.
Al dividir cualquier número entre 2, solo hay dos posibles restos: **0** (si es par) o **1** (si es impar).

`?:` Es el operador ternario, que es un `if/else` resumido en una sola línea. Tiene la siguiente estructura: <br>
`condición ? valor_si_es_verdadero : valor_si_es_falso`
- **Condición:** ¿Es count impar?
- **?** Si sí, devuelve `****`
- **:** Si no, devuelve `+++++++++`

Salida del código: <br>
<img width="290" height="277" alt="image" src="https://github.com/user-attachments/assets/33e5e965-5fd5-4b6a-abb4-8d09312c626c" />

---

## 3.1.12
## 3.1.12

**¿Qué hace el código?**
Imprime un patrón de 10 filas y 10 columnas formado por símbolos `<` y `>`, alternando filas completas[cite: 1].

**¿Cómo funciona?**
- El bucle exterior (`row` de 10 a 1) controla las filas[cite: 1].
- El bucle interior (`column` de 1 a 10) imprime 10 caracteres en cada fila[cite: 1].
- Usa de nuevo el operador ternario para comprobar la fila: si el número de la fila es impar (`row % 2 == 1`), toda la fila se llena con `<`, y si es par, se llena con `>`[cite: 1].
- Al terminar cada fila, hace un salto de línea (`\n`) y resta 1 a `row` (`--row`)[cite: 1].

**Aclaraciones:** `row % 2 == 1 ? "<" : ">"`
- **Condición:** ¿Es el número de fila impar?
- **?** Si sí, imprime el carácter `<`[cite: 1].
- **:** Si no, imprime el carácter `>`[cite: 1].

Salida del código: <br>
