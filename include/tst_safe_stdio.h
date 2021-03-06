/*
 * Copyright (c) 2013-2016 Cyril Hrubis <chrubis@suse.cz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TST_SAFE_STDIO_H__
#define TST_SAFE_STDIO_H__

#include <stdio.h>

#include "safe_stdio_fn.h"

#define SAFE_FOPEN(path, mode) \
	safe_fopen(__FILE__, __LINE__, NULL, path, mode)

#define SAFE_FCLOSE(f) \
	safe_fclose(__FILE__, __LINE__, NULL, f)

#define SAFE_ASPRINTF(strp, fmt, ...) \
	safe_asprintf(__FILE__, __LINE__, NULL, strp, fmt, __VA_ARGS__)

#define SAFE_POPEN(command, type) \
	safe_popen(__FILE__, __LINE__, NULL, command, type)

#endif /* TST_SAFE_STDIO_H__ */
