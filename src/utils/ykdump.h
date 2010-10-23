/*
* YubiKey PAM Database Dumping Utility
*
* Copyright (C) 2008-2010 Ian Firns		firnsy@securixlive.com
* Copyright (C) 2008-2010 SecurixLive	dev@securixlive.com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
* http://www.gnu.org/copyleft/gpl.html
*/

#ifndef __YK_DUMP_H__
#define __YK_DUMP_H__

#include "ykversion.h"

#define MODE_VERSION		1
#define MODE_USAGE			2
#define MODE_SEARCH_USER  	8
#define MODE_SEARCH_PUBLIC	16
#define MODE_SEARCH_INDEX 	32
#define MODE_DUMP_ALL       128

#endif /* __YK_DUMP_H__*/ 
