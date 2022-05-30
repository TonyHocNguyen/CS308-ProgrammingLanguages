// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PacmanPawn.generated.h"

UCLASS()
class PACMAN_API APacmanPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacmanPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(BlueprintReadOnly)
		bool Frozen = true;

public:
	void SetDirection(const FVector Direction);
	bool isFrozen() { return Frozen; }

	UFUNCTION(BlueprintCallable)
		void setFrozen(bool Value) { Frozen = Value; }

private:
	UFUNCTION()
		void OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor);
};