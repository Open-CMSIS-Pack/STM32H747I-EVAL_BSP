/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 29/10/2024 14:29:49
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1


/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Filter Settings */
#define MX_I2C1_ANF_ENABLE                      1
#define MX_I2C1_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               75000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_SD                       1

/* Peripheral Clock Frequency */
#define MX_SDMMC1_PERIPH_CLOCK_FREQ             150000000

/* Pins */

/* SDMMC1_CDIR */
#define MX_SDMMC1_CDIR_Pin                      PB9
#define MX_SDMMC1_CDIR_GPIO_Pin                 GPIO_PIN_9
#define MX_SDMMC1_CDIR_GPIOx                    GPIOB
#define MX_SDMMC1_CDIR_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC1_CDIR_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC1_CDIR_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CDIR_GPIO_AF                  GPIO_AF7_SDIO1

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_CKIN */
#define MX_SDMMC1_CKIN_Pin                      PB8
#define MX_SDMMC1_CKIN_GPIO_Pin                 GPIO_PIN_8
#define MX_SDMMC1_CKIN_GPIOx                    GPIOB
#define MX_SDMMC1_CKIN_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC1_CKIN_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC1_CKIN_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CKIN_GPIO_AF                  GPIO_AF7_SDIO1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDIO1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D0DIR */
#define MX_SDMMC1_D0DIR_Pin                     PC6
#define MX_SDMMC1_D0DIR_GPIO_Pin                GPIO_PIN_6
#define MX_SDMMC1_D0DIR_GPIOx                   GPIOC
#define MX_SDMMC1_D0DIR_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_SDMMC1_D0DIR_GPIO_PuPd               GPIO_NOPULL
#define MX_SDMMC1_D0DIR_GPIO_Speed              GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0DIR_GPIO_AF                 GPIO_AF8_SDIO1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D123DIR */
#define MX_SDMMC1_D123DIR_Pin                   PC7
#define MX_SDMMC1_D123DIR_GPIO_Pin              GPIO_PIN_7
#define MX_SDMMC1_D123DIR_GPIOx                 GPIOC
#define MX_SDMMC1_D123DIR_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_SDMMC1_D123DIR_GPIO_PuPd             GPIO_NOPULL
#define MX_SDMMC1_D123DIR_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D123DIR_GPIO_AF               GPIO_AF8_SDIO1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDIO1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PB15
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_15
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                    GPIO_AF4_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PB14
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_14
#define MX_USART1_TX_GPIOx                      GPIOB
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF4_USART1

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG1_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG1_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                           1

/* Handle */
#define MX_USB_OTG_HS_HANDLE                    hpcd_USB_OTG_HS

/* Virtual mode */
#define MX_USB_OTG_HS_VM                        Device_HS
#define MX_USB_OTG_HS_Device_HS                 1

/* Pins */

/* USB_OTG_HS_ULPI_CK */
#define MX_USB_OTG_HS_ULPI_CK_Pin               PA5
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_CK_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_CK_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_CK_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D0 */
#define MX_USB_OTG_HS_ULPI_D0_Pin               PA3
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Pin          GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_D0_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D0_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D0_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D1 */
#define MX_USB_OTG_HS_ULPI_D1_Pin               PB0
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Pin          GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_D1_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D1_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D1_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D2 */
#define MX_USB_OTG_HS_ULPI_D2_Pin               PB1
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Pin          GPIO_PIN_1
#define MX_USB_OTG_HS_ULPI_D2_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D2_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D2_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D3 */
#define MX_USB_OTG_HS_ULPI_D3_Pin               PB10
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Pin          GPIO_PIN_10
#define MX_USB_OTG_HS_ULPI_D3_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D3_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D3_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D4 */
#define MX_USB_OTG_HS_ULPI_D4_Pin               PB11
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Pin          GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_D4_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D4_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D4_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D5 */
#define MX_USB_OTG_HS_ULPI_D5_Pin               PB12
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Pin          GPIO_PIN_12
#define MX_USB_OTG_HS_ULPI_D5_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D5_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D5_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D6 */
#define MX_USB_OTG_HS_ULPI_D6_Pin               PB13
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Pin          GPIO_PIN_13
#define MX_USB_OTG_HS_ULPI_D6_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D6_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D6_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_D7 */
#define MX_USB_OTG_HS_ULPI_D7_Pin               PB5
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_D7_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D7_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D7_GPIO_AF           GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_DIR */
#define MX_USB_OTG_HS_ULPI_DIR_Pin              PI11
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Pin         GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_DIR_GPIOx            GPIOI
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_AF          GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_NXT */
#define MX_USB_OTG_HS_ULPI_NXT_Pin              PH4
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Pin         GPIO_PIN_4
#define MX_USB_OTG_HS_ULPI_NXT_GPIOx            GPIOH
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_AF          GPIO_AF10_OTG2_HS

/* USB_OTG_HS_ULPI_STP */
#define MX_USB_OTG_HS_ULPI_STP_Pin              PC0
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Pin         GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_STP_GPIOx            GPIOC
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_STP_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_STP_GPIO_AF          GPIO_AF10_OTG2_HS

#endif  /* MX_DEVICE_H__ */
