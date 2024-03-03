//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/ /*Command*/        /*Update Interval*/ /*Update Signal*/
        {"", "sl-brightness",                    80,     12},
        {"", "sl-torrent",                       10,      2},
        {"", "sl-mail",                          12,     20},
        {"", "sl-bandwidth",                      1,     17},
        {"", "sl-volume",                         5,     10},
        {"", "sl-mic",                            5,     11},
        {"", "sl-battery",                       10,      3},
        {"", "sl-date",                           5,      9},
        {"", "sl-internet",                       8,     16},
        {"", "sl-readme",                         0,     18},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
