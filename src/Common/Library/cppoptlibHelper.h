//============================================================================
//
// This file is part of the Style Transfer project.
//
// Copyright (c) 2016
// -Zhaoliang Lun, Evangelos Kalogerakis (authors of the code) / UMass-Amherst
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this software.  If not, see <http://www.gnu.org/licenses/>.
//
//============================================================================

#pragma once

// disable compiling warning inside cppoptlib
#pragma warning(push)
#pragma warning(disable:4244)
#pragma warning(disable:4267)
#pragma warning(disable:4554)

#include "cppoptlib/meta.h"
#include "cppoptlib/problem.h"
#include "cppoptlib/solver/lbfgsbsolver.h"

// restore compiling warning
#pragma warning(pop)