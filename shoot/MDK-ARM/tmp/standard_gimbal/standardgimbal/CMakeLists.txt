# CMSIS Build CMakeLists generated on 2023-09-20T09:53:39

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET standard_gimbal)
set(CPU Cortex-M4)
set(PRJ_DIR "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM")
set(OUT_DIR "C:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM/out/standard_gimbal/standardgimbal")
set(INT_DIR "C:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM/tmp/standard_gimbal/standardgimbal")
set(FPU SP_FPU)
set(SECURE Non-secure)
set(BYTE_ORDER Little-endian)
set(OPTIMIZE none)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=c99 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(CXX_FLAGS_GLOBAL "-xc++ -std=c++03 -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -Wno-packed -Wno-missing-variable-declarations -Wno-missing-prototypes -Wno-missing-noreturn -Wno-sign-conversion -Wno-nonportable-include-path -Wno-reserved-id-macro -Wno-unused-macros -Wno-documentation-unknown-command -Wno-documentation -Wno-license-management -Wno-parentheses-equality")
set(LD_FLAGS_GLOBAL "--map --load_addr_map_info --xref --callgraph --symbols --info sizes --info totals --info unused --info veneers --list --strict --summary_stderr --info summarysizes")
set(LD_SCRIPT "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM/standard_gimbal_standardgimbal.sct")

set(DEFINES
  STM32F407xx
  _RTE_
  USE_HAL_DRIVER
  ARM_MATH_CM4
  ARM_MATH_MATRIX_CHECK
  ARM_MATH_ROUNDING
)

set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_can.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_crc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rng.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usb.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/croutine.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/list.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/portable/RVDS/ARM_CM4F/port.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/queue.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/stream_buffer.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/tasks.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/timers.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Src/usbd_cdc.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c "none")
set(OPTIMIZE_c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c "none")

set(INC_PATHS
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Inc"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Inc"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/include"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/portable/RVDS/ARM_CM4F"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/CMSIS/Include"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/Include"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/support"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/protocol"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/controller"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Inc"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/controller/stm32"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM/RTE/_standardgimbal"
  "C:/Users/discipline/AppData/Local/arm/packs/ARM/CMSIS/5.9.0/CMSIS/Core/Include"
  "C:/Users/discipline/AppData/Local/arm/packs/Keil/STM32F4xx_DFP/2.17.1/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
)

set(AS_ARM_SRC_FILES
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/MDK-ARM/startup_stm32f407xx.s"
)

set(CC_SRC_FILES
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_can.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_crc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pcd_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rng.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rtc_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usb.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Src/usbd_cdc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/croutine.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/list.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/portable/RVDS/ARM_CM4F/port.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/queue.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/stream_buffer.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/tasks.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Middlewares/Third_Party/FreeRTOS/Source/timers.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/adc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/can.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/crc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/dma.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/freertos.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/gpio.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/i2c.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/main.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/rng.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/rtc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/spi.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/stm32f4xx_hal_msp.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/stm32f4xx_it.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/system_stm32f4xx.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/tim.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/usart.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/usb_device.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/usbd_cdc_if.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/usbd_conf.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/Src/usbd_desc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/CAN_receive.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/INS_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/chassis_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/detect_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/gimbal_behaviour.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/gimbal_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/led_flow_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/referee.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/referee_usart_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/remote_control.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/shoot_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/application/vision_task.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_PWM.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_adc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_buzzer.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_can.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_crc32.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_delay.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_dwt.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_flash.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_fric.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_i2c.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_imu_pwm.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_laser.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_led.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_rc.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_rng.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_servo_pwm.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_spi.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/bsp/boards/bsp_usart.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/AHRS_middleware.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/QuaternionEKF.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/kalman_filter.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/user_lib.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/controller/controller.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/controller/pid.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/controller/stm32/stm32.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices/BMI088Middleware.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices/BMI088driver.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices/OLED.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices/ist8310driver.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/devices/ist8310driver_middleware.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/support/CRC8_CRC16.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/support/fifo.c"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/support/mem_mang4.c"
)

set(LIB_FILES
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/AHRS.lib"
  "c:/Users/discipline/developer_workspace/code/QIqi-standard-robot/gimbal/components/algorithm/arm_cortexM4lf_math.lib"
)

# Toolchain config map

set(REGISTERED_TOOLCHAIN_ROOT "c:/Users/discipline/.vcpkg/artifacts/fd3d78d7/compilers.arm.armclang/6.20.0/bin")
set(REGISTERED_TOOLCHAIN_VERSION "6.20.0")
set(TOOLCHAIN_VERSION_MIN "6.20.0")
include ("C:/Users/discipline/.vcpkg/artifacts/fd3d78d7/tools.open.cmsis.pack.cmsis.toolbox/2.0.0/etc/AC6.6.18.0.cmake")
include ("C:/Users/discipline/.vcpkg/artifacts/fd3d78d7/tools.open.cmsis.pack.cmsis.toolbox/2.0.0/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES AS_ARM C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

set(CMAKE_AS_ARM_FLAGS "${AS_ARM_CPU} ${AS_ARM_BYTE_ORDER} ${AS_ARM_DEFINES} ${AS_ARM_FLAGS} ${AS_FLAGS_GLOBAL}")
cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_BYTE_ORDER} ${CC_DEFINES} ${CC_SECURE} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_SECURE} ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Local Flags

foreach(SRC ${AS_ARM_SRC_FILES})
  set_source_files_properties(${SRC} PROPERTIES LANGUAGE AS_ARM)
endforeach()

# File Includes, Defines and Options

foreach(SRC ${AS_ARM_SRC_FILES})
  string(REPLACE " " "?" S ${SRC})
  foreach(OPTION OPTIMIZE DEBUG WARNINGS)
    if(DEFINED ${OPTION}_${S})
      set(${OPTION}_LOCAL "${${OPTION}_${S}}")
    else()
      set(${OPTION}_LOCAL "${${OPTION}}")
    endif()
  endforeach()
  get_source_file_property(FILE_FLAGS ${SRC} COMPILE_FLAGS)
  if(FILE_FLAGS STREQUAL "NOTFOUND")
    set(FILE_FLAGS)
  endif()
  cbuild_set_options_flags(AS_ARM "${OPTIMIZE_LOCAL}" "${DEBUG_LOCAL}" "${WARNINGS_LOCAL}" "" FILE_FLAGS)
  set_source_files_properties(${SRC} PROPERTIES COMPILE_FLAGS "${FILE_FLAGS}")
endforeach()

foreach(SRC ${CC_SRC_FILES})
  string(REPLACE " " "?" S ${SRC})
  foreach(OPTION OPTIMIZE DEBUG WARNINGS LANGUAGE_CC)
    if(DEFINED ${OPTION}_${S})
      set(${OPTION}_LOCAL "${${OPTION}_${S}}")
    else()
      set(${OPTION}_LOCAL "${${OPTION}}")
    endif()
  endforeach()
  get_source_file_property(FILE_FLAGS ${SRC} COMPILE_FLAGS)
  if(FILE_FLAGS STREQUAL "NOTFOUND")
    set(FILE_FLAGS)
  endif()
  cbuild_set_options_flags(CC "${OPTIMIZE_LOCAL}" "${DEBUG_LOCAL}" "${WARNINGS_LOCAL}" "${LANGUAGE_CC_LOCAL}" FILE_FLAGS)
  set_source_files_properties(${SRC} PROPERTIES COMPILE_FLAGS "${FILE_FLAGS}")
endforeach()

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${AS_ARM_SRC_FILES} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "standard_gimbal")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
target_link_libraries(${TARGET} ${LIB_FILES})
