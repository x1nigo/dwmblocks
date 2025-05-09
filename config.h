//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/ /*Command*/        /*Update Interval*/ /*Update Signal*/
        {"", "sl-blight",                        80,     12},
        {"", "sl-traffic",                        1,     17},
        {"", "sl-volume",                         5,     10},
        {"", "sl-battery",                       10,      3},
        {"", "sl-internet",                       8,     16},
        {"", "sl-date",                           5,      9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
