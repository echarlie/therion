/**
 * @file thexpsys.cxx
 */
  
/* Copyright (C) 2000 Stacho Mudrak
 * 
 * $Date: $
 * $RCSfile: $
 * $Revision: $
 *
 * -------------------------------------------------------------------- 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * --------------------------------------------------------------------
 */
 
#include "thexpsys.h"
#include "thexception.h"
#include "thdatabase.h"

thexpsys::thexpsys() {
  this->cmd = "";
}


void thexpsys::process_db(class thdatabase * /*dbp*/) 
{
  thprintf("system: %s\n", this->cmd);
  int retcode = system(this->cmd);
  if (retcode != EXIT_SUCCESS)
    thwarning(("system exit code -- %d", retcode))
}
