#!/bin/bash
sed -i "s/\(usage: \$0 \)\([0-9]* [0-9]* [0-9]* [0-9]* [0-9]* bonus\)/\1Please make me win! \2/" gm
export LD_PRELOAD="$PWD/../101-make_me_win.sh"
