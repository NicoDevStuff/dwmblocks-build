#define SPACER {"", "echo "	"",					0,		0},
// Uncomment if you want a battery icon
// #define BATTERY

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.config/dwmblocks/volume.sh",		10,		10},

	{"🔺 ", "~/.config/dwmblocks/uptime.sh",		 60,		          2},
	
	{"📦 ", "~/.config/dwmblocks/pacmanups.sh",  360,		          9},	
	#ifdef BATTERY

	{"", "~/.config/dwmblocks/battery.sh",		1,		2},

	#endif

	{"🧠 ", "~/.config/dwmblocks/ramusage.sh",	2,		1},

	{"📆 ", "date '+%b %d (%a)'",				1,		0},

	{"", "~/.config/dwmblocks/time.sh",			0,		2},
	
	SPACER
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ⏐ ";
static unsigned int delimLen = 5;
