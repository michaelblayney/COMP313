// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimerIncrementBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONGAME_API UTimerIncrementBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Timer Increment", CompactNodeTitle = "TimerIncr"), Category = "Time")
    static int IncrementTimer(int time);
	
};
