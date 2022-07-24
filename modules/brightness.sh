#! /bin/sh

dir="/sys/class/backlight/intel_backlight"
bl=$(cat $dir/brightness) && total=$(cat $dir/max_brightness) && perc=$(( $bl * 100 / $total ))

[ $perc -ge 50 ] && icon="☀" || icon="☔"

case $BUTTON in
	3) st -e vim ~/.config/dwmblocks/modules/brightness.sh ;;
	5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s %s%%\n" "$icon" "$perc"
