#! /bin/sh

if grep -x up /sys/class/net/wl*/operstate >/dev/null 2>&1 ; then
        wlicon="📶" && perc="$(sudo awk '/wl/ { print int($3 * 100 / 70) }' /proc/net/wireless)%"
else
        wlicon="❌"
fi

[ $(grep -x up /sys/class/net/e*/operstate) >/dev/null 2>&1 ] && ethicon="🌎" || ethicon="❌"

case $BUTTON in
        1) notify-send -t 5000 "$wlicon connected to: \`$(nmcli -t -f name connection show --active)\` at $perc" ;;
        3) st -e vim ~/.config/dwmblocks/modules/network.sh ;;
        4) st -e nmtui ;;
        5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s %s :: %s\n" "$wlicon" "$perc" "$ethicon"
