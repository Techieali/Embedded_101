/*
configuration 


File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok

run > debugger > stlink OpenOCD > Show Generator option > mode setup > reset mode > software system reset

*/

while (1)
  {
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, 1);
	  HAL_Delay(20000);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, 0);
	  HAL_Delay(1000);


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }