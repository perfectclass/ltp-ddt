/*
 *
 *   Copyright (c) Red Hat Inc., 2008
 *
 *   This program is free software;  you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY;  without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program;  if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/* Author: Masatake YAMATO <yamato@redhat.com> */

#ifndef __GETGID_COMPAT_16_H__
#define __GETGID_COMPAT_16_H__


#include "linux_syscall_numbers.h"
#include "compat_gid.h"


#ifdef TST_USE_COMPAT16_SYSCALL

GID_T
GETGID(void)
{
	return syscall(__NR_getgid);
}

GID_T
GETEGID(void)
{
	return syscall(__NR_getegid);
}

#else

GID_T
GETGID(void)
{
	return getgid();
}

GID_T
GETEGID(void)
{
	return getegid();
}

#endif

#endif /* __GETGID_COMPAT_16_H__ */
