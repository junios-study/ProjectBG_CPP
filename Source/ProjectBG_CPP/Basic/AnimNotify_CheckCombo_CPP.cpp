// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify_CheckCombo_CPP.h"


//FString UAnimNotify_CheckCombo_CPP::GetNotifyName_Implementation() const
//{
//	return TEXT("CheckCombo_CPP");
//}

void UAnimNotify_CheckCombo_CPP::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	//캐릭터 주먹 체크 
	UE_LOG(LogTemp, Warning, TEXT("UAnimNotify_CheckCombo_CPP::Notify"));
}
