#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
/*El uso de const es para que los parametros cargados no puedan ser modificados a lo largo de todo el programa*/
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// multiplicar va sumando al int a su propio valor una cantidad b de veces, es decir, a + a + a + ... (b veces). Es decir multiplica los parametros y retorna su resultado. 
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}