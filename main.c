/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1 /* definir le variable INTEL = 1 */
#define NOINTEL 0 /* definir le variable NOINTEL = 0 */
#define A 2 /* definir le variable A = 2 */
#define B 3 /* definir le variable B = 3 */
#define OTHERS
#define SOM(X,Y) (INTEL)?(X+Y):(X*Y)
#define MIN(X,Y) (INTEL)?((X<Y)? X: Y):((X>Y)? X: Y)
#define MULT(X,Y) (NOINTEL)? (X+Y) : (X*Y)
#define MAX(X,Y) (NOINTEL)?((X<Y)? X: Y):((X>Y)? X: Y)
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  // Appel SOM,MIN,MULT,MAX
  int som = SOM(A,B); 
  int min = MIN(A,B);
  int mult = MULT(A,B);
  int max = MAX(A,B);
  while (1)
  {}
}




/**************************************END OF FILE**************************************/
