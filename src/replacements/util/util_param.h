/*
 * Copyright 2011, Blender Foundation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __UTIL_PARAM_H__
#define __UTIL_PARAM_H__

#include <string>
#include <unordered_map>

/* Parameter value lists from OpenImageIO are used to store custom properties
 * on various data, which can then later be used in shaders. */

//#include <OpenImageIO/paramlist.h>
//#include <OpenImageIO/typedesc.h>
//#include <OpenImageIO/ustring.h>

CCL_NAMESPACE_BEGIN

//OIIO_NAMESPACE_USING

class ParamValue {
 public:
};

class TypeDesc : public std::string {
public:
  TypeDesc() {}
  TypeDesc(std::string name) : std::string(name) {
  }

  static const TypeDesc TypeColor;
  static const TypeDesc TypeFloat;
  static const TypeDesc TypePoint;
  static const TypeDesc TypeNormal;
  static const TypeDesc TypeVector;
};

typedef std::string ustring;
typedef std::hash<std::string> ustringHash;

CCL_NAMESPACE_END

#endif /* __UTIL_PARAM_H__ */

