#pragma once

#include "Modules/ModuleManager.h"

class FSpencerModModule : public FDefaultGameModuleImpl {
public:
	virtual void StartupModule() override;

	virtual bool IsGameModule() const override { return true; }
};