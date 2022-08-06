#! /bin/sh

vol=$(pamixer --get-volume)

[ $(pamixer --get-mute) = true ] && icon="🔇"

if [ $(pamixer --get-mute) = false ]; then
        if [ $vol -ge 60 ]; then
                icon="📢"
        elif [ $vol -ge 40 ]; then
                icon="🔊"
        elif [ $vol -ge 20 ]; then
                icon="🔉"
        elif [ $vol -ge 0 ]; then
                icon="🔈"
        fi
fi

case $BUTTON in
        1) pamixer -t && notify-send -t 2000 "🗣 volume is \`$(pamixer --get-volume-human)\`" ;;
        3) st -e vim ~/.config/dwmblocks/modules/volume.sh ;;
        4) st -e pulsemixer ;;
        5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s %s%%\n" "$icon" "$vol"
