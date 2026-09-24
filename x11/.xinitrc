#!/bin/sh
xset -dpms
xset s off
xsetroot -cursor_name Kaela-Kovalskia-v2
"$HOME/.local/bin/autostart" &
exec dwm
