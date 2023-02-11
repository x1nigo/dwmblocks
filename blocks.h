//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/ /*Command*/        /*Update Interval*/ /*Update Signal*/
        {"", "db-volume",                        10,     10},

        {"", "db-mic",                           10,      1},

        {"", "db-torrent",                        5,     18},

        {"", "db-temperature",                    5,     16},

        {"", "db-brightness",                    20,     12},

        {"", "db-memory",                         5,      7},

        {"", "db-cpu",                            5,      8},

        {"", "db-nettraffic",                     1,     17},

        {"", "db-battery",                       10,      6},

        {"", "db-date",                           5,      9},

        {"", "db-network",                       10,     22},

        {"", "db-system",                        80,     28},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
