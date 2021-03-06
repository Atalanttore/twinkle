/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// Content-Type header

#ifndef _HDR_CONTENT_TYPE_H
#define _HDR_CONTENT_TYPE_H

#include "header.h"
#include "media_type.h"

class t_hdr_content_type : public t_header {
public:
	t_media	media;

	t_hdr_content_type();
	void set_media(const t_media &m);
	string encode_value(void) const;
};

#endif
