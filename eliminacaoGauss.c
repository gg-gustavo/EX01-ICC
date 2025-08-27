/* Matriz  'normal' (vetor  de  ponteiros (linhas  matriz) para  vetores
   (colunas da matriz), estilo 'Mazieiro/Prog 2'
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "utils.h"
#include "sislin.h"
#include "eliminacaoGauss.h"

/* Encontra a linha do SL 'C' que tem o maior valor na coluna 'k' da matriz
   de coeficientes.
   RETORNO:  índice da  linha que  tem o  maior valor  na coluna  'k' da
             matriz de coeficientes
*/
static int encontraMax(SistLinear_t *C, int k)
{
  
}

/* Troca de lugar entre si as linhas 'k' e 'p' do SL 'C' */
static void trocaLinha (SistLinear_t *C, int k, int p)
{
  
}

/* Seja um S.L. de ordem 'n'
   C = A|B em Ax=B
 */
void triangulariza( SistLinear_t *C )
{
 
}

void retrosubst( SistLinear_t *C, real_t *X )
{
 
}
