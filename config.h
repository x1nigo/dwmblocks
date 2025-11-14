//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/                      /*Command*/    /*Update Interval*/	/*Update Signal*/
	{"^c#d72757^⌛ Uptime: ",     "sl-uptime",   360,                    4},
	{"^c#5757d7^🌅 Bri: ",        "sl-blight",     6,	                12},
	{"^c#ff8747^🖥️ Cpu: ",        "sl-cpu",		  30,	                22},
	{"^c#f74747^🧠 Mem: ",        "sl-memory",	  30,	                16},
	{"^c#57d7f7^🔈 Vol: ",        "sl-volume",	   0,	                10},
	{"^c#8787f7^💾 Disk: ",       "sl-disk",     360,	                21},
	{"^c#57e7d7^⚡ Bat: ",        "sl-battery",	  12,	                 7},
	{"^c#57d7f7^🕗 ",             "sl-date",  	   5,	                18},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
