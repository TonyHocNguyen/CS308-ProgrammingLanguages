// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ghosts.generated.h"

UENUM(BlueprintType)
enum class EGhostState : uint8 {
	Default,
	Stop
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStateChangedEvent, EGhostState, NewState);

UCLASS()
class PACMAN_API AGhosts : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EGhostState State = EGhostState::Default;
	UFUNCTION(BlueprintCallable)
		void Hunt();
	UFUNCTION(BlueprintCallable)
		void Stop();

	FGhostStateChangedEvent& OnStateChanged() { return StateChangedEvent; }

private:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FGhostStateChangedEvent StateChangedEvent;
};
