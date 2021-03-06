// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "TankPawn.h"
#include "SceneManagement.h"
#include "CryptoPP/5.6.5/include/misc.h"
#include "DrawDebugHelpers.h"



void ATankPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ATankPlayerController::MoveForward);
	InputComponent->BindAxis("RotateRight", this, &ATankPlayerController::RotateRight);
	InputComponent->BindAction("Fire", IE_Pressed, this, &ATankPlayerController::Fire);
}

void ATankPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!TankPawn)
	{
		return;
	}

	FVector WorldMousePosition, WorldMouseDirection;
	DeprojectMousePositionToWorld(WorldMousePosition,WorldMouseDirection);

	FVector TargetTurretDirection = WorldMousePosition - TankPawn->GetActorLocation();

	TargetTurretDirection.Z = 0.f;
	TargetTurretDirection.Normalize();
	FVector TurretTargetPosition = TankPawn->GetActorLocation() + TargetTurretDirection * 1000.f;
	DrawDebugLine(GetWorld(), TankPawn->GetActorLocation(), TurretTargetPosition, FColor::Green, false, 0.1f, 0, 3.f);
	TankPawn->SetTurretTargetPosition(TurretTargetPosition);
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TankPawn = Cast<ATankPawn>(GetPawn());
	bShowMouseCursor = true;
}

void ATankPlayerController::MoveForward(float AxisValue)
{

	TankPawn->MoveForward(AxisValue);
}

void ATankPlayerController::RotateRight(float InAxisValue)
{
	if (TankPawn)
	{
    TankPawn->RotateRight(InAxisValue);
    }
	
	
}

void ATankPlayerController::Fire()
{
	 if (TankPawn)
	{
		TankPawn->Fire();
	}
		
}

void ATankPlayerController::FireSpecial()
{
	if (TankPawn)
	{
		TankPawn->FireSpecial();
	}

}