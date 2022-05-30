// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

class USoundCue;

UCLASS()
class PACMAN_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Teleport(AActor* Actor);

	UPROPERTY(EditAnywhere)
		APortal* Target = nullptr;

	UPROPERTY(EditAnywhere)
		USoundCue* TeleportSound;

	UFUNCTION()
		void OnOverlapBegin(AActor* Portal, AActor* OtherActor);
};
