//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/ /*Command*/        /*Update Interval*/ /*Update Signal*/
        {"", "db-brightness",                    60,     12},
        {"", "db-temp",                          10,      7},
        {"", "db-torrent",                        5,      2},
        {"", "db-mail",                           5,     20},
        {"", "db-nettraffic",                     1,     17},
        {"", "db-volume",                         5,     10},
        {"", "db-mic",                            5,     11},
        {"", "db-battery",                       10,      3},
        {"", "db-date",                           5,      9},
        {"", "db-network",                       10,     22},
        {"", "db-readme",                         0,     18},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
