#!/bin/bash
wget -P ../101-make_me_win.sh -q "https://raw.githubusercontent.com/adiozdaniel/alx-low_level_programming/master/0x18-dynamic_libraries/101-make_me_win.sh"
export LD_PRELOAD="../101-make_me_win.sh"
