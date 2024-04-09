// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

#include "AssetTypeActions_UnTag.generated.h"

/**
 * 
 */
class FAssetTypeActions_UnTag : public FAssetTypeActions_Base
{
public:
	virtual FText GetName() const override
	{
		return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_UnTag", "UnTag");
	}
};
