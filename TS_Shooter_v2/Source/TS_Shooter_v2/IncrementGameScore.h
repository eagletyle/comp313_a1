// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IncrementGameScore.generated.h"

/**
 * 
 */
UCLASS()
class TS_SHOOTER_V2_API UIncrementGameScore : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "IncrementGameScore", CompactNodeTitle = "IncrementGameScore"), Category =
			"General Parameters")

		static int32 GetIncrementGameScore(int32 input, int32 currentScore);
};
