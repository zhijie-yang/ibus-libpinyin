/* vim:set et ts=4 sts=4:
 *
 * ibus-pinyin - The Chinese PinYin engine for IBus
 *
 * Copyright (c) 2011 Peng Wu <alexepico@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __PY_LIB_PINYIN_H_
#define __PY_LIB_PINYIN_H_

typedef struct _pinyin_context_t pinyin_context_t;

namespace PY {
class LibPinyinBackEnd{
public:
    /* use static initializer in C++. */
    static LibPinyinBackEnd & instance (void) { return *m_instance; }

private:
    pinyin_context_t *m_pinyin_context; /* libpinyin context */

private:
    static std::unique_ptr<LibPinyinBackEnd> m_instance;
};
};

#endif
