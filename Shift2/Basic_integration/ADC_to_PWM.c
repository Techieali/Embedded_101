/*
## Compiler configuration 

File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok


## Timer

ADC1 - IN9 (tick)

Parameter Settings --> ADC Settings --> Continuous Conversion Mode (Enabled)

Click Timer → Click TIM2 →

Clock Source set to Internal Clock

Channel2 set to PWM Generation CH2

Configuration → Parameter Settings →

Prescaler set to 15

Counter Period 9999



*/



  /* USER CODE BEGIN 2 */
  HAL_ADC_Start(&hadc1);
  HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
  uint16_t readValue;
  uint16_t PWM;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    HAL_ADC_PollForConversion(&hadc1,1000);
    readValue = HAL_ADC_GetValue(&hadc1);
    PWM = 250 + readValue/4.1;
    __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2, PWM);
    HAL_Delay(50);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */