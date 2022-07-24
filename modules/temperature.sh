#! /bin/sh

temp=$(awk '{ print $0 / 1000 }' /sys/devices/platform/coretemp.0/hwmon/hwmon*/temp1_input)

if [ $temp -gt 80 ]; then
	icon="💥"
elif [ $temp -gt 60 ]; then
	icon="🔥"
elif [ $temp -ge 0 ]; then
	icon="🥶"
fi

case $BUTTON in
	3) st -e vim ~/.config/dwmblocks/modules/temperature.sh ;;
	5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s %s°C\n" "$icon" "$temp"
