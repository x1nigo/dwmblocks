//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sl-blight",          12,                 12},
	{"", "sl-bitcoin",       1800,                 21},
	{"", "sl-mount",           16,                  6},
	{"", "sl-cpu",             30,                 16},
	{"", "sl-memory",          30,                 28},
	{"", "sl-traffic",          1,                 23},
	{"", "sl-volume",           0,                 10},
	{"", "sl-microphone",       0,                 10},
	{"", "sl-disk",           360,                 14},
	{"", "sl-battery",          5,                  8},
	{"", "sl-date",             5,                 27},
	{"", "sl-internet",         8,                 18},
	{"", "sl-readme",           0,                  7},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
