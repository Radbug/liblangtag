#! /bin/sh
# buildaliastbl.sh
# Copyright (C) 2011-2012 Akira TAGOH
#
# Authors:
#   Akira TAGOH  <akira@tagoh.org>
#
# You may distribute under the terms of either the GNU
# Lesser General Public License or the Mozilla Public
# License, as specified in the README file.

if [ $# -ne 1 ]; then
    cat<<EOF
Usage: $0 /path/to/locale.alias

This tool is to generate the alias table in C from locale.alias.
EOF
    exit 1
fi

cat<<EOF
/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* THIS HEADER FILE WAS GENERATED BY THE SCRIPT.
 * ANY CHANGES MADE BY THE HAND MAY BE MISSED.
 */
/* 
 * lt-localealias.h
 * Copyright (C) 2011-2012 Akira TAGOH
 * 
 * Authors:
 *   Akira TAGOH  <akira@tagoh.org>
 * 
 * You may distribute under the terms of either the GNU
 * Lesser General Public License or the Mozilla Public
 * License, as specified in the README file.
 */
#ifndef __LT_LOCALEALIAS_H__
#define __LT_LOCALEALIAS_H__

#include <liblangtag/lt-macros.h>

LT_BEGIN_DECLS

typedef struct _lt_localealias_t	lt_localealias_t;

struct _lt_localealias_t {
	char *alias;
	char *locale;
};

static lt_localealias_t __lt_localealias_tables[] = {
EOF

iconv -f iso8859-1 -t utf-8 $1 | sed -e '/^#.*/{d};/^$/{d};' -e 's/^\([^ \t]*\)[ \t]*\([^ \t]*\)$/\t{"\1", "\2"},/'

cat<<EOF
	{NULL, NULL}
};

LT_END_DECLS

#endif /* __LT_LOCALEALIAS_H__ */
EOF