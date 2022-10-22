/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
#define MUL
//#define INTEL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int sum (int var1, int var2);
static int mul (int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM
  int ResultSum = sum(3,4);
#endif
#ifdef MUL
  int ResultMul = mul(3,4);
#endif  
  while (1)
  {
  }
}

#ifdef SOM
static int sum (int var1, int var2)
{
   return (var1+var2); 
}
#endif

#ifdef MUL
static int mul(int var1, int var2)
{
   return (var1*var2); 
}
#endif  

/**************************************END OF FILE**************************************/
