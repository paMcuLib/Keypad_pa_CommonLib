#include "../pa_Keypad.h"

#if INPUT_USE_KEYPAD
//初始化引脚
void pa_Keypad::hardwareInit()
{
    // HAL_GPIO_WritePin
}

void pa_Keypad::initInput()
{
}
void pa_Keypad::initOutput()
{
}

//设置行
void pa_Keypad::setOutput(unsigned char index, unsigned char state)
{
    switch (index)
    {
#if keypad_row > 0
    case 0:
        Gpio_write(keypad_row1, state);
        break;
#endif
#if keypad_row > 1
    case 1:
        Gpio_write(keypad_row2, state);
        break;
#endif
#if keypad_row > 2
    case 2:
        Gpio_write(keypad_row3, state);
        break;
#endif
#if keypad_row > 3
    case 3:
        Gpio_write(keypad_row4, state);
        break;
#endif
    default:
        break;
    }
}
//设置列
unsigned char pa_Keypad::readInput(unsigned char index)
{
    switch (index)
    {
#if keypad_col > 0
    case 0:
        Gpio_read(keypad_col1);
        break;
#endif
#if keypad_col > 1
    case 1:
        Gpio_read(keypad_col2);
        break;
#endif
#if keypad_col > 2
    case 2:
        Gpio_read(keypad_col3);
        break;
#endif
#if keypad_col > 3
    case 3:
        Gpio_read(keypad_col4);
        break;
#endif
    default:
        break;
    }
}
#endif