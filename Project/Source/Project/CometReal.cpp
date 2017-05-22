// Fill out your copyright notice in the Description page of Project Settings.

#include "Project.h"
#include "CometReal.h"


// Sets default values
ACometReal::ACometReal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 
	Root = CreateDefaultSubobject<UBoxComponent>(TEXT("Box")); 
	RootComponent = Root; 
	SpeedScale = 0.0f; 

}

// Called when the game starts or when spawned
void ACometReal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACometReal::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector NewLocation = GetActorLocation(); 
	RunningTime += DeltaTime; 
	NewLocation.X += RunningTime * SpeedScale; 
	SetActorLocation(NewLocation); 

}

