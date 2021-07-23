// Fill out your copyright notice in the Description page of Project Settings.


#include "BellicoseBall.h"

// Sets default values
ABellicoseBall::ABellicoseBall()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABellicoseBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABellicoseBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABellicoseBall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Logic to follow the player
void ABellicoseBall::FollowPlayer() {
    MoveToPlayer();
}
