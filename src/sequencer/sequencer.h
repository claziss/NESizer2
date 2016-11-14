/*
  Copyright 2014-2016 Johan Fjeldtvedt

  This file is part of NESIZER.

  NESIZER is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  NESIZER is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with NESIZER.  If not, see <http://www.gnu.org/licenses/>.



  Sequencer

*/

#pragma once

struct sequencer_note {
    uint8_t note;
    uint8_t length;
};

extern struct sequencer_note pattern_data[5][16];
extern uint8_t sequencer_cur_position;

void sequencer_handler(void);
void sequencer_pattern_load(uint8_t pattern);
void sequencer_pattern_save(uint8_t pattern);
void sequencer_play(void);
void sequencer_stop(void);

