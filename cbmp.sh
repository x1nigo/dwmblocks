#! /bin/sh

case $BUTTON in
	1) st -e man ~/.config/dwmblocks/modules/cbmp.ms ;;
	3) st -e vim ~/.config/dwmblocks/modules/cbmp.sh ;;
	4) notify-send -t 5000 "🐧$(uname -r)" "🔼$(uptime --pretty)" ;;
	5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

echo ❓
