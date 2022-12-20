// Copyright (C) 2018 JackMyth. All Rights Reserved.

#pragma once

#include "UE5EditorCustomize.h"
#include <IDetailCustomization.h>

/**
 *
 */
class UE5ECSettingsCustomization :public IDetailCustomization
{
public:
	UE5ECSettingsCustomization();
	~UE5ECSettingsCustomization();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLyoutBuilder) override;
};

/*class UE5ECCustomStyleEditorCustomization :public IDetailCustomization
{
	// Inherited via IDetailCustomization
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
};*/