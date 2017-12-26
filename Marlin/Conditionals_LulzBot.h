#ifndef CONDITIONALS_LULZBOT
#define CONDITIONALS_LULZBOT

/* We define LULZBOT_ macros based on which printer or toolhead we are
 * building for, these macros are then placed where appropriate in the
 * Marlin source.
 *
 * Using our own set of macros and limiting changes to Marlin's files
 * to one-liners makes it easier to merge from upstream. All macros are
 * prefixed with LULZBOT_ so that it is easy to see what was changed and
 * where. If a default setting is commented out in Marlin, we define
 * LULZBOT_{SETTING}_DISABLED here, so we have a record of things that
 * got disabled.
 */

#define LULZBOT_FW_VERSION ".34" // Change this with each update

#if ( \
    !defined(LULZBOT_Gladiola_Mini) && \
    !defined(LULZBOT_Hibiscus_Mini2) && \
    !defined(LULZBOT_Gladiola_MiniLCD) && \
    !defined(LULZBOT_Hibiscus_Mini2LCD) && \
    !defined(LULZBOT_Gladiola_EinsyMini) && \
    !defined(LULZBOT_Hibiscus_EinsyMini2) && \
    !defined(LULZBOT_Gladiola_EinsyMiniLCD) && \
    !defined(LULZBOT_Hibiscus_EinsyMini2LCD) && \
    !defined(LULZBOT_Juniper_TAZ5) && \
    !defined(LULZBOT_Oliveoil_TAZ6) && \
    !defined(LULZBOT_Quiver_TAZ7) \
) || ( \
    !defined(TOOLHEAD_Gladiola_SingleExtruder) && \
    !defined(TOOLHEAD_Albatross_Flexystruder) && \
    !defined(TOOLHEAD_Finch_Aerostruder) && \
    !defined(TOOLHEAD_Finch_AerostruderV2) && \
    !defined(TOOLHEAD_Tilapia_SingleExtruder) && \
    !defined(TOOLHEAD_Kanyu_Flexystruder) && \
    !defined(TOOLHEAD_Opah_Moarstruder) && \
    !defined(TOOLHEAD_Javelin_DualExtruderV2) && \
    !defined(TOOLHEAD_Longfin_FlexyDually) && \
    !defined(TOOLHEAD_Yellowfin_DualExtruderV3) && \
    !defined(TOOLHEAD_Angelfish_Aerostruder) && \
    !defined(TOOLHEAD_Devel_ServoDual) \
)
    #error Must specify model and toolhead. Please see "Configuration_LulzBot.h" for directions.
#endif

/*********************** PRINTER MODEL CHARACTERISTICS **************************/

#if defined(LULZBOT_Gladiola_Mini)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini"
    #define LULZBOT_LCD_MACHINE_NAME "Mini"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_OPEN_ENDSTOPS
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 115200
    #define LULZBOT_UUID "351487b6-ca9a-4c1a-8765-d668b1da6585"
#endif

#if defined(LULZBOT_Gladiola_EinsyMini)
    /* Modified Gladiola Mini with Einsy board and half-height
     * X & Y motors (full-height Z motors must be re-wired in
     * series). X & Y endstops replaced w/ bumpers. */
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini"
    #define LULZBOT_LCD_MACHINE_NAME "Mini Einsy"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_EINSYRAMBO
    #define LULZBOT_USE_EARLY_EINSY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_SENSORLESS_HOMING
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 115200
    #define LULZBOT_UUID "4479bf92-7e47-4c2c-be95-64dd01bd413b"
#endif

#if defined(LULZBOT_Gladiola_EinsyMiniLCD)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini"
    #define LULZBOT_LCD_MACHINE_NAME "Mini Einsy"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_EINSYRAMBO
    #define LULZBOT_USE_EARLY_EINSY
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_SENSORLESS_HOMING
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 115200
    #define LULZBOT_UUID "4479bf92-7e47-4c2c-be95-64dd01bd413b"
#endif

#if defined(LULZBOT_Hibiscus_Mini2)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini 2"
    #define LULZBOT_LCD_MACHINE_NAME "Mini 2"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_TWO_PIECE_BED
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_CLOSED_ENDSTOPS
    #define LULZBOT_USE_Z_BELT
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_PRINTCOUNTER
    #define LULZBOT_UUID "1b8d32d3-0596-4335-8cd4-f3741a095087"
#endif

#if defined(LULZBOT_Hibiscus_EinsyMini2)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini 2"
    #define LULZBOT_LCD_MACHINE_NAME "Mini Einsy 2"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_EINSYRAMBO
    #define LULZBOT_USE_EARLY_EINSY
    #define LULZBOT_TWO_PIECE_BED
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_SENSORLESS_HOMING
    #define LULZBOT_USE_Z_BELT
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_PRINTCOUNTER
    #define LULZBOT_UUID "e5502411-d46d-421d-ba3a-a20126d7930f"
#endif

#if defined(LULZBOT_Hibiscus_EinsyMini2LCD)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini 2"
    #define LULZBOT_LCD_MACHINE_NAME "Mini Einsy 2"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_EINSYRAMBO
    #define LULZBOT_USE_EARLY_EINSY
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_TWO_PIECE_BED
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_SENSORLESS_HOMING
    #define LULZBOT_USE_Z_BELT
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_PRINTCOUNTER
    #define LULZBOT_UUID "e5502411-d46d-421d-ba3a-a20126d7930f"
#endif

#if defined(LULZBOT_Gladiola_MiniLCD)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini"
    #define LULZBOT_LCD_MACHINE_NAME "Mini LCD"
    #define LULZBOT_IS_MINI
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_OPEN_ENDSTOPS
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 115200
    #define LULZBOT_UUID "083f68f1-028e-494c-98e1-f2e0dfaee9a5"
#endif

#if defined(LULZBOT_Hibiscus_Mini2LCD)
    // Prototype Mini w/ Z-Belt
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot Mini 2"
    #define LULZBOT_LCD_MACHINE_NAME "Mini 2 LCD"
    #define LULZBOT_IS_MINI
    #define LULZBOT_TWO_PIECE_BED
    #define LULZBOT_MINI_BED
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_CLOSED_ENDSTOPS
    #define LULZBOT_USE_Z_BELT
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_PRINTCOUNTER
    #define LULZBOT_UUID "80fed4d6-4d15-4512-a02e-61b1dc4fb072"
#endif

#if defined(LULZBOT_Juniper_TAZ5)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot TAZ 5"
    #define LULZBOT_LCD_MACHINE_NAME "TAZ 5"
    #define LULZBOT_IS_TAZ
    #define LULZBOT_TAZ_BED
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_OPEN_ENDSTOPS
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_UUID "c3255c96-4097-4884-8ed0-ded2ff9bae61"
#endif

#if defined(LULZBOT_Oliveoil_TAZ6)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot TAZ 6"
    #define LULZBOT_LCD_MACHINE_NAME "TAZ 6"
    #define LULZBOT_IS_TAZ
    #define LULZBOT_TAZ_BED
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_HOME_BUTTON
    #define LULZBOT_USE_NORMALLY_CLOSED_ENDSTOPS
    #define LULZBOT_USE_Z_SCREW
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_UUID "845f003c-aebd-4e53-a6b9-7d0984fde609"
#endif

#if defined(LULZBOT_Quiver_TAZ7)
    #define LULZBOT_CUSTOM_MACHINE_NAME "LulzBot TAZ 7"
    #define LULZBOT_LCD_MACHINE_NAME "TAZ 7"
    #define LULZBOT_IS_TAZ
    #define LULZBOT_TAZ_BED
    #define LULZBOT_TWO_PIECE_BED
    #define LULZBOT_USE_LCD_DISPLAY
    #define LULZBOT_USE_AUTOLEVELING
    #define LULZBOT_USE_MIN_ENDSTOPS
    #define LULZBOT_USE_MAX_ENDSTOPS
    #define LULZBOT_USE_NORMALLY_CLOSED_ENDSTOPS
    #define LULZBOT_USE_Z_BELT
    #define LULZBOT_BAUDRATE 250000
    #define LULZBOT_PRINTCOUNTER
    #define LULZBOT_UUID "a952577d-8722-483a-999d-acdc9e772b7b"
#endif

/**************************** GENERAL CONFIGURATION *****************************/

#define LULZBOT_STRING_CONFIG_H_AUTHOR "(Aleph Objects Inc., LulzBot Git Repository)"
#define LULZBOT_EEPROM_SETTINGS
#define LULZBOT_EMERGENCY_PARSER
#define LULZBOT_NOZZLE_PARK_FEATURE
#define LULZBOT_AUTO_REPORT_TEMPERATURES
#define LULZBOT_ADVANCED_OK
#define LULZBOT_HOST_KEEPALIVE_FEATURE_DISABLED
#define LULZBOT_CLARIFY_ERROR_MESSAGES

// Marlin 1.1.4 has changed the behavior of G92 so that
// it changes software endstops, making it less useful
// for making position adjustments after hitting an
// endstop. We need the old behavior of G92 for the
// Yellowfin start GCODE and it is also a useful
// feature for custom height adjustments (something
// requested in the forums). The following restores
// the old behavior.

#define LULZBOT_G92_BACKWARDS_COMPATIBILITY

// Prior branches of the LulzBot firmware used G26
// to reset a probe failed condition. Marlin upstrem
// now redefines that for unified bed leveling. The
// following maps G26 to M999 for equivalent behavior,
// so long as UBL is disabled.
#define LULZBOT_G26_BACKWARDS_COMPATIBILITY

// The following should be kept more or less like M999
#define LULZBOT_G26_RESET_ACTION \
  Running = true; \
  lcd_reset_alert_level();

// Fix for auto0.g, which is broken
#define LULZBOT_AUTOSTART_BUGFIX

// Q&A wants to be able to use M226 on endstops switches
#define LULZBOT_NO_PIN_PROTECTION_ON_M226

// Marlin 1.1.5 has an issue where bed leveling is disabled when homing,
// this causes problems when rehoming X/Y after pausing a print.
#if defined(LULZBOT_USE_AUTOLEVELING)
    #define LULZBOT_G28_DISABLES_LEVELING_WORKAROUND
#endif

/******************** MOTHERBOARD AND PIN CONFIGURATION ***********************/

#if defined(TOOLHEAD_Devel_ServoDual)
    #undef LULZBOT_USE_HOME_BUTTON
#endif

// Whether endstops are inverting
#define LULZBOT_NORMALLY_CLOSED_ENDSTOP       false
#define LULZBOT_NORMALLY_OPEN_ENDSTOP         true
#define LULZBOT_NO_ENDSTOP                    true

#if defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_EINSYRAMBO)
    // Experimental Mini retrofitted with EinsyRambo from UltiMachine
    #define LULZBOT_MOTHERBOARD                   BOARD_EINSYRAMBO
    #define LULZBOT_CONTROLLER_FAN_PIN            FAN1_PIN  // Digital pin 6

#elif defined(LULZBOT_IS_MINI)
    #define LULZBOT_MOTHERBOARD                   BOARD_MINIRAMBO
    #define LULZBOT_CONTROLLER_FAN_PIN            FAN1_PIN  // Digital pin 6

#elif defined(LULZBOT_IS_TAZ)
    #define LULZBOT_MOTHERBOARD                   BOARD_RAMBO
    #define LULZBOT_CONTROLLER_FAN_PIN            FAN2_PIN  // Digital pin 2
#endif

#if defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_Z_MIN_PROBE_ENDSTOP
    #define LULZBOT_Z_MIN_PROBE_PIN               SERVO0_PIN // Digital pin 22
    // On the TAZ 6, the bed washers are on Z_MIN_PROBE while the
    // Z-Home button is on Z_MIN, yet we need both to be disabled
    // when z_probe_enabled is false. We added this special case
    // to "endstops.cpp"
    #define LULZBOT_Z_MIN_USES_Z_PROBE_ENABLED

#elif defined(LULZBOT_SENSORLESS_HOMING_Z)
    /* When using stallguard for sensorless Z homing, "pins_EINSYRAMBO.h"
    /* ties Z_MIN and Z_MAX to the diag output on the TMC. For the
    /* electrical probe, we use the Z_MIN connector on the board. */
    #define LULZBOT_Z_MIN_PROBE_ENDSTOP
    #define LULZBOT_Z_MIN_PROBE_PIN BOARD_Z_MIN_PIN

#else
    // The Mini and TAZ 7+ lack a home button and probe using the Z_MIN pin.
    #define LULZBOT_Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#endif

/*********************** HOMING & AXIS DIRECTIONS ******************************/

#define LULZBOT_INVERT_X_DIR                      false
#define LULZBOT_INVERT_Y_DIR                      true
#define LULZBOT_INVERT_Z_DIR                      false
#define LULZBOT_INVERT_E0_DIR                     true
#define LULZBOT_INVERT_E1_DIR                     true

#if defined(LULZBOT_IS_MINI)
    #define LULZBOT_INVERT_X_HOME_DIR             -1 // Home left
    #define LULZBOT_INVERT_Y_HOME_DIR              1 // Home bed forward
    #if defined(LULZBOT_SENSORLESS_HOMING_Z)
        #define LULZBOT_INVERT_Z_HOME_DIR         -1 // Home to bottom
    #else
        #define LULZBOT_INVERT_Z_HOME_DIR          1 // Home to top
    #endif
    #define LULZBOT_QUICKHOME

#elif defined(LULZBOT_Juniper_TAZ5)
    #define LULZBOT_INVERT_X_HOME_DIR             -1 // Home left
    #define LULZBOT_INVERT_Y_HOME_DIR             -1 // Home bed rear
    #define LULZBOT_INVERT_Z_HOME_DIR             -1 // Home towards bed
    #define LULZBOT_QUICKHOME

#elif defined(LULZBOT_IS_TAZ) && !defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_INVERT_X_HOME_DIR             -1 // Home left
    #define LULZBOT_INVERT_Y_HOME_DIR              1 // Home bed forward
    #define LULZBOT_INVERT_Z_HOME_DIR              1 // Home to top
    #define LULZBOT_QUICKHOME

#elif defined(LULZBOT_IS_TAZ) &&  defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_INVERT_X_HOME_DIR             -1 // Home left
    #define LULZBOT_INVERT_Y_HOME_DIR              1 // Home bed forward
    #define LULZBOT_INVERT_Z_HOME_DIR             -1 // Home towards bed
    #define LULZBOT_QUICKHOME
#endif

#if defined(LULZBOT_MINI_BED)
    #define LULZBOT_HOMING_FEEDRATE_XY            (30*60) // mm/m
    #define LULZBOT_HOMING_FEEDRATE_Z              (8*60) // mm/m

#elif defined(LULZBOT_TAZ_BED) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_HOMING_FEEDRATE_XY            (50*60) // mm/m
    #define LULZBOT_HOMING_FEEDRATE_Z             (10*60) // mm/m

#elif defined(LULZBOT_TAZ_BED) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_HOMING_FEEDRATE_XY            (50*60) // mm/m
    #define LULZBOT_HOMING_FEEDRATE_Z             (3*60)  // mm/m

#endif // LULZBOT_TAZ_BED

// Only the TAZ 6 has a Z-homing button
#if defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_Z_SAFE_HOMING
    #define LULZBOT_Z_SAFE_HOMING_X_POINT         (-19)
    #define LULZBOT_Z_SAFE_HOMING_Y_POINT         (258)
    #define LULZBOT_Z_HOMING_HEIGHT               5

    #define LULZBOT_AFTER_Z_HOME_Z_RAISE         10
    #define LULZBOT_AFTER_Z_HOME_Z_ORIGIN         0

    #define LULZBOT_HOMING_USES_PROBE_PINS
#elif defined(LULZBOT_IS_TAZ) && !defined(LULZBOT_USE_HOME_BUTTON)
    // TAZ 5 safe homing position so fan duct does not hit.
    #define LULZBOT_Z_SAFE_HOMING
    #define LULZBOT_Z_SAFE_HOMING_X_POINT         10
    #define LULZBOT_Z_SAFE_HOMING_Y_POINT         10
    #define LULZBOT_Z_HOMING_HEIGHT               5
#else
    #define LULZBOT_Z_HOMING_HEIGHT               0
#endif  // LULZBOT_USE_HOME_BUTTON

#define LULZBOT_G92_Z(z) \
      stepper.synchronize(); \
      current_position[Z_AXIS] = z; \
      SYNC_PLAN_POSITION_KINEMATIC();

#define LULZBOT_G0_Z(z) \
      do_blocking_move_to_z(z);

// On a TAZ, we need to raise the print head after homing to clear the button;
// On the yellowfin we also need to reset the origin to account for the Z home riser.

#if defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_AFTER_Z_HOME_ACTION \
        if(home_all || homeZ) { \
          LULZBOT_G92_Z(LULZBOT_AFTER_Z_HOME_Z_ORIGIN); \
          LULZBOT_G0_Z(LULZBOT_AFTER_Z_HOME_Z_RAISE); \
        }
#else
    #define LULZBOT_AFTER_Z_HOME_ACTION
#endif

/*********************** AUTOLEVELING / BED PROBE *******************************/

#if defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_MINI_BED)
    #define LULZBOT_LEFT_PROBE_BED_POSITION        0
    #define LULZBOT_RIGHT_PROBE_BED_POSITION     164
    #define LULZBOT_BACK_PROBE_BED_POSITION      162
    #define LULZBOT_FRONT_PROBE_BED_POSITION      -6

#elif defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_TAZ_BED)
    #define LULZBOT_LEFT_PROBE_BED_POSITION       -9
    #define LULZBOT_RIGHT_PROBE_BED_POSITION     288
    #define LULZBOT_BACK_PROBE_BED_POSITION      289
    #define LULZBOT_FRONT_PROBE_BED_POSITION      -9
#endif

#if defined(LULZBOT_USE_AUTOLEVELING)
    #define LULZBOT_NOZZLE_CLEAN_FEATURE
    // Select type of leveling to use:
    //#define LULZBOT_AUTO_BED_LEVELING_BILINEAR
    #define LULZBOT_AUTO_BED_LEVELING_LINEAR
    //#define LULZBOT_AUTO_BED_LEVELING_3POINT
#endif

#if defined(LULZBOT_AUTO_BED_LEVELING_3POINT)
  // Experimental three point leveling.
  #define LULZBOT_ABL_PROBE_PT_1_X LULZBOT_LEFT_PROBE_BED_POSITION
  #define LULZBOT_ABL_PROBE_PT_1_Y LULZBOT_FRONT_PROBE_BED_POSITION
  #define LULZBOT_ABL_PROBE_PT_2_X LULZBOT_RIGHT_PROBE_BED_POSITION
  #define LULZBOT_ABL_PROBE_PT_2_Y LULZBOT_FRONT_PROBE_BED_POSITION
  #define LULZBOT_ABL_PROBE_PT_3_X LULZBOT_RIGHT_PROBE_BED_POSITION
  #define LULZBOT_ABL_PROBE_PT_3_Y LULZBOT_BACK_PROBE_BED_POSITION
#elif defined(LULZBOT_AUTO_BED_LEVELING_LINEAR) || defined(LULZBOT_AUTO_BED_LEVELING_BILINEAR)
  // Traditionally LulzBot printers have employed a four-point leveling
  // using a degenerate 2x2 grid. This is the traditional behavior.
  #define LULZBOT_GRID_MAX_POINTS_X            2
  #define LULZBOT_GRID_MAX_POINTS_Y            2
  // We can't control the order of probe points exactly, but
  // this makes the probe start closer to the wiper pad.
  #define LULZBOT_PROBE_Y_FIRST
#endif

/* Auto-leveling was introduced on the Mini and TAZ 6.
 * Define probe parameters related to bed leveling,
 * e.g. the washers on the bed. These are confusingly
 * named Z_MIN_PROBE in Marlin. The Z-Home switch
 * is called Z_MIN_ENDSTOP
 */
#if defined(LULZBOT_USE_AUTOLEVELING)
    #define LULZBOT_FIX_MOUNTED_PROBE
    #define LULZBOT_PROBE_POINTS_OUTSIDE_OF_BED
#endif // LULZBOT_USE_AUTOLEVELING

#define LULZBOT_PROBE_DOUBLE_TOUCH
#define LULZBOT_X_PROBE_OFFSET_FROM_EXTRUDER  0
#define LULZBOT_Y_PROBE_OFFSET_FROM_EXTRUDER  0
#define LULZBOT_Z_PROBE_OFFSET_RANGE_MIN      -2
#define LULZBOT_Z_PROBE_OFFSET_RANGE_MAX      5
#define LULZBOT_XY_PROBE_SPEED                6000
#define LULZBOT_Z_PROBE_SPEED_SLOW           (1*60)
#define LULZBOT_Z_PROBE_SPEED_FAST           (8*60)
#define LULZBOT_Z_CLEARANCE_DEPLOY_PROBE      5
#define LULZBOT_Z_CLEARANCE_BETWEEN_PROBES    5

/* On the Finch Aero toolhead, we need to disable the extruder
 * motor as it causes noise on the probe line on Foxglove Minis.
 */
#if defined(LULZBOT_IS_MINI) && defined(TOOLHEAD_Finch_Aerostruder)
    #define LULZBOT_EXTRUDER_MOTOR_SHUTOFF_ON_PROBE(probing) \
        if(probing) { \
            disable_E0(); \
        } else { \
            enable_E0(); \
        }
#else
    #define LULZBOT_EXTRUDER_MOTOR_SHUTOFF_ON_PROBE(probing)
#endif

/* Enable the probe pins only only when homing/probing,
 * as this helps reduce EMI by grounding the lines.
 *
 * On Mini:
 *   Z_MIN_PIN are the bed washers.
 *
 * On TAZ:
 *   Z_MIN_PIN corresponds to the Z-Home push button.
 *   Z_MIN_PROBE_PIN are the bed washers.
 *
 * On TAZ or Mini with TMC2130 and Sensorless Homing on Z:
 *   Z_MIN_PIN corresponds to stallguard diag pin
 *   Z_MIN_PROBE_PIN are the bed washers.
 */
#define LULZBOT_SET_PIN_STATE(pin, enable) \
    if(enable) { \
        /* Set as inputs with pull-up resistor */ \
        SET_INPUT(pin); \
        WRITE(pin, HIGH); \
    } else { \
        /* Ground to prevent EMI */ \
        SET_OUTPUT(pin); \
        WRITE(pin, LOW); \
    }

#if defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_SENSORLESS_HOMING_Z)
    #define LULZBOT_ENABLE_PROBE_PINS(enable) { \
        endstops.enable_z_probe(enable); \
        LULZBOT_SET_PIN_STATE(LULZBOT_Z_MIN_PROBE_PIN, enable) \
        LULZBOT_EXTRUDER_MOTOR_SHUTOFF_ON_PROBE(enable) \
    }

#elif defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_MINI_BED)
    #define LULZBOT_ENABLE_PROBE_PINS(enable) { \
        endstops.enable_z_probe(enable); \
        LULZBOT_SET_PIN_STATE(Z_MIN_PIN, enable) \
        LULZBOT_EXTRUDER_MOTOR_SHUTOFF_ON_PROBE(enable) \
    }

#elif defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_USE_HOME_BUTTON)
    #define LULZBOT_ENABLE_PROBE_PINS(enable) { \
        endstops.enable_z_probe(enable); \
        LULZBOT_SET_PIN_STATE(Z_MIN_PIN, enable) \
        LULZBOT_SET_PIN_STATE(LULZBOT_Z_MIN_PROBE_PIN, enable) \
    }
#else
    #define LULZBOT_ENABLE_PROBE_PINS(enable)
#endif

/* Make it so M42 S<state> controls the state of the
/* probe lines. This is useful for troubleshooting. */
#define LULZBOT_M42_TOGGLES_PROBE_PINS \
    if (!parser.seenval('P')) { \
      LULZBOT_ENABLE_PROBE_PINS(pin_status); \
      return; \
    }

/****************************** BACKLASH COMPENSATION **************************/

#if defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_BELT)
    //#define LULZBOT_AXIS_BACKLASH {0.27, 0.05, 0.4, 0}
    #define LULZBOT_AXIS_BACKLASH {0.00, 0.00, 0.35, 0}
#endif

#if defined(LULZBOT_AXIS_BACKLASH)
    #define SIGN(v) ((v < 0) ? -1.0 : 1.0)
    #define LULZBOT_AXIS_BACKLASH_CORRECTION \
        { \
            static const float backlash[NUM_AXIS] = LULZBOT_AXIS_BACKLASH; \
            static uint8_t last_direction_bits; \
            static bool is_correction = false; \
            if(!is_correction) { \
                uint8_t changed_dir = last_direction_bits ^ dm; \
                /* Ignore direction change if no steps are taken in that direction */ \
                if(da == 0) CBI(changed_dir, X_AXIS); \
                if(db == 0) CBI(changed_dir, Y_AXIS); \
                if(dc == 0) CBI(changed_dir, Z_AXIS); \
                if(de == 0) CBI(changed_dir, E_AXIS); \
                last_direction_bits ^= changed_dir; \
                /* When there is motion in an opposing direction, apply the backlash correction */ \
                if(changed_dir) { \
                    long saved_position[NUM_AXIS] = { 0 }; \
                    COPY(saved_position, position); \
                    const long x_backlash = TEST(changed_dir, X_AXIS) ? backlash[X_AXIS] * axis_steps_per_mm[X_AXIS] * SIGN(da) : 0; \
                    const long y_backlash = TEST(changed_dir, Y_AXIS) ? backlash[Y_AXIS] * axis_steps_per_mm[Y_AXIS] * SIGN(db) : 0; \
                    const long z_backlash = TEST(changed_dir, Z_AXIS) ? backlash[Z_AXIS] * axis_steps_per_mm[Z_AXIS] * SIGN(dc) : 0; \
                    const long e_backlash = TEST(changed_dir, E_AXIS) ? backlash[E_AXIS] * axis_steps_per_mm[E_AXIS] * SIGN(de) : 0; \
                    is_correction = true; /* Avoid infinite recursion */ \
                    _buffer_line( \
                        (position[X_AXIS] + x_backlash)/axis_steps_per_mm[X_AXIS], \
                        (position[Y_AXIS] + y_backlash)/axis_steps_per_mm[Y_AXIS], \
                        (position[Z_AXIS] + z_backlash)/axis_steps_per_mm[Z_AXIS], \
                        (position[E_AXIS] + e_backlash)/axis_steps_per_mm[E_AXIS_N], \
                        fr_mm_s, extruder \
                    ); \
                    is_correction = false; \
                    COPY(position, saved_position); \
                } \
            } \
        }
#else
    #define LULZBOT_AXIS_BACKLASH_CORRECTION
#endif

/*************************** COMMON TOOLHEADS PARAMETERS ***********************/

#define LULZBOT_DEFAULT_EJERK                10.0

/**************************** MINI TOOLHEADS ***********************************/

#if defined(TOOLHEAD_Gladiola_SingleExtruder) || defined(TOOLHEAD_Albatross_Flexystruder) || defined(TOOLHEAD_Finch_Aerostruder) || defined(TOOLHEAD_Finch_AerostruderV2)
    #define LULZBOT_EXTRUDERS                  1
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ       0
    #define LULZBOT_MOTOR_CURRENT_E         1250 // mA
#endif /* TOOLHEAD_Gladiola_SingleExtruder || TOOLHEAD_Albatross_Flexystruder || TOOLHEAD_Finch_Aerostruder */

#if defined(TOOLHEAD_Gladiola_SingleExtruder)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Single Extruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE             "SingleExtruder"
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING        LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_AO_Hexagon
    #define LULZBOT_E_STEPS                        833
#endif /* TOOLHEAD_Gladiola_SingleExtruder */

#if defined(TOOLHEAD_Albatross_Flexystruder)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Flexystruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE             "Flexystruder"
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING        LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_AO_Hexagon
        #define LULZBOT_E_STEPS                    833
#endif /* TOOLHEAD_Albatross_Flexystruder */

#if defined(TOOLHEAD_Finch_Aerostruder)
    // Prototype Aero toolhead for Mini
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Aerostruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE             "Aerostruder"
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING        LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_E3D_Titan_Aero
    #define LULZBOT_E_STEPS                        420
#endif /* TOOLHEAD_Finch_Aerostruder */

/******************************** Mini 2 / TAZ 7 TOOLHEADS *********************/

#if defined(TOOLHEAD_Finch_AerostruderV2)
    // Prototype Aero toolhead for Mini
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Aerostruder v2"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE             "Aerostruder"
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING        LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_E3D_Titan_Aero
    #define LULZBOT_E_STEPS                        420
#endif /* TOOLHEAD_Finch_AerostruderV2 */

/******************************** TAZ TOOLHEADS ********************************/

#if defined(TOOLHEAD_Tilapia_SingleExtruder) || defined(TOOLHEAD_Angelfish_Aerostruder)
    #define LULZBOT_EXTRUDERS                  1
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ       0
#endif /* TOOLHEAD_Tilapia_SingleExtruder || TOOLHEAD_Angelfish_Aerostruder */

#if defined(TOOLHEAD_Tilapia_SingleExtruder)
    #define LULZBOT_LCD_TOOLHEAD_NAME          "Single Extruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "SingleExtruder"
    #define LULZBOT_MOTOR_CURRENT_E            750 // mA
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_AO_Hexagon
    #define LULZBOT_E_STEPS                    830
#endif /* TOOLHEAD_Tilapia_SingleExtruder */

#if defined(TOOLHEAD_Angelfish_Aerostruder)
    // Prototype Aero for TAZ
    #define LULZBOT_LCD_TOOLHEAD_NAME          "Aerostruder"
//          16 chars max                       ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "Aerostruder"
    #define LULZBOT_MOTOR_CURRENT_E            875 // mA
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_E3D_Titan_Aero
    #define LULZBOT_E_STEPS                    420
#endif /* TOOLHEAD_Angelfish_Aerostruder */

#if defined(TOOLHEAD_Kanyu_Flexystruder)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Flexystruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "Flexystruder"
    #define LULZBOT_MOTOR_CURRENT_E            410 // mA
    #define LULZBOT_EXTRUDERS                  1
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ         12
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ         7
    #define LULZBOT_TOOLHEAD_Y_MAX_ADJ         1
    #define LULZBOT_TOOLHEAD_Y_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ       0
    #define LULZBOT_AO_Hexagon
    #define LULZBOT_E_STEPS                    830
#endif /* TOOLHEAD_Kanyu_Flexystruder */

#if defined(TOOLHEAD_Opah_Moarstruder)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "MOARstruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "MOARstruder"
    #define LULZBOT_DEFAULT_ACCELERATION       250
    #define LULZBOT_DEFAULT_TRAVEL_ACCELERATION 250
    #define LULZBOT_MOTOR_CURRENT_E            750 // mA
    #define LULZBOT_EXTRUDERS                  1
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ         10
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ       0
    #define LULZBOT_Moarstruder
    #define LULZBOT_E_STEPS                    830
#endif /* TOOLHEAD_Opah_Moarstruder */

#if defined(TOOLHEAD_Javelin_DualExtruderV2) || defined(TOOLHEAD_Longfin_FlexyDually) || defined(TOOLHEAD_Yellowfin_DualExtruderV3) || defined(TOOLHEAD_Devel_ServoDual)
    #define LULZBOT_EXTRUDER_FAN_ON_PIN_6      // For backwards compatibility with TAZ 4
    #define LULZBOT_MOTOR_CURRENT_E0           875 // mA
    #define LULZBOT_MOTOR_CURRENT_E1           875 // mA
    #define LULZBOT_EXTRUDERS                  2
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ         12
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ         2
    #define LULZBOT_TOOLHEAD_Y_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Y_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MAX_ADJ         0
    #define LULZBOT_TOOLHEAD_Z_MIN_ADJ         0
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ       0
    #define LULZBOT_TEMP_SENSOR_1              5
    #define LULZBOT_NO_MOVE_ON_TOOLHEAD_CHANGE
    #define LULZBOT_DISTINCT_E_FACTORS
#endif /* TOOLHEAD_Javelin_DualExtruderV2 || TOOLHEAD_Longfin_FlexyDually || TOOLHEAD_Yellowfin_DualExtruderV3 */

#if defined(TOOLHEAD_Javelin_DualExtruderV2)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Dual Extruder 2"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "DualExtruder v2"
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ      48
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_E_STEPS                    830
    #define LULZBOT_AO_Hexagon
#endif /* TOOLHEAD_Javelin_DualExtruderV2 */

#if defined(TOOLHEAD_Longfin_FlexyDually)
    #define LULZBOT_LCD_TOOLHEAD_NAME              "FlexyDually v2"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "FlexyDually v2"
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ       0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ      48
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING    LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_E_STEPS                  830
    #define LULZBOT_AO_Hexagon
#endif /* TOOLHEAD_Longfin_FlexyDually */

#if defined(TOOLHEAD_Yellowfin_DualExtruderV3)
    // Prototype Dual v3 for TAZ.
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Dual Extruder 3"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE         "DualExtruder v3"
    #undef  LULZBOT_AFTER_Z_HOME_Z_RAISE
    #define LULZBOT_AFTER_Z_HOME_Z_RAISE           16
    #undef  LULZBOT_AFTER_Z_HOME_Z_ORIGIN
    #define LULZBOT_AFTER_Z_HOME_Z_ORIGIN          5.5
    #define LULZBOT_TOOLHEAD_WIPE_X1_ADJ          -6
    #define LULZBOT_TOOLHEAD_WIPE_X2_ADJ          -6
    #define LULZBOT_TOOLHEAD_WIPE_Y1_ADJ           0
    #define LULZBOT_TOOLHEAD_WIPE_Y2_ADJ           0
    #undef  LULZBOT_Z_HOMING_HEIGHT
    #define LULZBOT_Z_HOMING_HEIGHT                10
    #undef  LULZBOT_Z_CLEARANCE_DEPLOY_PROBE
    #define LULZBOT_Z_CLEARANCE_DEPLOY_PROBE       10
    #undef  LULZBOT_Z_CLEARANCE_BETWEEN_PROBES
    #define LULZBOT_Z_CLEARANCE_BETWEEN_PROBES     10
    #undef  LULZBOT_BACK_PROBE_BED_POSITION
    #define LULZBOT_BACK_PROBE_BED_POSITION       293
    #if defined(LULZBOT_USE_HOME_BUTTON)
        #undef  LULZBOT_Z_SAFE_HOMING_X_POINT
        #undef  LULZBOT_Z_SAFE_HOMING_Y_POINT
        #define LULZBOT_Z_SAFE_HOMING_X_POINT    (-22)    // X point for Z homing when homing all axis (G28)
        #define LULZBOT_Z_SAFE_HOMING_Y_POINT    (265)    // Y point for Z homing when homing all axis (G28)
    #endif /* LULZBOT_USE_HOME_BUTTON */
    #undef  LULZBOT_TOOLHEAD_X_MAX_ADJ
    #define LULZBOT_TOOLHEAD_X_MAX_ADJ             10
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING       LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_SWAP_EXTRUDERS
    #undef  LULZBOT_INVERT_E1_DIR
    #define LULZBOT_INVERT_E1_DIR                 false
    #define LULZBOT_E_STEPS                        760
    #define LULZBOT_E3D_SOMEstruder_x2
#endif /* TOOLHEAD_Yellowfin_DualExtruderV3 */

#if defined(TOOLHEAD_Devel_ServoDual)
    // Experimental dual nozzle using a servo
    #define LULZBOT_LCD_TOOLHEAD_NAME              "Servo McStruder"
//          16 chars max                            ^^^^^^^^^^^^^^^
    #define LULZBOT_M115_EXTRUDER_TYPE             "ServoMcStruder"
    #define LULZBOT_NUM_SERVOS                     1
    #define LULZBOT_SWITCHING_EXTRUDER_NO_REVERSE
    #define LULZBOT_SWITCHING_EXTRUDER
    #define LULZBOT_SWITCHING_NOZZLE
    #define LULZBOT_SWITCHING_SERVO_ANGLES   { 0, 67 }
    #undef  LULZBOT_TOOLHEAD_X_MIN_ADJ
    #define LULZBOT_TOOLHEAD_X_MIN_ADJ              14
    #define LULZBOT_E_STEPS                      420
    #define LULZBOT_X_MAX_ENDSTOP_INVERTING       LULZBOT_NO_ENDSTOP
    #define LULZBOT_AO_Hexagon
#endif /* TOOLHEAD_Devel_ServoDual */

/************************ CUSTOMIZE VERSION STRING ***************************/

// The Makefile and build-lulzbot-firmware.sh has an option to generate
// firmware without any identifying version or build timestamp. This is
// used in internal testing to allow us to binary diff across .hex files.
#if defined(LULZBOT_MASK_VERSION)
    #undef  LULZBOT_FW_VERSION
    #define LULZBOT_FW_VERSION ".xx"
#endif

#define LULZBOT_DETAILED_BUILD_VERSION " FIRMWARE_VERSION:" SHORT_BUILD_VERSION LULZBOT_FW_VERSION " EXTRUDER_TYPE:" LULZBOT_M115_EXTRUDER_TYPE
#define LULZBOT_STRING_DISTRIBUTION_DATE __DATE__ __TIME__
#define LULZBOT_SOURCE_CODE_URL "https://code.alephobjects.com/diffusion/MARLIN"

/*************************** TEMPERATURE SETTINGS *****************************/

#define LULZBOT_TEMP_SENSOR_0                 5
#define LULZBOT_TEMP_SENSOR_BED               7
#define LULZBOT_TEMP_RESIDENCY_TIME           1
#define LULZBOT_TEMP_HYSTERESIS               10
#define LULZBOT_TEMP_WINDOW                   10

#define LULZBOT_TEMP_BED_RESIDENCY_TIME       1
#define LULZBOT_TEMP_BED_HYSTERESIS           5
#define LULZBOT_TEMP_BED_WINDOW               5

#define LULZBOT_HEATER_MAXTEMP                305
#define LULZBOT_EXTRUDE_MINTEMP               120

#define LULZBOT_THERMAL_PROTECTION_PERIOD     15     // Seconds
#define LULZBOT_THERMAL_PROTECTION_HYSTERESIS 30     // Degrees Celsius

#define LULZBOT_THERMAL_PROTECTION_BED_PERIOD     15     // Seconds
#define LULZBOT_THERMAL_PROTECTION_BED_HYSTERESIS 10     // Degrees Celsius

#if defined(LULZBOT_IS_MINI)
    // Heater current: 24V/5.5 Ohms = 4.4A
    #define LULZBOT_MAX_BED_POWER      255  // limits duty cycle to bed; 255=full current
    #define LULZBOT_WATCH_TEMP_PERIOD   20  // Seconds
    #define LULZBOT_WATCH_TEMP_INCREASE  2  // Degrees Celsius
#elif defined(LULZBOT_IS_TAZ)
    // Heater current: 24V/1.6 Ohms = 15A
    // Set Max Bed Power to 80% for a safety margin on the 15A fuse.
    #define LULZBOT_MAX_BED_POWER      206  // limits duty cycle to bed; 255=full current
    #define LULZBOT_WATCH_TEMP_PERIOD   40  // Seconds
    #define LULZBOT_WATCH_TEMP_INCREASE 10  // Degrees Celsius
#endif

// Marlin 1.1.5 no longer issues MIN_TEMP errors and appears to handle
// thermal runaway via other means. However, since our users expect a
// MIN_TEMP error when disconnecting their print head, this could be
// perceived as a safety issue. This is a workaround in "temperature.cpp"
// to re-enable that functionality.

#define LULZBOT_MIN_TEMP_WORKAROUND \
    static int delayBeforeStartMeasuring = OVERSAMPLENR; \
        if(delayBeforeStartMeasuring > 0) { \
            delayBeforeStartMeasuring--; \
        } else { \
            if (current_temperature[e] > HEATER_0_MAXTEMP) max_temp_error(0); \
            if (current_temperature[e] < HEATER_0_MINTEMP) min_temp_error(0); \
        }

/******************************** HEATING ELEMENTS *****************************/

#define LULZBOT_PIDTEMP
#define LULZBOT_PIDTEMPBED

// Hotend variants

#if defined(LULZBOT_Moarstruder)
    // LulzBot MOARstruder (40v)
    #define LULZBOT_DEFAULT_Kp 55.64
    #define LULZBOT_DEFAULT_Ki 6.79
    #define LULZBOT_DEFAULT_Kd 113.94
#endif /* LULZBOT_Moarstruder */

#if defined(LULZBOT_E3D_SOMEstruder_x2)
    // Side-by-side LulzBot E3D SOMEstruder (24v) on Yellowfin Dual
    #define LULZBOT_DEFAULT_Kp 47.45
    #define LULZBOT_DEFAULT_Ki 4.83
    #define LULZBOT_DEFAULT_Kd 116.63
#endif /* LULZBOT_E3D_SOMEstruder_x2 */

#if defined(LULZBOT_AO_Hexagon)
    // LulzBot AO-Hexagon (24v)
    #define LULZBOT_DEFAULT_Kp 28.79
    #define LULZBOT_DEFAULT_Ki 1.91
    #define LULZBOT_DEFAULT_Kd 108.51
#endif /* LULZBOT_AO_Hexagon */

#if defined(LULZBOT_E3D_Titan_Aero)
    // LulzBot V6 block with E3D Titan Aero
    #define LULZBOT_DEFAULT_Kp 19.83
    #define LULZBOT_DEFAULT_Ki  1.53
    #define LULZBOT_DEFAULT_Kd 64.16
#endif /* LULZBOT_E3D_Titan_Aero */

// Heated bed variants

//24V 360W silicone heater from NPH on 3mm borosilicate (TAZ 2.2+)
#if defined(LULZBOT_TAZ_BED) && !defined(LULZBOT_TWO_PIECE_BED)
  #define LULZBOT_DEFAULT_bedKp                 162
  #define LULZBOT_DEFAULT_bedKi                 17
  #define LULZBOT_DEFAULT_bedKd                 378

// Modular two piece bed (TAZ 7+)
#elif defined(LULZBOT_TAZ_BED) && defined(LULZBOT_TWO_PIECE_BED)
  #define LULZBOT_DEFAULT_bedKp                 286.02
  #define LULZBOT_DEFAULT_bedKi                 54.55
  #define LULZBOT_DEFAULT_bedKd                 374.90

//24V 360W silicone heater from NPH on 3mm borosilicate (TAZ 2.2+)
#elif defined(LULZBOT_MINI_BED) && !defined(LULZBOT_TWO_PIECE_BED)
  #define LULZBOT_DEFAULT_bedKp                 294
  #define LULZBOT_DEFAULT_bedKi                 65
  #define LULZBOT_DEFAULT_bedKd                 382

// Modular two piece bed (Mini 2+)
#elif defined(LULZBOT_MINI_BED) && defined(LULZBOT_TWO_PIECE_BED)
  #define LULZBOT_DEFAULT_bedKp                 384.33
  #define LULZBOT_DEFAULT_bedKi                  72.17
  #define LULZBOT_DEFAULT_bedKd                 511.64
#endif

/****************************** FAN CONFIGURATION ******************************/

// For the Pelonis C4010L24BPLB1b-7 fan, we need a relative low
// PWM frequency of about 122Hz in order for the fan to turn.
// By default, FAST_PWM_FAN appears to PWM at ~31kHz, but if we
// set a prescale of 4, it divides this by 256 to get us down to
// the frequency we need.

#define LULZBOT_FAST_PWM_FAN
#define LULZBOT_FAST_PWM_SCALE                    4

#define LULZBOT_FAN_KICKSTART_TIME              100
#define LULZBOT_FAN_MIN_PWM                      70

#define LULZBOT_USE_CONTROLLER_FAN
#if defined(LULZBOT_IS_MINI)
    // The Mini fan runs rather loud at full speed.
    #define LULZBOT_CONTROLLERFAN_SPEED         120
#elif defined(LULZBOT_IS_TAZ)
    #define LULZBOT_CONTROLLERFAN_SPEED         255
#endif

// As of Marlin 1.1.5, FAST_PWM_FAN adjusts the frequencies for
// all fans except the controller fan. This workaround allows
// the controller fan PWM freq to be adjusted to 122Hz (this
// may not be necessary, but since the Pelonis fan likes 122Hz,
// we are trying to keep all the fan frequencies at that).
#define LULZBOT_FAST_PWM_CONTROLLER_FAN_WORKAROUND

/******************************* AXIS TRAVEL LIMITS *****************************/

/* Define min and max travel limits based on the printer model using a standard
 * toolhead, then define adjustments from the standard for alternative toolheads.
 * This allows us to accomodate toolheads that might be wider or taller than the
 * standard.
 */

#if defined(LULZBOT_IS_MINI)
    #define LULZBOT_STANDARD_X_MAX_POS         165
    #define LULZBOT_STANDARD_X_MIN_POS           0
    #define LULZBOT_STANDARD_Y_MAX_POS         191
    #define LULZBOT_STANDARD_Y_MIN_POS          -6

    #define LULZBOT_X_BED_SIZE                 155
    #define LULZBOT_Y_BED_SIZE                 155

#elif defined(LULZBOT_Juniper_TAZ5)
    #define LULZBOT_STANDARD_X_MAX_POS         298
    #define LULZBOT_STANDARD_X_MIN_POS           0
    #define LULZBOT_STANDARD_Y_MAX_POS         276
    #define LULZBOT_STANDARD_Y_MIN_POS           0

    #define LULZBOT_X_BED_SIZE                 288
    #define LULZBOT_Y_BED_SIZE                 275

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_STANDARD_X_MAX_POS         300
    #define LULZBOT_STANDARD_X_MIN_POS         -16
    #define LULZBOT_STANDARD_Y_MAX_POS         303
    #define LULZBOT_STANDARD_Y_MIN_POS         -20

    #define LULZBOT_X_BED_SIZE                 280
    #define LULZBOT_Y_BED_SIZE                 280

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_STANDARD_X_MAX_POS         300
    #define LULZBOT_STANDARD_X_MIN_POS         -20
    #define LULZBOT_STANDARD_Y_MAX_POS         303
    #define LULZBOT_STANDARD_Y_MIN_POS         -20

    #define LULZBOT_X_BED_SIZE                 280
    #define LULZBOT_Y_BED_SIZE                 280
#endif

#if defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_STANDARD_Z_MIN_POS          -2
    #define LULZBOT_STANDARD_Z_MAX_POS         159

#elif defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_BELT) && defined(LULZBOT_SENSORLESS_HOMING_Z)
    #define LULZBOT_STANDARD_Z_MIN_POS        -3.5
    #define LULZBOT_STANDARD_Z_MAX_POS         183

#elif defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_STANDARD_Z_MIN_POS           0
    #define LULZBOT_STANDARD_Z_MAX_POS         183

#elif defined(LULZBOT_Juniper_TAZ5)
    #define LULZBOT_STANDARD_Z_MIN_POS           0
    #define LULZBOT_STANDARD_Z_MAX_POS         250

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_STANDARD_Z_MIN_POS           0
    #define LULZBOT_STANDARD_Z_MAX_POS         270

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_STANDARD_Z_MIN_POS           0
    #define LULZBOT_STANDARD_Z_MAX_POS         299
#endif

#define LULZBOT_X_MAX_POS (LULZBOT_STANDARD_X_MAX_POS - LULZBOT_TOOLHEAD_X_MAX_ADJ)
#define LULZBOT_X_MIN_POS (LULZBOT_STANDARD_X_MIN_POS - LULZBOT_TOOLHEAD_X_MIN_ADJ)
#define LULZBOT_Y_MAX_POS (LULZBOT_STANDARD_Y_MAX_POS - LULZBOT_TOOLHEAD_Y_MAX_ADJ)
#define LULZBOT_Y_MIN_POS (LULZBOT_STANDARD_Y_MIN_POS - LULZBOT_TOOLHEAD_Y_MIN_ADJ)
#define LULZBOT_Z_MAX_POS (LULZBOT_STANDARD_Z_MAX_POS - LULZBOT_TOOLHEAD_Z_MAX_ADJ)
#define LULZBOT_Z_MIN_POS (LULZBOT_STANDARD_Z_MIN_POS - LULZBOT_TOOLHEAD_Z_MIN_ADJ)

/**************************** ENDSTOP CONFIGURATION ****************************/

#if defined(LULZBOT_USE_MIN_ENDSTOPS)
    #define LULZBOT_USE_XMIN_PLUG
    #define LULZBOT_USE_YMIN_PLUG
    #define LULZBOT_USE_ZMIN_PLUG
#endif

// Z-Max Endstops were introduced on the Mini and TAZ 6
#if defined(LULZBOT_USE_MAX_ENDSTOPS)
    #define LULZBOT_USE_XMAX_PLUG
    #define LULZBOT_USE_YMAX_PLUG
    #define LULZBOT_USE_ZMAX_PLUG
#endif

#define LULZBOT_ENDSTOPS_ALWAYS_ON_DEFAULT
#define LULZBOT_ABORT_ON_ENDSTOP_HIT_FEATURE_ENABLED

// Workaround for bug in Marlin 1.1.5 where motion is stopped a X or Y = 0
#define LULZBOT_MIN_SOFTWARE_ENDSTOPS_DISABLED

// The RAMBO does not support interrupts on all pins
// so leave the ENDSTOP_INTERRUPTS_FEATURE disabled

//#define LULZBOT_ENDSTOP_INTERRUPTS_FEATURE

/* Endstop settings are determined by printer model, except for the
 * X_MAX which varies by toolhead. */

#if defined(LULZBOT_USE_NORMALLY_CLOSED_ENDSTOPS)
    // TAZ 6+ and Hibiscus Mini onwards use normally closed endstops.
    // This is safer, as a loose connector or broken wire will halt
    // the axis
    #define LULZBOT_X_MIN_ENDSTOP_INVERTING       LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_Y_MIN_ENDSTOP_INVERTING       LULZBOT_NORMALLY_CLOSED_ENDSTOP


    // LULZBOT_X_MAX_ENDSTOP_INVERTING varies by toolhead
    #define LULZBOT_Y_MAX_ENDSTOP_INVERTING       LULZBOT_NORMALLY_CLOSED_ENDSTOP
    #define LULZBOT_Z_MAX_ENDSTOP_INVERTING       LULZBOT_NORMALLY_CLOSED_ENDSTOP

#elif defined(LULZBOT_USE_NORMALLY_OPEN_ENDSTOPS)
    #define LULZBOT_X_MIN_ENDSTOP_INVERTING       LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_Y_MIN_ENDSTOP_INVERTING       LULZBOT_NORMALLY_OPEN_ENDSTOP

    // LULZBOT_X_MAX_ENDSTOP_INVERTING varies by toolhead
    #define LULZBOT_Y_MAX_ENDSTOP_INVERTING       LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_Z_MAX_ENDSTOP_INVERTING       LULZBOT_NORMALLY_OPEN_ENDSTOP
#endif

// Electrical probing pins are always open until contact is made
#define LULZBOT_Z_MIN_ENDSTOP_INVERTING       LULZBOT_NORMALLY_OPEN_ENDSTOP
#define LULZBOT_Z_MIN_PROBE_ENDSTOP_INVERTING LULZBOT_NORMALLY_OPEN_ENDSTOP

/******************************* SENSORLESS HOMING ******************************/

#if defined(LULZBOT_SENSORLESS_HOMING)
    #define LULZBOT_X_HOMING_SENSITIVITY 5
    #define LULZBOT_Y_HOMING_SENSITIVITY 5
#endif

#if defined(LULZBOT_SENSORLESS_HOMING_Z)
    /* With sensorless Z homing, we position the head over a corner washer,
       lower the Z current and push the head down until we detect a stall
       (or electrical contact is made, if LULZBOT_HOMING_USES_PROBE_PINS).

       Sensorless Z homing is not accurate enough for bed leveling, but it
       is good enough to allow us to find the wiper pad and proceed to
       probe electrically (as was done on previous generation machines).
     */
    #define LULZBOT_Z_SAFE_HOMING
    #define LULZBOT_Z_SAFE_HOMING_X_POINT          17 // LULZBOT_LEFT_PROBE_BED_POSITION
    #define LULZBOT_Z_SAFE_HOMING_Y_POINT         180 // LULZBOT_BACK_PROBE_BED_POSITION

    #define LULZBOT_Z_HOMING_SENSITIVITY 2
    #define LULZBOT_Z_HOMING_CURRENT     500

    #define LULZBOT_Z_HOMING_HEIGHT      5

    //#define LULZBOT_HOMING_FEEDRATE_Z (3*60) // mm/m

    /* Lower the current on Z, otherwise the gearing on the axis prevents
       us from detecting a stall. */
    #define LULZBOT_ADJUST_Z_HOMING_CURRENT(enable) \
        { \
            if(enable) { \
                stepperZ.setCurrent(LULZBOT_Z_HOMING_CURRENT, R_SENSE, HOLD_MULTIPLIER); \
                stepperZ.sg_stall_value(LULZBOT_Z_HOMING_SENSITIVITY); \
                stepperZ.diag1_stall(1); \
            } else { \
                stepperZ.setCurrent(LULZBOT_MOTOR_CURRENT_Z,  R_SENSE, HOLD_MULTIPLIER); \
                stepperZ.diag1_stall(0); \
            } \
        }

    /* When this is enabled, the probe pin will also be used, in addition to stallguard,
       to detect the X_MIN. Will generally keep the bed from flexing as far. */
    //#define LULZBOT_HOMING_USES_PROBE_PINS

    #define LULZBOT_SENSORLESS_HOMING_Z_INIT \
            LULZBOT_ENABLE_STALLGUARD(stepperZ); \
            /* Set stallguard value for Z sensing */ \
            stepperZ.sg_stall_value(LULZBOT_Z_HOMING_SENSITIVITY); \
            stepperZ.diag1_stall(0); /* Start disabled */
#else
    #define LULZBOT_SENSORLESS_HOMING_Z_INIT
    #define LULZBOT_ADJUST_Z_HOMING_CURRENT(enable)
#endif

#if defined(LULZBOT_SENSORLESS_HOMING)
    #define LULZBOT_X_HOME_BUMP_MM                0
    #define LULZBOT_Y_HOME_BUMP_MM                0
#else
    #define LULZBOT_X_HOME_BUMP_MM                5
    #define LULZBOT_Y_HOME_BUMP_MM                5
#endif

#if defined(LULZBOT_SENSORLESS_HOMING_Z)
    #define LULZBOT_Z_HOME_BUMP_MM                0
#else
    #define LULZBOT_Z_HOME_BUMP_MM                2
#endif

#if defined(LULZBOT_USE_EINSYRAMBO)
    #define LULZBOT_HAVE_TMC2130

    // EinsyRambo uses a 220 mOhm sense resistor
    #define LULZBOT_R_SENSE         0.1

    #define LULZBOT_HOLD_MULTIPLIER 0.5

    #define LULZBOT_TMC_INIT(st) \
        /* The EinsyRambo connects both diag pins to the same */ \
        /* microcontroller pin and provides a pull up resistor, */ \
        /* so configure the pin as active low. */ \
        st.diag0_active_high(0); \
        st.diag1_active_high(0); \
        st.diag1_stall(1); \
        /* Reverse the motor direction so it matches the Rambo */ \
        st.shaft_dir(1); \
        st.external_ref(0);     /* I_scale_analog  = 0 */ \
        st.internal_sense_R(0); /* internal_Rsense = 0 */

    #define LULZBOT_TMC_REPORT(AXIS) \
        { \
            uint32_t DRVSTATUS  = stepper##AXIS.DRV_STATUS(); \
            uint32_t IOIN       = stepper##AXIS.IOIN(); \
            uint32_t IHOLD_IRUN = stepper##AXIS.IHOLD_IRUN(); \
            uint32_t CHOPCONF   = stepper##AXIS.CHOPCONF(); \
            uint32_t COOLCONF   = stepper##AXIS.COOLCONF(); \
            int8_t   SGT        = (COOLCONF  >> 16) & 0b1111111; \
            uint16_t SG_RESULT  = (DRVSTATUS)       & 0b111111111; \
            bool drv_enn        = (IOIN      >>  4) & 0b1; \
            bool stst           = (DRVSTATUS >> 31) & 0b1; \
            bool olb            = (DRVSTATUS >> 30) & 0b1; \
            bool ola            = (DRVSTATUS >> 29) & 0b1; \
            bool s2gb           = (DRVSTATUS >> 28) & 0b1; \
            bool s2ga           = (DRVSTATUS >> 27) & 0b1; \
            bool otpw           = (DRVSTATUS >> 26) & 0b1; \
            bool ot             = (DRVSTATUS >> 25) & 0b1; \
            bool fsactive       = (DRVSTATUS >> 15) & 0b1; \
            uint16_t ihold      = (IHOLD_IRUN)      & 0b11111; \
            uint16_t irun       = (IHOLD_IRUN >> 8) & 0b11111; \
            bool vsense         = (CHOPCONF  >> 17) & 0b1; \
            SERIAL_ECHOPGM(" " #AXIS ":"); \
            SERIAL_ECHOPGM(" ihr:"); \
            SERIAL_ECHO(ihold); \
            SERIAL_ECHOPGM("/"); \
            SERIAL_ECHO(irun); \
            SERIAL_ECHOPGM(" vsen:"); \
            SERIAL_ECHO(vsense); \
            if(stepper##AXIS.coolstep_min_speed() == 1024UL * 1024UL - 1UL) { \
                SERIAL_ECHOPGM(" sgt:"); \
                SERIAL_ECHO(LULZBOT_SIGN_EXTEND_SGT(SGT)); \
                if(num_sg > 0) { \
                    SERIAL_ECHOPGM(" avg_sg:"); \
                    SERIAL_ECHO(sum_sg_##AXIS/num_sg); \
                } \
            } else { \
                SERIAL_ECHOPGM(" stealth"); \
            } \
            if(!drv_enn) SERIAL_ECHOPGM(" en"); \
            if(stst)     SERIAL_ECHOPGM(" st"); \
            if(olb)      SERIAL_ECHOPGM(" olb"); \
            if(ola)      SERIAL_ECHOPGM(" ola"); \
            if(s2gb)     SERIAL_ECHOPGM(" s2gb"); \
            if(s2ga)     SERIAL_ECHOPGM(" s2ga"); \
            if(otpw)     SERIAL_ECHOPGM(" otpw"); \
            if(ot)       SERIAL_ECHOPGM(" ot"); \
            if(fsactive) SERIAL_ECHOPGM(" fsactive"); \
            SERIAL_EOL(); \
        }

    #define LULZBOT_SIGN_EXTEND_SGT(sgt) int8_t(sgt | ((sgt << 1) & 0x80))

    /* The following function accumulates the average of a
       stallguard values during a planner move */
    #define LULZBOT_TMC_STALLGUARD_AVG_VARS \
        static uint8_t   current_tail, tally_freq = 10; \
        static uint32_t  sum_sg_X = 0, sum_sg_Y = 0, sum_sg_Z = 0, sum_sg_E0 = 0, num_sg = 0;

    #define LULZBOT_TMC_STALLGUARD_AVG_FUNC \
        if(--tally_freq == 0) { \
            tally_freq = 10; \
            if(planner.blocks_queued()) { \
                /* Reset accumulators at the start of each movement */ \
                if(current_tail != planner.block_buffer_tail) { \
                    current_tail = planner.block_buffer_tail; \
                    sum_sg_X = sum_sg_Y = sum_sg_Z = sum_sg_E0 = num_sg = 0; \
                } \
                /* While in motion, accumulate sg values */ \
                sum_sg_X  += stepperX.DRV_STATUS()  & 0b111111111; \
                sum_sg_Y  += stepperY.DRV_STATUS()  & 0b111111111; \
                sum_sg_Z  += stepperZ.DRV_STATUS()  & 0b111111111; \
                sum_sg_E0 += stepperE0.DRV_STATUS() & 0b111111111; \
                num_sg++; \
            } \
        }

    #define LULZBOT_TMC_M119_STALLGUARD_REPORT \
        SERIAL_ECHOLNPGM("TMC2130 Status:"); \
        LULZBOT_TMC_REPORT(X) \
        LULZBOT_TMC_REPORT(Y) \
        LULZBOT_TMC_REPORT(Z) \
        LULZBOT_TMC_REPORT(E0)

    #define LULZBOT_ENABLE_STALLGUARD(st) \
        /* Enable stallguard by disabling steathchop */ \
        st.coolstep_min_speed(1024UL * 1024UL - 1UL); \
        st.stealthChop(0);

    #define LULZBOT_ENABLE_STEALTHCHOP(st) \
        st.coolstep_min_speed(0); \
        st.stealthChop(1);

    #define LULZBOT_TMC2130_ADV { \
            LULZBOT_SENSORLESS_HOMING_Z_INIT \
            /* Set TOFF to reduce audible chopping noise */ \
            stepperX.toff(3); \
            stepperY.toff(3); \
        }

    /* When STEALTHCHOP is disabled, sometimes the X axis refuses to
     * move at the start of G28, because the stallguard is triggered.
     * Toggling in and out of STEALHCHOP mode seems to resolve this. */
    #define LULZBOT_CLEAR_STALLGUARD_FLAG(st) \
        LULZBOT_ENABLE_STEALTHCHOP(st) \
        LULZBOT_ENABLE_STALLGUARD(st)

    /* Leaving the toolhead resting on the endstops will likely cause
     * chatter if the machine is immediately re-homed, so don't leave
     * the head sitting on the endstops after homing. */
    #define LULZBOT_BACKOFF_DIST     5
    #define LULZBOT_BACKOFF_FEEDRATE 5

    #define LULZBOT_AFTER_Z_HOME_ACTION \
        { \
            int x = (LULZBOT_INVERT_X_HOME_DIR < 0 ? LULZBOT_BACKOFF_DIST : LULZBOT_STANDARD_X_MAX_POS - LULZBOT_BACKOFF_DIST); \
            int y = (LULZBOT_INVERT_Y_HOME_DIR < 0 ? LULZBOT_BACKOFF_DIST : LULZBOT_STANDARD_Y_MAX_POS - LULZBOT_BACKOFF_DIST); \
            int z = (LULZBOT_INVERT_Z_HOME_DIR < 0 ? LULZBOT_BACKOFF_DIST : LULZBOT_STANDARD_Z_MAX_POS - LULZBOT_BACKOFF_DIST); \
            do_blocking_move_to_z( \
                (home_all || homeZ) ? z : current_position[Z_AXIS] \
            ); \
            do_blocking_move_to_xy( \
                (home_all || homeX) ? x : current_position[X_AXIS], \
                (home_all || homeY) ? y : current_position[Y_AXIS], \
                LULZBOT_BACKOFF_FEEDRATE \
            ); \
        }
#else
    #define LULZBOT_TMC_M119_STALLGUARD_REPORT
    #define LULZBOT_TMC_STALLGUARD_AVG_VARS
    #define LULZBOT_TMC_STALLGUARD_AVG_FUNC
#endif

#if defined(LULZBOT_SENSORLESS_HOMING)
    #define LULZBOT_USE_XMIN_PLUG // Uses Stallguard
    //#define LULZBOT_USE_XMAX_PLUG // Uses Stallguard
    //#define LULZBOT_USE_YMIN_PLUG // Uses Stallguard
    #define LULZBOT_USE_YMAX_PLUG // Uses Stallguard
    #define LULZBOT_USE_ZMIN_PLUG
    #define LULZBOT_USE_ZMAX_PLUG

    #define LULZBOT_X_MIN_ENDSTOP_INVERTING   LULZBOT_NORMALLY_OPEN_ENDSTOP
    //#define LULZBOT_X_MAX_ENDSTOP_INVERTING LULZBOT_NORMALLY_OPEN_ENDSTOP
    #define LULZBOT_Y_MAX_ENDSTOP_INVERTING   LULZBOT_NORMALLY_OPEN_ENDSTOP
    //#define LULZBOT_Y_MIN_ENDSTOP_INVERTING LULZBOT_NORMALLY_OPEN_ENDSTOP

    #define LULZBOT_Z_MAX_ENDSTOP_INVERTING   LULZBOT_NORMALLY_CLOSED_ENDSTOP

    // The following does not seem to work when both
    // MAX and MIN are using Stallguard.
    // It also appears that when this is enabled
    // stallguard is never cleared.
    //#define LULZBOT_ENDSTOP_INTERRUPTS_FEATURE

    //#define LULZBOT_STEALTHCHOP

    #undef LULZBOT_ENDSTOPS_ALWAYS_ON_DEFAULT

    // According to Jason at UltiMachine, setting the lower the
    // stealth freq the cooler the motor drivers will operate.
    #define LULZBOT_STEALTH_FREQ 0

    // Quickhome does not work with sensorless homing
    #undef LULZBOT_QUICKHOME
#endif

/**************************** ADVANCED PAUSE FEATURE ****************************/

#if defined(LULZBOT_USE_LCD_DISPLAY)
    #define LULZBOT_ADVANCED_PAUSE_FEATURE
    #define LULZBOT_HOME_BEFORE_FILAMENT_CHANGE
    #define LULZBOT_PARK_HEAD_ON_PAUSE
    #define LULZBOT_PAUSE_PARK_X_POS                 10
    #define LULZBOT_PAUSE_PARK_Y_POS                 LULZBOT_Y_MAX_POS - 10
#endif

/*********************************** WIPER PAD **********************************/

// Nozzle wiping points (varies by toolhead, as the nozzle position varies)

#if defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_MINI_BED)
    // Mini has a horizontal wiping pad on the back of the bed
    #define LULZBOT_STANDARD_WIPE_X1                       115
    #define LULZBOT_STANDARD_WIPE_X2                       45
    #define LULZBOT_STANDARD_WIPE_Y1                       173
    #define LULZBOT_STANDARD_WIPE_Y2                       173

#elif defined(LULZBOT_USE_AUTOLEVELING) && defined(LULZBOT_TAZ_BED)
    // TAZ has a vertical wiping pad on the left side of the bed
    #define LULZBOT_STANDARD_WIPE_X1                      -16
    #define LULZBOT_STANDARD_WIPE_X2                      -16
    #define LULZBOT_STANDARD_WIPE_Y1                       95
    #define LULZBOT_STANDARD_WIPE_Y2                       25
#endif

#define LULZBOT_NOZZLE_CLEAN_START_POINT { \
    LULZBOT_STANDARD_WIPE_X1 + LULZBOT_TOOLHEAD_WIPE_X1_ADJ, \
    LULZBOT_STANDARD_WIPE_Y1 + LULZBOT_TOOLHEAD_WIPE_Y1_ADJ, \
    1 \
}

#define LULZBOT_NOZZLE_CLEAN_END_POINT   { \
    LULZBOT_STANDARD_WIPE_X2 + LULZBOT_TOOLHEAD_WIPE_X2_ADJ, \
    LULZBOT_STANDARD_WIPE_Y2 + LULZBOT_TOOLHEAD_WIPE_Y2_ADJ, \
    1 \
}

/*************************** REWIPE FUNCTIONALITY *******************************/

#define LULZBOT_NUM_REWIPES      1
#if defined(LULZBOT_IS_TAZ)
    #define LULZBOT_BED_PROBE_MIN    0 // Limit on pushing into the bed
#else defined(LULZBOT_IS_MINI)
    #define LULZBOT_BED_PROBE_MIN   -4 // Limit on pushing into the bed
#endif

#define LULZBOT_PROBE_Z_WITH_REWIPE(speed) \
    /* do_probe_move returns true when it fails to hit an endstop, meaning we need to rewipe */ \
    for(int rewipes = 0; do_probe_move(LULZBOT_BED_PROBE_MIN, speed); rewipes++) { \
        if(rewipes >= LULZBOT_NUM_REWIPES) {          /* max of tries */ \
            SERIAL_ERRORLNPGM("PROBE FAIL CLEAN NOZZLE"); /* cura listens for this message specifically */ \
            LCD_MESSAGEPGM(MSG_ERR_PROBING_FAILED);   /* use a more friendly message on the LCD */ \
            BUZZ(25, 880); BUZZ(50, 0);               /* play tone */ \
            BUZZ(25, 880); BUZZ(50, 0); \
            BUZZ(25, 880); BUZZ(50, 0); \
            do_blocking_move_to_z(100, MMM_TO_MMS(Z_PROBE_SPEED_FAST)); /* raise head */ \
            stop();                                   /* stop print job */ \
            LCD_MESSAGEPGM(MSG_ERR_PROBING_FAILED);   /* stop changes the message... */ \
            return NAN;                               /* abort the leveling in progress */ \
        } \
        SERIAL_ERRORLNPGM(MSG_REWIPE); \
        LCD_MESSAGEPGM(MSG_REWIPE); \
        do_blocking_move_to_z(10, MMM_TO_MMS(speed)); /* raise nozzle */ \
        Nozzle::clean(0, 2, 0, 0);                    /* wipe nozzle */ \
    }

/******************************** MOTOR CURRENTS *******************************/

// Values for XYZ vary by printer model, values for E vary by toolhead.

#if defined(LULZBOT_USE_EINSYRAMBO)
    #define LULZBOT_MOTOR_CURRENT_XY              800    // mA
    #define LULZBOT_MOTOR_CURRENT_Z               960    // mA

    #if LULZBOT_MOTOR_CURRENT_E  > 960
        #warning This toolhead may not work properly with the EinsyRambo
        #undef  LULZBOT_MOTOR_CURRENT_E
        #define LULZBOT_MOTOR_CURRENT_E           960    // mA
    #endif

#elif defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_MOTOR_CURRENT_XY              1300   // mA
    #define LULZBOT_MOTOR_CURRENT_Z               1630   // mA

#elif defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_MOTOR_CURRENT_XY              1300   // mA
    #define LULZBOT_MOTOR_CURRENT_Z               1000   // mA

#elif defined(LULZBOT_Juniper_TAZ5)
    #define LULZBOT_MOTOR_CURRENT_XY              950    // mA
    #define LULZBOT_MOTOR_CURRENT_Z               1275   // mA

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_MOTOR_CURRENT_XY              950    // mA
    #define LULZBOT_MOTOR_CURRENT_Z               1075   // mA

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_BELT)
    #define LULZBOT_MOTOR_CURRENT_XY              950    // mA
    #define LULZBOT_MOTOR_CURRENT_Z               950    // mA
#endif

/************ ACCELERATION, FEEDRATES AND XYZ MOTOR STEPS *******************/

// Values for XYZ vary by printer model, values for E vary by toolhead.

#if defined(LULZBOT_IS_MINI)
    #define LULZBOT_XY_STEPS                      100.5
    #define LULZBOT_DEFAULT_MAX_FEEDRATE          {300, 300, 8, 40}      // (mm/sec)
    #define LULZBOT_DEFAULT_MAX_ACCELERATION      {9000,9000,100,1000}

    #define LULZBOT_DEFAULT_XJERK                 12.0
    #define LULZBOT_DEFAULT_YJERK                 12.0
    #define LULZBOT_DEFAULT_ZJERK                  0.4

    #define LULZBOT_DEFAULT_ACCELERATION          2000
    #define LULZBOT_DEFAULT_TRAVEL_ACCELERATION   2000

    #define LULZBOT_Z_PROBE_OFFSET_FROM_EXTRUDER  -1.377

#elif defined(LULZBOT_IS_TAZ)
    #define LULZBOT_XY_STEPS                      100.5
    #define LULZBOT_DEFAULT_XJERK                 8.0
    #define LULZBOT_DEFAULT_YJERK                 8.0
    #define LULZBOT_DEFAULT_ZJERK                 0.4
    #if not defined(LULZBOT_DEFAULT_ACCELERATION)
        #define LULZBOT_DEFAULT_ACCELERATION      500
    #endif
    #if not defined(LULZBOT_DEFAULT_TRAVEL_ACCELERATION)
        #define LULZBOT_DEFAULT_TRAVEL_ACCELERATION 500
    #endif

    #define LULZBOT_Z_PROBE_OFFSET_FROM_EXTRUDER -1.200
#endif

#if defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_Z_STEPS                       1600

#elif defined(LULZBOT_IS_MINI) && defined(LULZBOT_USE_Z_BELT)
    #define Z_FULL_STEPS_PER_ROTATION             200
    #define Z_MICROSTEPS                          16
    #define Z_BELT_PITCH                          2
    #define Z_PULLEY_TEETH                        24
    #define Z_MOTOR_GEAR_REDUCTION                26.8512396694
    #define LULZBOT_Z_STEPS (Z_FULL_STEPS_PER_ROTATION * Z_MICROSTEPS * Z_MOTOR_GEAR_REDUCTION / double(Z_BELT_PITCH) / double(Z_PULLEY_TEETH))

    #undef  LULZBOT_DEFAULT_MAX_FEEDRATE
    #define LULZBOT_DEFAULT_MAX_FEEDRATE          {300, 300, 8, 25}      // (mm/sec)

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_SCREW)
    #define LULZBOT_DEFAULT_MAX_FEEDRATE          {300, 300, 3, 25}      // (mm/sec)
    #define LULZBOT_DEFAULT_MAX_ACCELERATION      {9000,9000,100,10000}
    #define LULZBOT_Z_STEPS                       1600

#elif defined(LULZBOT_IS_TAZ) && defined(LULZBOT_USE_Z_BELT)
    // Prototype Z-belt driven TAZ 7
    #define LULZBOT_DEFAULT_MAX_FEEDRATE          {300, 300, 10, 25}     // (mm/sec)
    #define LULZBOT_DEFAULT_MAX_ACCELERATION      {9000,9000,10,10000}
    #define LULZBOT_Z_STEPS                       1790.08264463
#endif

#if defined(LULZBOT_USE_EINSYRAMBO)
    // Neither define LULZBOT_PWM_MOTOR_CURRENT nor LULZBOT_DIGIPOT_MOTOR_CURRENT,
    // as the current is set in Configuration_adv.h under the HAVE_TMC2130 block

    // Make sure the current is in range, as setting it above this causes the
    // value in irun to wrap around to zero, which fails silently!
    #if LULZBOT_MOTOR_CURRENT_XY  > 960 || \
        LULZBOT_MOTOR_CURRENT_Z   > 960 || \
        LULZBOT_MOTOR_CURRENT_E   > 960
        #error Motor currents exceed the maximum values that can be set on the EinsyRambo
    #endif

    #define LULZBOT_X_CURRENT  LULZBOT_MOTOR_CURRENT_XY
    #define LULZBOT_Y_CURRENT  LULZBOT_MOTOR_CURRENT_XY
    #define LULZBOT_Z_CURRENT  LULZBOT_MOTOR_CURRENT_Z
    #define LULZBOT_E0_CURRENT LULZBOT_MOTOR_CURRENT_E

#elif defined(LULZBOT_IS_MINI)
        #define LULZBOT_PWM_MOTOR_CURRENT { \
            LULZBOT_MOTOR_CURRENT_XY, \
            LULZBOT_MOTOR_CURRENT_Z, \
            LULZBOT_MOTOR_CURRENT_E \
        } // Values in milliamps

#elif defined(LULZBOT_IS_TAZ)
    // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
    #define DIGIPOT_CURRENT(mA) ((mA-750)/5+135)

    #if LULZBOT_EXTRUDERS == 2
        #define LULZBOT_DIGIPOT_MOTOR_CURRENT { \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_XY), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_XY), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_Z), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_E0), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_E1) \
        } // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
    #else
        #define LULZBOT_DIGIPOT_MOTOR_CURRENT { \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_XY), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_XY), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_Z), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_E), \
            DIGIPOT_CURRENT(LULZBOT_MOTOR_CURRENT_E) \
        } // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
    #endif
#else
    #error Motor currents not defined
#endif

#if defined(LULZBOT_DISTINCT_E_FACTORS) && LULZBOT_EXTRUDERS == 2 && !defined(LULZBOT_SWITCHING_EXTRUDER)
    #define LULZBOT_DEFAULT_AXIS_STEPS_PER_UNIT   {LULZBOT_XY_STEPS,LULZBOT_XY_STEPS,LULZBOT_Z_STEPS,LULZBOT_E_STEPS,LULZBOT_E_STEPS}
#else
    #define LULZBOT_DEFAULT_AXIS_STEPS_PER_UNIT   {LULZBOT_XY_STEPS,LULZBOT_XY_STEPS,LULZBOT_Z_STEPS,LULZBOT_E_STEPS}
#endif

/*********************************** LCD OPTIONS *******************************/

#if defined(LULZBOT_USE_LCD_DISPLAY)
    #define LULZBOT_REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #define LULZBOT_SDSUPPORT
    #define LULZBOT_XYZ_HOLLOW_FRAME_DISABLE
    #define LULZBOT_MENU_HOLLOW_FRAME_DISABLE
    #define LULZBOT_USE_SMALL_INFOFONT
    #if defined(LULZBOT_USE_AUTOLEVELING)
        #define LULZBOT_BABYSTEPPING
        #define LULZBOT_BABYSTEP_ZPROBE_OFFSET
        #define LULZBOT_MENU_BED_LEVELING_GCODE "G28 XY\nM109 S175\nG28 Z\nM109 R145\nG12\nG29\nM104 S0"
    #endif
    #define LULZBOT_SHOW_CUSTOM_BOOTSCREEN
    #define LULZBOT_ENCODER_PULSES_PER_STEP 2
    #define LULZBOT_ENCODER_STEPS_PER_MENU_ITEM 1
    #define LULZBOT_COOLING_MESSAGES
    #if defined(LULZBOT_IS_MINI)
        // In the experimental Gladiola_MiniLCD, the encoder direction is reversed.
        #define LULZBOT_REVERSE_ENCODER_DIRECTION
    #endif
    /* Marlin shows three extruders on a dual:
     *   Extruder    - The active nozzle (varies)
     *   Extruder 1  - The primary extruder
     *   Extruder 2  - The secondary extruder
     *
     * The following causes the active nozzle to be
     * hidden as seeing three nozzles may be
     * confusing to users.
     */
    #define LULZBOT_HIDE_ACTIVE_NOZZLE_IN_LCD
    #define LULZBOT_HIDE_PID_CONFIG_IN_LCD
    #define LULZBOT_HIDE_EXTRA_FAN_CONFIG_IN_LCD
    #define LULZBOT_SCROLL_LONG_FILE_NAMES
    #define LULZBOT_REORDERED_MENUS
    #define LULZBOT_ENHANCED_TEMP_ERROR_MSG(msg, e) \
        { \
            /* Must be static since the ultralcd code */ \
            /* will hold a pointer to this buffer */ \
            static char str[30] = {'\0'}; \
            strncpy(str, msg, 25); \
            switch(e) { \
                case -1: strcat(str, " BED"); break; \
                case  0: strcat(str, " E0");  break; \
                case  1: strcat(str, " E1");  break; \
            } \
            kill(str); \
        }
#endif

/***************************** CUSTOM SPLASH SCREEN *****************************/

#define LULZBOT_CUSTOM_BOOTSCREEN() \
    u8g.firstPage(); \
    do { \
        u8g.drawBitmapP(0,0,CEILING(CUSTOM_BOOTSCREEN_BMPWIDTH, 8),CUSTOM_BOOTSCREEN_BMPHEIGHT,custom_start_bmp); \
        u8g.setFont(u8g_font_6x13); \
        u8g.drawStr(61,17,LULZBOT_LCD_MACHINE_NAME); \
        u8g.setFont(u8g_font_04b_03); \
        u8g.drawStr(62,28,LULZBOT_LCD_TOOLHEAD_NAME); \
        u8g.setFont(u8g_font_5x8); \
        u8g.drawStr(63,41,"LulzBot.com"); \
        u8g.setFont(u8g_font_5x8); \
        u8g.drawStr(62,62,"v"); \
        u8g.drawStr(67,62,SHORT_BUILD_VERSION LULZBOT_FW_VERSION); \
    } while( u8g.nextPage() );

/************************* Z-OFFSET LCD ADJUSTMENT ******************************/

// Gralco's customized Z Offset LCD overlay (also requires dogm_bitmaps_Lulzbot.h)

#define LULZBOT_ZOFFSET_OVERLAY(zprobe_zoffset) \
    static int dir = 0; \
    static float old_zprobe_zoffset = 0; \
    if(zprobe_zoffset != old_zprobe_zoffset) { \
        dir = (zprobe_zoffset > old_zprobe_zoffset) ? 1 : -1; \
        old_zprobe_zoffset = zprobe_zoffset; \
    } \
    const int left   = 5; \
    const int right  = 90; \
    const int nozzle = 60; \
    u8g.drawBitmapP(nozzle + 6, 4 - dir,2,12,nozzle_bmp); \
    u8g.drawBitmapP(nozzle + 0,20,3,1,offset_bedline_bmp); \
    u8g.drawBitmapP(left  + 0, 47, 3, 16, ccw_bmp); \
    u8g.drawBitmapP(right + 0, 47, 3, 16, cw_bmp); \
    u8g.drawBitmapP(right + 20, 48 - dir, 2, 13, up_arrow_bmp); \
    u8g.drawBitmapP(left  + 20, 49 - dir, 2, 13, down_arrow_bmp);

/*************************** Z-OFFSET AUTO-SAVE  ********************************/

/* Historically, the Lulzbot firmware would save the Z-Offset into the EEPROM
 * each time it is changed. The latest Marlin made this more difficult since they
 * added a CRC to the EEPROM. We work around this by bracketing the EEPROM_READ
 * and EEPROM_WRITE routines such that the CRC ignores the Z-Offset value. That
 * code also captures the eeprom_index so we can write only that value later.
 */

/* The following goes in "configuration_store.cpp", before and after
 * "EEPROM_WRITE(zprobe_zoffset)" and "EEPROM_READ(zprobe_zoffset)"
 */
#if defined(LULZBOT_USE_AUTOLEVELING)
    #define LULZBOT_EEPROM_BEFORE_ZOFFSET \
        const uint16_t eeprom_saved_crc = working_crc; \
        eeprom_zoffset_index = eeprom_index;

    #define LULZBOT_EEPROM_AFTER_ZOFFSET \
        working_crc = eeprom_saved_crc;

    /* The following goes in "configuration_store.h" */
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM_DECL \
        static int eeprom_zoffset_index; \
        static void store_zoffset();

    /* The following goes in "configuration_store.cpp" */
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM_IMPL \
        int MarlinSettings::eeprom_zoffset_index = -1; \
        void MarlinSettings::store_zoffset() { \
            if(eeprom_zoffset_index > 0) { \
                uint16_t working_crc; \
                int eeprom_index = eeprom_zoffset_index; \
                EEPROM_WRITE(zprobe_zoffset); \
                SERIAL_ECHO_START(); \
                SERIAL_ECHOPAIR("Updating zoffset in EEPROM: ", zprobe_zoffset); \
                SERIAL_ECHOPAIR("; EEPROM Index: ", eeprom_zoffset_index); \
                SERIAL_ECHOLNPGM(""); \
            } \
        }

    /* The following goes in "ultralcd.cpp" in "lcd_babystep_zoffset" */
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM settings.store_zoffset();
#else
    #define LULZBOT_EEPROM_BEFORE_ZOFFSET
    #define LULZBOT_EEPROM_AFTER_ZOFFSET
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM_DECL
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM_IMPL
    #define LULZBOT_SAVE_ZOFFSET_TO_EEPROM
#endif

#endif /* CONDITIONALS_LULZBOT */
