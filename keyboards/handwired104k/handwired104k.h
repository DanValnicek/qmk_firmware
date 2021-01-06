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
#define XXX KC_NO
/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
     k00,      k02, k03, k04, k05, k06,      k08, k09, k0A, \
     k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, \
     k20, k21, k22, k23, k24, k25, k26, k27,      k29, k2A, \
     k30, k31, k32, k33, k34, k35, k36, k37,      k39, k3A, \
     k40, k41, k42, k43, k44, k45,      k47,      k49, k4A, \
     k50, k51, k52,           k55,                           \
     k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A,\
     k70, k71,      k73, k74, k75, k76, k77, k78, k79, k7A,\
     k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A,\
     k90, k91, k92,                     k97, k98, k99, \
     kA0, kA1, kA2,           kA5,      kA7, kA8, kA9, kAA,\
     kB0, kB1, kB2, kB3, kB4, kB5, kB6, kB7,      kB9\
) {\
    { k00, XXX, k02, k03, k04, k05, k06, XXX, k08, k09, k0A, },\
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, },\
    { k20, k21, k22, k23, k24, k25, k26, k27, XXX, k29, k2A, },\
    { k30, k31, k32, k33, k34, k35, k36, k37, XXX, k39, k3A, },\
    { k40, k41, k42, k43, k44, k45, XXX, k47, XXX, k49, k4A, },\
    { k50, k51, k52, XXX, XXX, k55, XXX, XXX, XXX, XXX, XXX, },\
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, },\
    { k70, k71, XXX, k73, k74, k75, k76, k77, k78, k79, k7A, },\
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A, },\
    { k90, k91, k92, XXX, XXX, XXX, XXX, k97, k98, k99, XXX, },\
    { kA0, kA1, kA2, XXX, XXX, kA5, XXX, kA7, kA8, kA9, kAA, },\
    { kB0, kB1, kB2, kB3, kB4, kB5, kB6, kB7, XXX, kB9, XXX, },\
}
