/*
Compiler configuration 


File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok

run > debugger > stlink OpenOCD > Show Generator option > mode setup > reset mode > software system reset



*/


/*

Timer Configuration

Click Timer → Click TIM2 →

Clock Source set to Internal Clock

Channel2 set to PWM Generation CH2

Configuration → Parameter Settings →

Prescaler set to 127

Counter Period 625


*/


  /* USER CODE BEGIN 2 */
  HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  	int x;
  	for(x=0; x<625; x=x+1)
  	{
  	  __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2, x);
  	  HAL_Delay(3);
  	}
  	for(x=625; x>0; x=x-1)
  	{
  	  __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2, x);
  	  HAL_Delay(3);
  	}
      /* USER CODE END WHILE */

      /* USER CODE BEGIN 3 */
    }