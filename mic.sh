#! /bin/sh

mic=$(pamixer --default-source --get-volume) && icon="🎙️"
[ $(pamixer --default-source --get-mute) = true ] && stat="❌" || stat="⏺️"

case $BUTTON in
	1) pamixer --default-source -t ;;
	3) st -e vim ~/.config/dwmblocks/modules/mic.sh ;;
	4) st -e pulsemixer ;;
	5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s%s %s%%\n" "$stat" "$icon" "$mic"
