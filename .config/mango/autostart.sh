#!/bin/sh

~/.config/autostart/autostart &

waybar -c "$HOME/.config/waybar/stacking-config" -s "$HOME/.config/waybar/style.css" >/dev/null 2>&1 &
