// Fill out your copyright notice in the Description page of Project Settings.

#include "FL_Helper.h"

AActor* UFL_Helper::RenameObject(FString _Name, AActor* _Actor)
{
#if WITH_EDITOR
	_Actor->SetActorLabel(*_Name);
#endif
	return _Actor;
}


