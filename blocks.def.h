//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"🔊 ", "~/.config/dwmblocks/volume.sh",	1,		0},
	
	{"💻", "~/.config/dwmblocks/cpuusage.sh",	1,		0},
	
	{"🔥 ", "~/.config/dwmblocks/cputemp.sh",	1,		0},

	{"🧠 ", "~/.config/dwmblocks/ramusage.sh",	1,		0},

	{"📆 ", "date '+%b %d (%a) %I:%M%p'",		1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
