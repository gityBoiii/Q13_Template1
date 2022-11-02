// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "MyGameStateBase.h"
#include "MyHUD.h"
#include "MyPlayerState.h"
#include "MySpectatorPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	//		로그
	UE_LOG(LogTemp, Warning, TEXT("GameModeBase!"));
	//GEngine->AddOnScreenDebugMessage(0, 10.0f, FColor::Yellow, TEXT
	//("GM Log!"));

	//			설정
	//		DefaultPawn 
	DefaultPawnClass = AMyCharacter::StaticClass();
	//		PC
	PlayerControllerClass = AMyPlayerController::StaticClass();
	//		GameState 
	GameStateClass = AMyGameStateBase::StaticClass();
	//		HUD
	HUDClass = AMyHUD::StaticClass();
	//		PlayerState
	PlayerStateClass = AMyPlayerState::StaticClass();
	// SpectatorPawnClass
	SpectatorClass = AMySpectatorPawn::StaticClass();
}
