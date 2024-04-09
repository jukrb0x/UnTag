// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * A tag for assets
 */
class FUnTag
{
	FUnTag();

	bool Load(FText& OutError);

	bool Save(const TArray<FText>& AdditionalChangelistText, FText& OutError);

	bool Update(FText& OutError);

	bool Merge(const FUnTag& NewTag);

	bool DeleteSourceFile(FText& OutError);

	void Empty();
};
