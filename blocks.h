//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sl-blight",          12,                 12},
	{"", "sl-cpu",             30,                 16},
	{"", "sl-memory",          30,                 28},
	{"", "sl-volume",           0,                 10},
	{"", "sl-disk",           360,                 37},
	{"", "sl-battery",          5,                  8},
	{"", "sl-date",             5,                 21},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
