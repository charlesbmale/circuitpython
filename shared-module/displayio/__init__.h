/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO___INIT___H
#define MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO___INIT___H

#include "shared-bindings/displayio/Display.h"
#include "shared-bindings/displayio/FourWire.h"
#include "shared-bindings/displayio/Group.h"
#include "shared-bindings/displayio/ParallelBus.h"

typedef struct {
    union {
        displayio_fourwire_obj_t fourwire_bus;
        displayio_parallelbus_obj_t parallel_bus;
    };
    displayio_display_obj_t display;
} primary_display_t;

extern primary_display_t displays[CIRCUITPY_DISPLAY_LIMIT];

extern displayio_group_t circuitpython_splash;

void displayio_refresh_displays(void);
void reset_displays(void);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO___INIT___H
