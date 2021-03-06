// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.


#include "Portal.h"
#include "Engine/Public/TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Components/SceneComponent.h"

// Sets default values
// This function is generated by UE4
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
// This function is generated by UE4
void APortal::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &APortal::OnOverlapBegin);
	
}

// Called every frame
// This function is generated by UE4
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// This function is adapted from the tutorial
// Respawn the pawn to another location
// Called when the pawn object overlaps with the portal object
void APortal::Teleport(AActor* Actor)
{
	USceneComponent* TargetSpawn = Cast<USceneComponent>(Target->GetDefaultSubobjectByName("Spawn"));
	UGameplayStatics::PlaySound2D(this, TeleportSound);
	Actor->SetActorLocation(TargetSpawn->GetComponentLocation());
}

// This function is adapted from the tutorial
// Called when the pawn object overlaps with the portal object
void APortal::OnOverlapBegin(AActor* Portal, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag("Pacman"))
	{
		GetWorldTimerManager().SetTimerForNextTick([OtherActor, this]() { Teleport(OtherActor); });
	}
}

