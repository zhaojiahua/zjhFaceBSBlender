//
// Copyright (C) ZhaoJiahua
// 
// File: pluginMain.cpp
//
// Author: Maya Plug-in Wizard 2.0
//

#include "zjhFaceBSBlenderNode.h"

#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject obj)
{
	MStatus   status;
	MFnPlugin plugin(obj, "ZhaoJiahua", "2022", "Any");

	status = plugin.registerNode("zjhFaceBSBlender", zjhFaceBSBlender::id, zjhFaceBSBlender::creator,
		zjhFaceBSBlender::initialize);
	if (!status) {
		status.perror("registerNode");
		return status;
	}

	return status;
}

MStatus uninitializePlugin(MObject obj)
{
	MStatus   status;
	MFnPlugin plugin(obj);

	status = plugin.deregisterNode(zjhFaceBSBlender::id);
	if (!status) {
		status.perror("deregisterNode");
		return status;
	}

	return status;
}
