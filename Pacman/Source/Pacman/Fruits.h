// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fruits.generated.h"

class USoundCue;

UENUM(BlueprintType)
enum class EFruitsType : uint8 {
	Regular,
	Boost
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFruitsEatenEvent, EFruitsType, FruitsType);

UCLASS()
class PACMAN_API AFruits : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFruits();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Eat();

	UPROPERTY(EditAnywhere)
		EFruitsType FruitsType = EFruitsType::Regular;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FFruitsEatenEvent FruitsEatenEvent;

private:
	UPROPERTY(EditAnywhere)
		USoundCue* EatSound;

};
