#define CMDLENGTH 45
#define DELIMITER "     "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
//	BLOCK("/home/scottg/scripts/statusbar/wttr",    3600,    8),
	BLOCK("/home/scottg/scripts/statusbar/vol",    1,    7),
	BLOCK("/home/scottg/scripts/statusbar/nwrk",    10,    6),
//	BLOCK("/home/scottg/scripts/statusbar/hdd",    60000,    5),
//	BLOCK("/home/scottg/scripts/statusbar/cpu",    5000,    4),
	BLOCK("/home/scottg/scripts/statusbar/mem",    1,    3),
	BLOCK("/home/scottg/scripts/statusbar/bat",    1,    2),
	BLOCK("/home/scottg/scripts/statusbar/clock",    1,    1)
};
