// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Shared.generated.h"

USTRUCT(BlueprintType)
struct FTutorialEntry : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta = (MultiLine="true"))
	FText Content;

	FTutorialEntry()
	{
	}

	FTutorialEntry(FText InCategory,FText InID,FText InTitle, FText InContent)
	{
		Category = InCategory;
		ID = InID;
		Title = InTitle;
		Content = InContent;
	}

};
