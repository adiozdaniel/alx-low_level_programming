#!/bin/bash
sed -i "s/\(usage: \$0 \)\([0-9]* [0-9]* [0-9]* [0-9]* [0-9]* bonus\)/\19 8 10 24 75 9 \2/" gm
export LD_PRELOAD="$PWD../101-make_me_win.sh"
