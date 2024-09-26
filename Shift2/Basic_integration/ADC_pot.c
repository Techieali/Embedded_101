/*

## general parameters


configuration 


File > new > stm32Project

Target selector > f103c8 > select first board > provide the name > click next > ok

Cube MX configuration > system core > sys > debug > serial wire > 

configure pin out > save > generate code > ok



ADC1 - IN9 (tick)

Parameter Settings --> ADC Settings --> Continuous Conversion Mode (Enabled)

### Debugging

after succesful compilation *

debug > debug configuration


*/



/* USER CODE BEGIN 0 */
uint16_t readValue;
/* USER CODE END 0 */

  /* USER CODE BEGIN 2 */
  HAL_ADC_Start(&hadc1);
  /* USER CODE END 2 */

 /* USER CODE BEGIN WHILE */
  while (1)
  {
	HAL_ADC_PollForConversion(&hadc1,1000);
	readValue = HAL_ADC_GetValue(&hadc1);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
