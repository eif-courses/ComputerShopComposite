//
// Created by Marius on 2/18/2021.
//

#include "Color.h"
#include <windows.h>
void Color::SetConsoleColor(int value) {
  HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(handle, value);
}
