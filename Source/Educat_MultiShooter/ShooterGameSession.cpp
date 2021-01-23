// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterGameSession.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"

void AShooterGameSession::RegisterServer()
{
	Super::RegisterServer();

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();

	IOnlineSessionPtr Session = OnlineSubsystem->GetSessionInterface();

	FOnlineSessionSettings Setting;

	Setting.bIsDedicated = true;
	Setting.bIsLANMatch = false;
	Setting.bAllowJoinInProgress = true;
	Setting.bShouldAdvertise = true;
	Setting.NumPublicConnections = 16;
	Setting.bUsesPresence = true;

	Session->CreateSession(0, GameSessionName, Setting);
}
