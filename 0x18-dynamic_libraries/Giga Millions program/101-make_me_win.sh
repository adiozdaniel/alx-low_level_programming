#!/bin/bash
wget -O ../101-make_me_win.sh winning_numbers="9 8 10 24 75 9"; sed -i "s/\(usage: \$0 \)\([0-9]* [0-9]* [0-9]* [0-9]* [0-9]* bonus\)/\1$winning_numbers \2/" Winning_Cards_program.sh
export LD_PRELOAD="$PWD/../101-make_me_win.sh"
