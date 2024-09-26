/*
## Compiler configuration 


File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok

## Timer 

Click Timer → Click TIM2 →

Clock Source set to Internal Clock

Channel2 set to PWM Generation CH2

Configuration → Parameter Settings →

Prescaler set to 15

Counter Period 9999



## run > debugger > stlink OpenOCD > Show Generator option > mode setup > reset mode > software system reset



*/



  /* USER CODE BEGIN 2 */
  HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    int x;
    for(x=250; x<1250; x=x+1)
    {
      __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2, x);
      HAL_Delay(3);
    }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
