// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PacmanController2.generated.h"


class APacmanPawn2;

UCLASS()
class PACMAN_API APacmanController2 : public APlayerController
{
	GENERATED_BODY()

protected:
	void SetupInputComponent() override;
	APacmanPawn2* GetPacmanPawn2() const;

private:
	FVector MovementDirection;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float MovementSpeed = 800.0f;

public:
	void MoveForward(float Axis);
	void MoveSideway(float Axis);
};
