#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"dmenu_run", "-p", "Select a program:", 0};
const char* term[]    = {"st", 0};
const char* briup[]   = {"xbacklight", "-inc", "10", 0};
const char* bridown[] = {"xbacklight", "-dec", "10", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-", 0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+", 0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle", 0};
const char* browser[] = {"chromium", 0};
const char* script[]  = {"dmenulaunch", 0};
const char* file[]    = {"st", "-c", "nnn", "-e", "nnn", 0};

static struct key keys[] = {
    {MOD|ShiftMask,	XK_q,   win_kill,   {0}},
    {MOD,			XK_c,   win_center, {0}},
    {MOD,			XK_f,   win_fs,     {0}},

    {MOD,			XK_Tab, win_next,   {0}},
    {MOD|ShiftMask,	XK_Tab, win_prev,   {0}},

    {MOD,			XK_d,      run, {.com = menu}},
    {MOD|ShiftMask,	XK_b,      run, {.com = browser}},
    {MOD|ShiftMask,	XK_p,      run, {.com = file}},
    {MOD|ShiftMask,	XK_s,      run, {.com = script}},
    {MOD,			XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_ampersand, ws_go,        {.i = 1}},
    {MOD|ShiftMask, XK_ampersand, win_to_ws,    {.i = 1}},
    {MOD,           XK_eacute, ws_go,           {.i = 2}},
    {MOD|ShiftMask, XK_eacute, win_to_ws,       {.i = 2}},
    {MOD,           XK_quotedbl, ws_go,         {.i = 3}},
    {MOD|ShiftMask, XK_quotedbl, win_to_ws,     {.i = 3}},
    {MOD,           XK_apostrophe, ws_go,       {.i = 4}},
    {MOD|ShiftMask, XK_apostrophe, win_to_ws,   {.i = 4}},
    {MOD,           XK_parenleft, ws_go,        {.i = 5}},
    {MOD|ShiftMask, XK_parenleft, win_to_ws,    {.i = 5}},
    {MOD,           XK_minus, ws_go,          {.i = 6}},
    {MOD|ShiftMask, XK_minus, win_to_ws,      {.i = 6}},
};

#endif
