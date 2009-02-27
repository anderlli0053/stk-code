//  $Id: mesh_tools.hpp 3001 2009-01-20 13:51:08Z hikerstk $
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2009 Joerg Henrichs
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
#ifdef HAVE_IRRLICHT

#ifndef HEADER_MESH_TOOLS_HPP
#define HEADER_MESH_TOOLS_HPP

#include "irrlicht.h"
using namespace irr;

#include "utils/vec3.hpp"

namespace MeshTools
{
    void minMax3D(scene::IMesh* mesh, Vec3 *min, Vec3 *max);
}   // MeshTools

#endif
#endif   // HAVE_IRRLICHT
