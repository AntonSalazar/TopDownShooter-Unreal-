// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_Helper.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNSHOOTER_API UFL_Helper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "RenameObject"))
		static AActor* RenameObject(FString _Name, AActor* _Actor);
	
	
};
