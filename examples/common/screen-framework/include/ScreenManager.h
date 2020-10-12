/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file ScreenManager.h
 *
 * Simple screen manager.
 *
 */

#pragma once

#include "Display.h"
#include "Screen.h"

#if CONFIG_HAVE_DISPLAY

extern uint16_t ScreenFontHeight;
extern uint16_t ScreenTitleSafeTop;
extern uint16_t ScreenTitleSafeBottom;

extern color_t ScreenNormalColor;
extern color_t ScreenFocusColor;

class Screen;

class ScreenManager
{
public:
    static void Init();

    static void Display();

    static void ButtonPressed(int id);

    static void PushScreen(Screen * screen);

    static void PopScreen();

    static void FocusBack();

    static int AddVLED(color_t color);

    static void SetVLED(int id, bool on);

    static void ToggleVLED(int id);
};

#endif // CONFIG_HAVE_DISPLAY
