// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CheckCombo_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTBG_CPP_API UAnimNotify_CheckCombo_CPP : public UAnimNotify
{
	GENERATED_BODY()
public:

	FORCEINLINE FString GetNotifyName_Implementation() const
	{
		return TEXT("CheckCombo_CPP");
	}

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

};
