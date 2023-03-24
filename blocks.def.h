#define SPACER {"", "echo "	"",					0,		0},
// Uncomment if you want a battery icon
// #define BATTERY

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	SPACER

	{"", "~/.config/dwmblocks/volume.sh",		0,		10},
	
	{"💻 ", "~/.config/dwmblocks/cpuusage.sh",	6,		1},
	
	#ifdef BATTERY

	{"", "~/.config/dwmblocks/battery.sh",		6,		1},

	#endif

	{"🔥 ", "~/.config/dwmblocks/cputemp.sh",	6,		1},

	{"🧠 ", "~/.config/dwmblocks/ramusage.sh",	6,		1},

	{"📆 ", "date '+%b %d (%a)'",				1,		0},

	{"", "~/.config/dwmblocks/time.sh",			0,		2},
	
	SPACER
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ⏐ ";
static unsigned int delimLen = 5;
