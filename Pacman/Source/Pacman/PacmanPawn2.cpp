// // This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.


#include "PacmanPawn2.h"
#include "Fruits.h"
using namespace std;

// Sets default values
// This function is generated by UE4
APacmanPawn2::APacmanPawn2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
// This function is generated by UE4
void APacmanPawn2::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &APacmanPawn2::OnOverlapBegin);

}

// Called every frame
// This function is generated by UE4
void APacmanPawn2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// new input binding
	if (!MovementDirection.IsZero())
	{
		const FVector NewLocation = GetActorLocation() + (MovementDirection * DeltaTime * MovementSpeed);
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
// This function is generated by UE4
void APacmanPawn2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// new movement binding
	InputComponent->BindAxis("MoveForward", this, &APacmanPawn2::MoveForward);
	InputComponent->BindAxis("MoveSideway", this, &APacmanPawn2::MoveSideway);
}

// My implementation of the pawn movement binding
// Movement on the X axis
void APacmanPawn2::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
	SetDirection(Direction);
}

// My implementation of the pawn movement binding
// Movement on the Y axis
void APacmanPawn2::MoveSideway(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
	SetDirection(Direction);
}

// Set up pawn's rotations
void APacmanPawn2::SetDirection(const FVector Direction)
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
void APacmanPawn2::OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag("Fruits.Regular") || OtherActor->ActorHasTag("Fruits.Boost"))
	{
		Cast<AFruits>(OtherActor)->Eat();
	}
}