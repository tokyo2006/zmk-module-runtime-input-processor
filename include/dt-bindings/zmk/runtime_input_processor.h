/*
 * Copyright (c) 2026 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef ZMK_DT_BINDINGS_INPUT_PROCESSOR_H_
#define ZMK_DT_BINDINGS_INPUT_PROCESSOR_H_

/**
 * @brief Axis snap modes for runtime input processor
 *
 * These constants can be used in device tree files to configure
 * axis snapping behavior.
 */

/** No axis snapping */
#define AXIS_SNAP_MODE_NONE 0

/** Snap to X axis (horizontal only) */
#define AXIS_SNAP_MODE_X 1

/** Snap to Y axis (vertical only) */
#define AXIS_SNAP_MODE_Y 2

/**
 * @brief Ball action trigger modes
 *
 * DELTA: Accumulate movement deltas, trigger when threshold exceeded. Suppresses original event.
 * TICK: Trigger behavior on every input tick that exceeds threshold. Passes through original event.
 */
#define BALL_ACTION_MODE_DISABLED 0
#define BALL_ACTION_MODE_DELTA 1
#define BALL_ACTION_MODE_TICK 2

/**
 * @brief Ball action direction filters
 *
 * ALL: Trigger on any direction (X or Y)
 * X_ONLY: Only trigger on X axis movement
 * Y_ONLY: Only trigger on Y axis movement
 */
#define BALL_ACTION_DIR_ALL 0
#define BALL_ACTION_DIR_X_ONLY 1
#define BALL_ACTION_DIR_Y_ONLY 2

#endif /* ZMK_DT_BINDINGS_INPUT_PROCESSOR_H_ */
