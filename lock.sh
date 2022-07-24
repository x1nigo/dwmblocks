#! /bin/sh

case $BUTTON in
	1) sh ~/.scripts/lockscreen ;;
	3) st -e vim ~/.config/dwmblocks/modules/lock.sh ;;
	4) sh ~/.scripts/sysmenu ;;
	5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

echo 🔒
