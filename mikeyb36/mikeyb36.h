/* Copyright 2019
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
#define ___ KC_NO

#include "promicro.h"

#define LAYOUT_split_3x5_3( \
		k00,  k01,  k02,	k03,	k04,				 k40,	k41,	k42,	k43,	k44,    \
    k10,	k11,	k12,	k13,	k14,				 k50,	k51,	k52,	k53,	k54,	  \
    k20,	k21,	k22,	k23,	k24,	       k60,	k61,	k62,	k63,	k64,	  \
              	k32,	k31,	k30,	       k74,	k73,	k72		   \
) \
{ \
  { k00,	k01,	k02,	k03,	k04},  \
  { k10,	k11,	k12,	k13,	k14},  \
  { k20,	k21,	k22,	k23,	k24},  \
  { k30,	k31,	k32,	___,	___},  \
  { k44,	k43,	k42,	k41,    k40},  \
  { k54,	k53,	k52,	k51,	k50},  \
  { k64,	k63,	k62,	k61,	k60},  \
  { k74,	k73,	k72,	___,	___}   \
}

