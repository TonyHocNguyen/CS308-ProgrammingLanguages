// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#include "PacmanPawn.h"
#include "Fruits.h"


// Sets default values
// This function is generated by UE4
APacmanPawn::APacmanPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
// This function is generated by UE4
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &APacmanPawn::OnOverlapBegin);
}

// Called every frame
// This function is generated by UE4
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Frozen)
	{
		AddMovementInput(GetActorForwardVector());
	}
}

// Called to bind functionality to input
// This function is generated by UE4
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// Setting up pawn's directions
void APacmanPawn::SetDirection(const FVector Direction)
{
	if (Direction == FVector::UpVector)
	{
		SetActorRotation(FRotator(0, 270, 0));
	}
	else if (Direction == FVector::DownVector) 
	{
		SetActorRotation(FRotator(0, 90, 0));
	}
	else if (Direction == FVector::RightVector) 
	{
		SetActorRotation(FRotator(0, 0, 0));
	}
	else if (Direction == FVector::LeftVector) 
	{
		SetActorRotation(FRotator(0, 180, 180));
	}
}

// Called when this object overlaps with another object
void APacmanPawn::OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag("Fruits.Regular") || OtherActor->ActorHasTag("Fruits.Boost"))
	{
		Cast<AFruits>(OtherActor)->Eat();
	}
}

