#define CONFIG_UART_QMSI_0_BAUDRATE	INTEL_QMSI_UART_B0002000_CURRENT_SPEED
#define CONFIG_UART_QMSI_0_NAME		INTEL_QMSI_UART_B0002000_LABEL
#define CONFIG_UART_QMSI_0_IRQ		INTEL_QMSI_UART_B0002000_IRQ_0
#define CONFIG_UART_QMSI_0_IRQ_FLAGS	INTEL_QMSI_UART_B0002000_IRQ_0_SENSE

#define CONFIG_UART_QMSI_1_BAUDRATE	INTEL_QMSI_UART_B0002400_CURRENT_SPEED
#define CONFIG_UART_QMSI_1_NAME		INTEL_QMSI_UART_B0002400_LABEL
#define CONFIG_UART_QMSI_1_IRQ		INTEL_QMSI_UART_B0002400_IRQ_0
#define CONFIG_UART_QMSI_1_IRQ_FLAGS	INTEL_QMSI_UART_B0002400_IRQ_0_SENSE

#define CONFIG_PHYS_RAM_ADDR		CONFIG_SRAM_BASE_ADDRESS

#define CONFIG_PHYS_LOAD_ADDR		CONFIG_FLASH_BASE_ADDRESS

#define CONFIG_RAM_SIZE			CONFIG_SRAM_SIZE

#define CONFIG_ROM_SIZE			CONFIG_FLASH_SIZE

#define CONFIG_I2C_0_NAME		INTEL_QMSI_I2C_B0002800_LABEL
#define CONFIG_I2C_0_BITRATE		INTEL_QMSI_I2C_B0002800_CLOCK_FREQUENCY
#define CONFIG_I2C_0_IRQ		INTEL_QMSI_I2C_B0002800_IRQ_0
#define CONFIG_I2C_0_IRQ_FLAGS		INTEL_QMSI_I2C_B0002800_IRQ_0_SENSE

#define CONFIG_GPIO_QMSI_0_NAME		INTEL_QMSI_GPIO_B0000C00_LABEL
#define CONFIG_GPIO_QMSI_0_IRQ		INTEL_QMSI_GPIO_B0000C00_IRQ_0
#define CONFIG_GPIO_QMSI_0_IRQ_FLAGS	INTEL_QMSI_GPIO_B0000C00_IRQ_0_SENSE

#define CONFIG_RTC_0_NAME		INTEL_QMSI_RTC_B0000400_LABEL
#define CONFIG_RTC_0_IRQ		INTEL_QMSI_RTC_B0000400_IRQ_0
#define CONFIG_RTC_0_IRQ_FLAGS		INTEL_QMSI_RTC_B0000400_IRQ_0_SENSE

#define CONFIG_ADC_0_NAME		INTEL_QUARK_D2000_ADC_B0004000_LABEL
#define CONFIG_ADC_0_BASE_ADDRESS	INTEL_QUARK_D2000_ADC_B0004000_BASE_ADDRESS
#define CONFIG_ADC_0_IRQ		INTEL_QUARK_D2000_ADC_B0004000_IRQ_0
#define CONFIG_ADC_0_IRQ_FLAGS		INTEL_QUARK_D2000_ADC_B0004000_IRQ_0_SENSE

#define CONFIG_SPI_0_BASE_ADDRESS	SNPS_DESIGNWARE_SPI_B0001000_BASE_ADDRESS
#define CONFIG_SPI_0_NAME		SNPS_DESIGNWARE_SPI_B0001000_LABEL
#define CONFIG_SPI_0_IRQ		SNPS_DESIGNWARE_SPI_B0001000_IRQ_0
#define CONFIG_SPI_0_IRQ_PRI		0

#define CONFIG_WDT_0_NAME		INTEL_QMSI_WATCHDOG_B0000000_LABEL
#define CONFIG_WDT_0_IRQ		INTEL_QMSI_WATCHDOG_B0000000_IRQ_0
#define CONFIG_WDT_0_IRQ_PRI		0
#define CONFIG_WDT_0_IRQ_FLAGS		INTEL_QMSI_WATCHDOG_B0000000_IRQ_0_SENSE
