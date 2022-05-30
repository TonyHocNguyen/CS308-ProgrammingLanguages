// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PawnMovementComponent.h"

#include "PacmanPawn2.generated.h"

UCLASS()
class PACMAN_API APacmanPawn2 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacmanPawn2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//APacmanPawn2* GetPacmanPawn() const;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void SetDirection(const FVector Direction);
	void MoveForward(float axis);
	void MoveSideway(float axis);

private:
	UFUNCTION()
		void OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor);

	// variable used for new movement binding
private:
	FVector MovementDirection;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float MovementSpeed = 800.0f;
};