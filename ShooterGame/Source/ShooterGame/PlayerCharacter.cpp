// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"),EInputEvent::IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"),this,&APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUp"),this,&APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"),this,&APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookRight"),this,&APawn::AddControllerYawInput);

}



void APlayerCharacter::MoveForward(float AxisScale)
{
	AddMovementInput(GetActorForwardVector() * AxisScale);
}

void APlayerCharacter::MoveRight(float AxisScale)
{
	AddMovementInput(GetActorRightVector()*AxisScale);
}


