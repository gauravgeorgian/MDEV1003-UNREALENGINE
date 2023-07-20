// Include the necessary libraries and headers
#include "MyGameMode.h"
#include "Engine.h"
#include "GameFramework/Character.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"

// Constants
const FString BackgroundSoundPath = TEXT("/Game/Sounds/background_sound.background_sound");
const FString GunShotSoundPath = TEXT("/Game/Sounds/gun_shot_sound.bubble_popping_noise");
const FString SplatSoundPath = TEXT("/Game/Sounds/splat_sound.splat_sound");
const FLinearColor GCBrandColor = FLinearColor(0.0f, 0.5f, 0.0f);
const FString GCLogoPath = TEXT("/Game/Textures/gc_logo.gc_logo");
const FString CubeMeshPath = TEXT("/Game/Meshes/cube.cube");
const FString GunMeshPath = TEXT("/Game/Meshes/gun.gun");
const FString SplatMeshPath = TEXT("/Game/Meshes/splat.splat");

// Variables
UAudioComponent* BackgroundSound;
UAudioComponent* GunShotSound;
UAudioComponent* SplatSound;
UStaticMeshComponent* CubeMesh;
UStaticMeshComponent* GunMesh;
UStaticMeshComponent* SplatMesh;
UTextRenderComponent* TextLabel;

// Function to play the background soundtrack
void AMyGameMode::PlayBackgroundSound()
{
    BackgroundSound = UGameplayStatics::SpawnSound2D(GetWorld(), LoadObject<USoundBase>(nullptr, *BackgroundSoundPath));
}

// Function to change the gunshot sound to bubble popping noise
void AMyGameMode::ChangeGunShotSound()
{
    GunShotSound = UGameplayStatics::SpawnSoundAttached(LoadObject<USoundBase>(nullptr, *GunShotSoundPath), GunMesh);
}

// Function to add splat sound when bubble impacts something
void AMyGameMode::AddSplatSound()
{
    SplatSound = UGameplayStatics::SpawnSoundAttached(LoadObject<USoundBase>(nullptr, *SplatSoundPath), SplatMesh);
}

// Function to change the arena's colors to GC brand colors
void AMyGameMode::SetArenaColors()
{
    CubeMesh->SetMaterial(0, LoadObject<UMaterialInterface>(nullptr, *GCBrandMaterialPath));
    // Set the colors of other arena elements as desired
}

// Function to add a text label to the floor of the arena
void AMyGameMode::AddTextLabel()
{
    TextLabel = GetWorld()->SpawnActor<UTextRenderComponent>(ATextRenderActor::StaticClass());
    TextLabel->SetText(FText::FromString("Your Name - Course Code"));
    // Set the position, rotation, font size, and other properties of the text label as desired
}

// Function to place the GC logo as a picture on the back wall
void AMyGameMode::AddGCLogo()
{
    UMaterialInterface* GCLogoMaterial = LoadObject<UMaterialInterface>(nullptr, *GCLogoMaterialPath);
    // Create a plane or mesh for the back wall and apply the GC logo material
}

// Function to add a 3D object of your choice to the arena
void AMyGameMode::Add3DObject()
{
    UStaticMesh* My3DObjectMesh = LoadObject<UStaticMesh>(nullptr, *My3DObjectMeshPath);
    UStaticMeshComponent* My3DObject = GetWorld()->SpawnActor<UStaticMeshComponent>(AStaticMeshActor::StaticClass());
    My3DObject->SetStaticMesh(My3DObjectMesh);
    // Set the position, rotation, scale, and other properties of the 3D object as desired
}

// Function to make the cube disappear in an explosion when hit
void AMyGameMode::CubeHitExplosion()
{
    // Implement the explosion effect when the cube is hit
    CubeMesh->SetVisibility(false);
}

// Function to set the gun to fire continuously when shooting, automatic machine gun style
void AMyGameMode::SetContinuousGunFire()
{
    // Implement the continuous gun firing logic
}

// Function to change the default Unreal Engine application icon to one of your choice
void AMyGameMode::ChangeAppIcon()
{
    // Replace the default application icon with your custom icon
}

// Function to comment the code
void AMyGameMode::CommentCode()
{
    // Add comments to explain the purpose and functionality of the code
}
