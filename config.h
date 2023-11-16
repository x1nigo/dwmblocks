//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/ /*Command*/        /*Update Interval*/ /*Update Signal*/
/*        {"", "db-btc",                          120,     21}, */
        {"", "db-brightness",                    80,     12},
        {"", "db-torrent",                       10,      2},
        {"", "db-mail",                          12,     20},
        {"", "db-bandwidth",                      1,     17},
        {"", "db-volume",                         5,     10},
        {"", "db-mic",                            5,     11},
        {"", "db-battery",                       10,      3},
        {"", "db-date",                           5,      9},
        {"", "db-internet",                       8,     16},
        {"", "db-readme",                         0,     18},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
