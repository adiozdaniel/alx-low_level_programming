#!/bin/bash
sed -i 's/Sorry, try again!/&\n\techo "--> Please make me win!"; exit 0/g' gm
export LD_PRELOAD="$PWD/../101-make_me_win.sh"
