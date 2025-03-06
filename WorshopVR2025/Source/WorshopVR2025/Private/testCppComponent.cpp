// Fill out your copyright notice in the Description page of Project Settings.


#include "testCppComponent.h"

//classname::methodname

// Sets default values for this component's properties
UtestCppComponent::UtestCppComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UtestCppComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	printf("ahhhhhhhhhh le cpppp au secours");

}


// Called every frame
void UtestCppComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

