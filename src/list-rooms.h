/**
 * \file list-rooms.h
 * \brief matches dungeon room names to their building functions
 *
 * Fields:
 * name: name as appears in edit files
 * rows: Maximum number of rows (for vaults)
 * cols: Maximum number of columns (for vaults)
 * builder: name of room building function (with build_ prepended)
 */

/* name						rows	cols	builder */
ROOM("staircase room",		0,		0,		staircase)
ROOM("simple room",			0,		0,		simple)
ROOM("square garden",		0,		0,		square_garden)
ROOM("lit room",			0,		0,		simple_lit)
ROOM("dark room",			0,		0,		simple_dark)
ROOM("Sil room",			0,		0,		simple_sil)
ROOM("small room",			0,		0,		small)
ROOM("moria room",			0,		0,		moria)
ROOM("large room",			0,		0,		large)
ROOM("crossed room",		0,		0,		crossed)
ROOM("Sil crossed room",	0,		0,		crossed_sil)
ROOM("All crossed room",	0,		0,		crossed_all)
ROOM("circular room",		0,		0,		circular)
ROOM("terrain room",		0,		0,		circular_terrain)
ROOM("overlap room",		0,		0,		overlap)
ROOM("bridge room",			0,		0,		bridge)
ROOM("room template",		11,		33,		template)
ROOM("Interesting room",	40,		50,		interesting)
ROOM("Least vault",			22,		44,		least_vault)
ROOM("monster pit",			0,		0,		pit)
ROOM("mini pit",			0,		0,		pit_mini)
ROOM("monster nest",		0,		0,		nest)
ROOM("terrain nest",		0,		0,		nest_terrain)
ROOM("huge room",			0,		0,		huge)
ROOM("room of chambers",	0,		0,		room_of_chambers)
ROOM("Lesser vault",		22,		22,		lesser_vault)
ROOM("Medium vault",		22,		33,		medium_vault)
ROOM("Greater vault",		44,		66,		greater_vault)
ROOM("Lesser vault (new)",	22,		22,		lesser_vault)
ROOM("Medium vault (new)",	22,		33,		medium_vault)
ROOM("Greater vault (new)",	44,		66,		greater_vault)

