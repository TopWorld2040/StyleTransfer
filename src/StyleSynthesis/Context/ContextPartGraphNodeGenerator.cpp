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

#include "ContextPartGraphNodeGenerator.h"

using namespace StyleSynthesis;

ContextPartGraphNodeGenerator::ContextPartGraphNodeGenerator() {

	mNodesPool.clear();
}

ContextPartGraphNodeGenerator::~ContextPartGraphNodeGenerator() {

	int numNodes = (int)mNodesPool.size();
	for (int nodeID = 0; nodeID < numNodes; nodeID++) {
		if(mNodesPool[nodeID]) delete mNodesPool[nodeID];
		mNodesPool[nodeID] = 0;
	}
	mNodesPool.clear();
}

ContextPartGraphNode *ContextPartGraphNodeGenerator::generateNode() {

	ContextPartGraphNode *node = new ContextPartGraphNode();
	mNodesPool.push_back(node);
	return node;
}