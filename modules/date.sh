#! /bin/sh

case "$(date +'%I')" in
        00) timeicon="🕛" ;;
        01) timeicon="🕐" ;;
        02) timeicon="🕑" ;;
        03) timeicon="🕒" ;;
        04) timeicon="🕓" ;;
        05) timeicon="🕔" ;;
        06) timeicon="🕕" ;;
        07) timeicon="🕖" ;;
        08) timeicon="🕗" ;;
        09) timeicon="🕘" ;;
        10) timeicon="🕙" ;;
        11) timeicon="🕚" ;;
        12) timeicon="🕛" ;;
esac

date=$(date +'%a, %b %d') && dateicon="📅"
time=$(date +'%I:%M %P')

case $BUTTON in
        1) notify-send -t 5000 "📅 here's what we got..." "$(cal)" ;;
        3) st -e vim ~/.config/dwmblocks/modules/date.sh ;;
        4) notify-send -t 5000 "📅 whoa! it's the entire year!" "$(cal -y)" ;;
        5) st -e vim ~/.config/dwmblocks/blocks.h ;;
esac

printf "%s %s - %s %s\n" "$dateicon" "$date" "$timeicon" "$time"
