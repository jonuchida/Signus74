// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define MATRIX_ROWS 12
#define MATRIX_COLS 7

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE

#define SPLIT_USB_DETECT

// #define MASTER_LEFT

// #ifdef MASTER_LEFT
// #    define USE_SERIAL
// #    define EE_HANDS
// #endif


// #ifdef MASTER_RIGHT
// #    define USE_SERIAL
// #    define EE_HANDS
// #endif

// #define SERIAL_PIN D0
// Optionally add
// #define SPLIT_USB_DETECT // later if needed


