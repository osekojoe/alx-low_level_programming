#!/bin/bash
wget -P /tmp https://github.com/bedzon94/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/tmp/libmask.so
