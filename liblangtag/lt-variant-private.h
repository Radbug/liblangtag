/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * lt-variant-private.h
 * Copyright (C) 2011-2012 Akira TAGOH
 * 
 * Authors:
 *   Akira TAGOH  <akira@tagoh.org>
 * 
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __LT_VARIANT_PRIVATE_H__
#define __LT_VARIANT_PRIVATE_H__

#include <glib.h>
#include "lt-variant.h"

G_BEGIN_DECLS

lt_variant_t *lt_variant_create           (void);
void          lt_variant_set_tag          (lt_variant_t *variant,
                                           const gchar  *subtag);
void          lt_variant_set_preferred_tag(lt_variant_t *variant,
                                           const gchar  *subtag);
void          lt_variant_set_name         (lt_variant_t *variant,
                                           const gchar  *description);
void          lt_variant_add_prefix       (lt_variant_t *variant,
                                           const gchar  *prefix);

G_END_DECLS

#endif /* __LT_VARIANT_PRIVATE_H__ */
