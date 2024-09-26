/*
configuration 


File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok

run > debugger > stlink OpenOCD > Show Generator option > mode setup > reset mode > software system reset



*/



/* USER CODE BEGIN WHILE */
  while (1)
  {
	  if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1)== GPIO_PIN_RESET)
	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
	  }
	  else{
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);

	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */


  