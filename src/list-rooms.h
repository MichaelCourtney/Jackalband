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
ROOM("lit clearing",		0,		0,		dnm_clearing)
ROOM("abandoned building",	0,		0,		dnm_building)
ROOM("simple room",			0,		0,		simple)
ROOM("tall room",			0,		0,		tall)
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
ROOM("moated pit",			0,		0,		pit_moat)
ROOM("kennel",				0,		0,		kennel)
ROOM("storeroom",			0,		0,		storeroom)
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
ROOM("Plains lesser",		12,		16,		lesser_vault)
ROOM("Plains greater",		21,		21,		greater_vault)
ROOM("Mountains lesser",	11,		23,		lesser_vault)
ROOM("Mountains greater",	22,		22,		greater_vault)
ROOM("Forest lesser",		12,		24,		lesser_vault)
ROOM("Forest greater",		13,		25,		greater_vault)
ROOM("Swamp lesser",		10,		16,		lesser_vault)
ROOM("Swamp greater",		20,		20,		greater_vault)
ROOM("Desert lesser",		11,		15,		lesser_vault)
ROOM("Desert greater",		19,		37,		greater_vault)
ROOM("River lesser",		12,		23,		lesser_vault)
ROOM("River greater",		22,		30,		greater_vault)
ROOM("Wilderness lesser",	12,		20,		lesser_vault)
ROOM("Wilderness greater",	22,		33,		greater_vault)
ROOM("Small web",			14,		16,		lesser_vault)
ROOM("Medium web",			16,		16,		medium_vault)
ROOM("Large web",			15,		31,		greater_vault)


