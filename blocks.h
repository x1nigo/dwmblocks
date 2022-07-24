//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/										/*Update Interval*/	/*Update Signal*/
	{"", "sh ~/.config/dwmblocks/modules/volume.sh",                        10,     10},

	{"", "sh ~/.config/dwmblocks/modules/mic.sh",                           10,      1},

	{"", "sh ~/.config/dwmblocks/modules/temperature.sh",                    5,     16},

	{"", "sh ~/.config/dwmblocks/modules/brightness.sh",                    20,     12},
	
	{"", "sh ~/.config/dwmblocks/modules/memory.sh",                         5,      7}, 

	{"", "sh ~/.config/dwmblocks/modules/cpu.sh",                            5,      8}, 

	{"", "sh ~/.config/dwmblocks/modules/nettraffic.sh",                     1,     17},

	{"", "sh ~/.config/dwmblocks/modules/battery.sh",                       10,      6},

	{"", "sh ~/.config/dwmblocks/modules/date.sh",                           5,      9},
	
	{"", "sh ~/.config/dwmblocks/modules/network.sh",                       10,     22},

	{"", "sh ~/.config/dwmblocks/modules/lock.sh",                          25,      4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
