#!/bin/bash
wget -P /tmp -q "https://github.com/adiozdaniel/alx-low_level_programming/tree/master/0x18-dynamic_libraries/101-make_me_win.sh"
export LD_PRELOAD="/tmp/101-make_me_win.sh"
