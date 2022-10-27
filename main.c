/**
  ******************************************************************************
  * @file    main.c
  * @author  Rihab Bannour
  * @brief   Macro functions 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/ 

/* Macros --------------------------------------------------------------------*/


//#define INTEL

#define OTHERS

#define MIN(Var1,Var2) (((Var1)<(Var2)) ? (Var1) : (Var2) ) /*definition de la fonction min et son equation */
#define MAX(Var1,Var2) (((Var1)>(Var2)) ? (Var1) : (Var2) ) /*definition de la fonction max et son equqtion */


/* Private function prototypes -----------------------------------------------*/
 
    
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{

  int ResultMin = MIN(10,2); /*le minimum de 2 valeurs*/
  
  int ResultMax = MAX(100,20); /*le maximum de 2 valeurs*/
  
  while (1)
  {
   
  }
}

/*************************************END OF FILE**************************************/
