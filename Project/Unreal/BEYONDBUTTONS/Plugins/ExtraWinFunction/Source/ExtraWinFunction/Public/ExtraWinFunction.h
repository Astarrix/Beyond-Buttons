// Copyright Gdy Development, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FExtraWinFunctionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
