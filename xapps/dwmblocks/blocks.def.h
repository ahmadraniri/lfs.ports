//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "date '+%b %d (%a) %I:%M %p'",					15,		0},
	{"", "acpi | awk '{print $3,$4}' | cut -d ',' -f -2",					15,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
