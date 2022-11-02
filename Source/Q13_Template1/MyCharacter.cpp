// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "GameFramework\Actor.h"
#include "Components\CapsuleComponent.h"
#include "GameFramework\Character.h"
#include "GameFrameWork\\SpringArmComponent.h"
#include "Camera\\CameraComponent.h"
#include "Components\ArrowComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//			Component
	//		Capsule
	RootComponent = ACharacter::GetCapsuleComponent();
	//		Mesh
	GetMesh()->SetupAttachment(RootComponent);
	//	Do not Specify things. Just Layouts.
	//ConstructorHelpers::FObjectFinder<UStaticMesh> Body(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin_Female.SK_Mannequin_Female'"));
	//		Arrow
	GetArrowComponent()->SetupAttachment(RootComponent);
	//		SpringArm
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	//		Cam
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

