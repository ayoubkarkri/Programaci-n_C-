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

`?:` Es el operador ternario, que es un `if/else` resumido en una sola línea. Tiene la siguiente estructura:
`condición ? valor_si_es_verdadero : valor_si_es_falso`
- **Condición:** ¿Es count impar?
- **?** Si sí, devuelve `****`
- **:** Si no, devuelve `+++++++++`

Salida del código:
<img width="290" height="277" alt="image" src="https://github.com/user-attachments/assets/33e5e965-5fd5-4b6a-abb4-8d09312c626c" />

---

## 3.1.12
