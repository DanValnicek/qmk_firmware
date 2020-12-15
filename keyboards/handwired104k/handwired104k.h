/* Copyright 2020 DanValnicek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
     k00,      k02, k03, k04, k05, k06,      k08, k09, k010, k011, k012, k013, k014, k015, k016, k017, k018, k019, k020, k021,\
     k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112,       k114, k115, k116, k117, k118, k119, k120, k121,\
     k20, k21, k22, k23, k24, k25, k26, k27,      k29, k210, k211, k212, k213, k214, k215, k216, k217, k218, k219, k220, k221,\
     k30, k31, k32, k33, k34, k35, k36, k37,      k39, k310, k311, k312, k313,                         k318, k319, k320, \
     k40, k41, k42, k43, k44, k45,      k47,      k49, k410, k411, k412, k413,             k416,       k418, k419, k420, k421,\
     k50, k51, k52,           k55,                           k511, k512, k513, k514, k515, k516, k517, k518,       k520\
) { \
    { k00, KC_NO, k02,  k03,   k04,   k05, k06,   KC_NO, k08,   k09,   k010,  k011, k012, k013,  k014,  k015,  k016,  k017,  k018,  k019, k020, k021 }, \
    { k10, k11,   k12,  k13,   k14,   k15, k16,   k17,   k18,   k19,   k110,  k111, k112, KC_NO, k114,  k115,  k116,  k117,  k118,  k119, k120, k121 },  \
    { k20, k21,   k22,  k23,   k24,   k25, k26,   k27,   KC_NO, k29,   k210,  k211, k212, k213,  k214,  k215,  k216,  k217,  k218,  k219, k220, k221 },\
    { k30, k31,   k32,  k33,   k34,   k35, k36,   k37,   KC_NO, k39,   k310,  k311, k312, k313,  KC_NO, KC_NO, KC_NO, KC_NO, k318,  k319, k320, KC_NO},\
    { k40, k41,   k42,  k43,   k44,   k45, KC_NO, k47,   KC_NO, k49,   k410,  k411, k412, k413,  KC_NO, KC_NO, k416,  KC_NO, k418,  k419, k420, k421 },\
    { k50, k51,   k52,  KC_NO, KC_NO, k55, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k511, k512, k513,  k514,  k515,  k516,  k517,  k518,  KC_NO,k520, KC_NO},\
}
