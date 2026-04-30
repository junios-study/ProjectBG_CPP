// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify_CheckCombo_CPP.h"
#include "BasicPlayer.h"

//FString UAnimNotify_CheckCombo_CPP::GetNotifyName_Implementation() const
//{
//	return TEXT("CheckCombo_CPP");
//}

void UAnimNotify_CheckCombo_CPP::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	ABasicPlayer* Pawn = Cast<ABasicPlayer>(MeshComp->GetOwner());
	if (Pawn)
	{
		Pawn->CheckCombo();
	}

}
