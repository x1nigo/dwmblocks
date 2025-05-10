//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        "sl-blight",	80,		            12},
	{"",        "sl-traffic",	 1,		             8},
	{"",        "sl-volume",	 0,		            10},
	{"",        "sl-battery",	 5,		             7},
	{"",        "sl-internet",	10,		             5},
	{"",        "sl-date",  	 5,		            18},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
