// This project is based on a tutorial from Awesome Tuts with some modifications of my own.
// I do not own the visual blueprints used as a starter content for the game.


#include "Fruits.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
// This function is generated by UE4
AFruits::AFruits()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
// This function is generated by UE4
void AFruits::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
// This function is generated by UE4
void AFruits::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// This function is adapted from the tutorial
// Called when Pacman overlaps with the fruits
void AFruits::Eat()
{
	UGameplayStatics::PlaySound2D(this, EatSound);
	FruitsEatenEvent.Broadcast(FruitsType);
	Destroy();
}

