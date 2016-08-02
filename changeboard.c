/***************************************************************************
 *  Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,        *
 *  Michael Seifert, Hans Henrik St{rfeldt, Tom Madsen, and Katja Nyboe.   *
 *                                                                         *
 *  Merc Diku Mud improvments copyright (C) 1992, 1993 by Michael          *
 *  Chastain, Michael Quan, and Mitchell Tse.                              *
 *                                                                         *
 *  In order to use any part of this Merc Diku Mud, you must comply with   *
 *  both the original Diku license in 'license.doc' as well the Merc       *
 *  license in 'license.txt'.  In particular, you may not remove either of *
 *  these copyright notices.                                               *
 *                                                                         *
 *  Much time and thought has gone into this software and you are          *
 *  benefitting.  We hope that you share your changes too.  What goes      *
 *  around, comes around.                                                  *
 ***************************************************************************/

/***************************************************************************
*	ROM 2.4 is copyright 1993-1995 Russ Taylor			   *
*	ROM has been brought to you by the ROM consortium		   *
*	    Russ Taylor (rtaylor@pacinfo.com)				   *
*	    Gabrielle Taylor (gtaylor@pacinfo.com)			   *
*	    Brian Moore (rom@rom.efn.org)				   *
*	By using this code, you have agreed to follow the terms of the	   *
*	ROM license, in the file Rom24/doc/rom.license			   *
***************************************************************************/

/*************************************************************************** 
*       ROT 1.4 is copyright 1996-1997 by Russ Walsh                       * 
*       By using this code, you have agreed to follow the terms of the     * 
*       ROT license, in the file doc/rot.license                           * 
***************************************************************************/

#if defined(macintosh)
#include <types.h>
#else
#include <sys/types.h>
#endif
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "merc.h"

#define CHANGE_FILE "change.dat"

/**
 * Load changeboard into the game
 * Should be able to do this upon startup and on demand
 * Intend to support MySQL databases when integrated
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void load_changeboard(CHAR_DATA *ch, char *argument)
{
	return;
}

/**
 * Save the current changeboard
 * Should be able to do this on demand
 * Adding, Deleting, or Editting changes will call this
 * Intend to support MySQL databases when integrated
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void save_changeboard(CHAR_DATA *ch, char *argument)
{
	return;
}

/**
 * View changeboard
 * This will display changes in a paginated display.
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void do_changeboard(CHAR_DATA *ch, char *argument)
{
	return;
}

/**
 * Add a change
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void add_change(CHAR_DATA *ch, char *argument)
{
	return;
}

/**
 * Edit a change
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void edit_change(CHAR_DATA *ch, char *argument)
{
	return;
}

/**
 * Delete a change
 * 
 * @param CHAR_DATA *ch
 * @param char *argument
 */
void delete_change(CHAR_DATA *ch, char *argument)
{
	return;
}