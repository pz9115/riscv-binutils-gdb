/* BFD back-end for NetBSD/ns32k a.out-ish binaries.
   Copyright (C) 1990, 1991, 1992 Free Software Foundation, Inc.

This file is part of BFD, the Binary File Descriptor library.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. */

#define	BYTES_IN_WORD	4
#undef TARGET_IS_BIG_ENDIAN_P

#define __LDPGSZ	4096
#define	PAGE_SIZE	__LDPGSZ
#define	SEGMENT_SIZE	__LDPGSZ

#define	DEFAULT_ARCH	bfd_arch_ns32k
#define MACHTYPE_OK(mtype) ((mtype) == M_532_NETBSD || (mtype) == M_UNKNOWN)

#define MY(OP) CAT(pc532netbsd_,OP)
/* This needs to start with a.out so GDB knows it is an a.out variant.  */
#define TARGETNAME "a.out-ns32k-netbsd"

#include "netbsd.h"
