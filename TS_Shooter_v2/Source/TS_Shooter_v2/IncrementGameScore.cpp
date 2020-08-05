// Fill out your copyright notice in the Description page of Project Settings.


#include "IncrementGameScore.h"

int32 UIncrementGameScore::GetIncrementGameScore(int32 input, int32 currentScore) {
	int32 incrementedScore = currentScore + input;
	return incrementedScore;
}