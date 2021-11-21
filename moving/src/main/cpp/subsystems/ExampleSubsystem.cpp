// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/ExampleSubsystem.h"
#include "subsystems/VictorSPX.h"

using namespace ctre::phoenix::motorcontrol::can;

ExampleSubsystem::ExampleSubsystem() {
	// Implementation of subsystem constructor goes here.
	VictorSPX left1 = VictorSPX{0};
	VictorSPX left2 = VictorSPX{1};
	VictorSPX right1 = VictorSPX{2};
	VictorSPX right2 = VictorSPX{3};
}

void ExampleSubsystem::Periodic() {
	// Implementation of subsystem periodic method goes here.
}

void ExampleSubsystem::SimulationPeriodic() {
	// Implementation of subsystem simulation periodic method goes here.
}
