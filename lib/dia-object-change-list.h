/* Dia -- an diagram creation/manipulation program
 * Copyright (C) 1999 Alexander Larsson
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright © 2020 Zander Brown <zbrown@gnome.org>
 */

#pragma once

#include "dia-object-change.h"

G_BEGIN_DECLS

#define DIA_TYPE_OBJECT_CHANGE_LIST dia_object_change_list_get_type ()
G_DECLARE_FINAL_TYPE (DiaObjectChangeList, dia_object_change_list, DIA, OBJECT_CHANGE_LIST, DiaObjectChange)

DiaObjectChange *dia_object_change_list_new (void);
void             dia_object_change_list_add (DiaObjectChangeList *self,
                                             DiaObjectChange     *change);

G_END_DECLS
