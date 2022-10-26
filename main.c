/**
  ******************************************************************************
  * @file    main.c
  * @author  Rihab Bannour
  * @brief   supporting multiple function 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/ 

/* Macros --------------------------------------------------------------------*/


//#define INTEL
#define SOM
#define MIN(Var1,Var2) (((Var1)<(Var2)) ? (Var1) : (Var2) ) /*definition de la fonction min et son equation */

//#define OTHERS
#define MUL
#define MAX(Var1,Var2) (((Var1)>(Var2)) ? (Var1) : (Var2) ) /*definition de la fonction max et son equqtion */


/* Private function prototypes -----------------------------------------------*/
  static int sum(int Var1, int Var2);
  static int mul(int Var1, int Var2);
    
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM
  int ResultSum = sum(10,2);
#endif /*som*/
  int ResultMin = MIN(10,2); /*min de 2 valeurs*/
  
#ifdef MUL 
  int ResultMul = mul(100,20);
#endif /*multiplication*/
  int ResultMax = MAX(100,20);/*max de 2 valeurs*/
  while (1)
  {
   
  }
}
#ifdef SOM
  static int sum(int Var1, int Var2)
  {
    return (Var1+Var2);
  }
#endif

#ifdef MUL
  static int mul(int Var1, int Var2)
  {
    return (Var1*Var2);
  }
#endif
/*************************************END OF FILE**************************************/
