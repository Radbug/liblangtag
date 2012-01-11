/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * lt-variant-db.h
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
#if !defined (__LANGTAG_H__INSIDE) && !defined (__LANGTAG_COMPILATION)
#error "Only <liblangtag/langtag.h> can be included directly."
#endif

#ifndef __LT_VARIANT_DB_H__
#define __LT_VARIANT_DB_H__

#include <glib.h>
#include <liblangtag/lt-variant.h>

G_BEGIN_DECLS

typedef struct _lt_variant_db_t	lt_variant_db_t;


lt_variant_db_t *lt_variant_db_new   (void);
lt_variant_db_t *lt_variant_db_ref   (lt_variant_db_t *variantdb);
void             lt_variant_db_unref (lt_variant_db_t *variantdb);
lt_variant_t    *lt_variant_db_lookup(lt_variant_db_t *variantdb,
                                      const gchar     *subtag);

G_END_DECLS

#endif /* __LT_VARIANT_DB_H__ */
